package com.io.vic;

import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.ArrayList;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class Server {
    private static ServerSocket socket;
    private static Socket client;

  //  private static ArrayList<ClientHandler> clientHandlers;
    private static ExecutorService executorServices = Executors.newFixedThreadPool(5);

    public static void main(String[] args) {
     //   clientHandlers=new ArrayList<>();
        {
            try {
                socket = new ServerSocket(8088);
                while (true) {
                    client = socket.accept();
                    System.out.println("Server connected to client");
                    ClientHandler clientHandler=new ClientHandler(client);
                  //  clientHandlers.add(clientHandler);

                    executorServices.execute(clientHandler);
                }

            } catch (IOException e) {
                e.printStackTrace();
            }finally {
                try {
                    client.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
