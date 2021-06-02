package com.io.vic;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
import java.util.Scanner;

public class Client {
    private static String localHost="127.0.0.1";
    private static Socket socket;
    private static BufferedReader in;
    private static PrintWriter out;
    private static Scanner input;

    public static void main(String[] args) {
        input=new Scanner(System.in);
        try {
            socket=new Socket(localHost,8088);
            in=new BufferedReader(new InputStreamReader(socket.getInputStream()));
            out=new PrintWriter(socket.getOutputStream(),true);

            while (true){
                System.out.println("enter:");
                String var=input.nextLine();
                if (var.equals("quit")){
                    break;
                }else {
                    out.println(var);
                    String response=in.readLine();
                    System.out.println("From server:"+ response);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }finally {
            try {
                socket.close();
                in.close();
            } catch (IOException e) {
                e.printStackTrace();
            }

        }

    }
}
