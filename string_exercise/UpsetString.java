package com.ccnu.string_exercise;

import java.util.Random;
import java.util.Scanner;

public class UpsetString {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input a string.");
        String str=sc.next();
        System.out.println("Let's upset the string you input.");
        String newstring=upset(str);
        System.out.println(newstring);

    }
    public static String upset(String str){
        char[] arr=str.toCharArray();
        Random random=new Random();  //注意随机数的产生
        int number= random.nextInt(str.length());
//        System.out.println(str.length());
//        System.out.println(number);
        for(int i=0;i<str.length();i++){
            char temp=arr[i];
            arr[i]=arr[number];
            arr[number]=temp;
        }
        String result=new String(arr);
        return result;
    }

}
