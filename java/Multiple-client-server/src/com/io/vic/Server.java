package com.io.vic;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class Server {
    private static ServerSocket socket;
    private static Socket client;
    private static PrintWriter out;
    private static BufferedReader in;
    private static ArrayList<ClientHandler> clientHandlers;
    private static ExecutorService executorServicepool= Executors.newFixedThreadPool(5);

    public static void main(String[] args) {
        clientHandlers=new ArrayList<>();
        {
            try {
                socket = new ServerSocket(8088);
                while (true) {
                    client = socket.accept();
                    System.out.println("Server connected to client");
                    ClientHandler clientHandler=new ClientHandler(client);
                    clientHandlers.add(clientHandler);

                    executorServicepool.execute(clientHandler);
                }

            } catch (IOException e) {
                e.printStackTrace();
            }finally {
                out.close();
                try {
                    client.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }




}
