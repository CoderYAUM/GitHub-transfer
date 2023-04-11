package com.ccnu.string_demo;

import java.util.Scanner;

public class StringDemo2 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input an string.And i'll reverse it for you!");
        String str=sc.next();
        String result=reverser(str);
        System.out.println(result);
    }

    public static String reverser(String str){
        String result="";
        for(int i=str.length()-1;i>=0;i--){
            result+=str.charAt(i);
        }
        return result;
    }
}
