package com.ccnu.string_exercise;

import java.util.Scanner;

public class RotateString {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input the first string.");
        String strA=sc.next();
        System.out.println("Please input the second string.");
        String strB=sc.next();
        System.out.println("Let's check if they are matched.");
        if(check(strA,strB)){
            System.out.println("They are matched.");
        }else {
            System.out.println("They are not matched.");
        }
    }

    public static boolean check(String a,String b){
        for(int i=0;i<a.length();i++){
            a=rotate2(a);
            if(a.equals(b)){
                return true;
            }
        }
        return false;
    }

    //旋转字符串的方法一——————subString截取法
    public static String rotate(String str){
        char first=str.charAt(0);
        String end=str.substring(1);
        return end+first;
    }

    //旋转字符串的方法二——————字符串-数组-字符串法
    public static String rotate2(String str){
        char[] arr=str.toCharArray();
        char first=arr[0];
        for (int i=1;i<arr.length;i++){
            arr[i-1]=arr[i];
        }
        arr[arr.length-1]=first;
        String result=new String(arr);
        return result;
    }

}
