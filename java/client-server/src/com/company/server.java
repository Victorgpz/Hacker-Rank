package com.company;

import java.io.IOException;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class server {
    public static void main(String[] args) throws IOException {
        Scanner in=new Scanner(System.in);
        ServerSocket listener=new ServerSocket(9090);
        Socket client=listener.accept();
        PrintWriter out=new PrintWriter(client.getOutputStream(),true);

        System.out.println("enter something to send");

        String snd="";
        while (!snd.equals("close")){
             snd=in.nextLine();
            out.println(snd);
        }
        //out.println("heyo");

        client.close();
        listener.close();
    }


}
