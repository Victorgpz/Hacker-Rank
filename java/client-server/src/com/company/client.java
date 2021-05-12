package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.Socket;
import java.net.UnknownHostException;

public class client {

    public static void main(String[] args) throws IOException{
        int i=0;
        Socket socket = new Socket("127.0.0.1", 9090);
        BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        String responce = in.readLine();
        System.out.println("server responce :" + responce);


        socket.close();
        in.close();




    }
}
