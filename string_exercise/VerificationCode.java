package com.ccnu.string_exercise;

import java.util.Random;

public class VerificationCode {
    public static void main(String[] args){
        char[] arr=new char[52];
        for(int i=0;i<arr.length;i++){
            if (i<26) {
                arr[i]=(char) ('a'+i);
            }else {
                arr[i]=(char) ('A'+i-26);
            }
        }
        Random random=new Random();
//        StringBuilder s=new StringBuilder();
        String code="";
        for(int i=0;i<4;i++){
            int number= random.nextInt(arr.length);
//            s.append(arr[number]);
            code+=arr[number];
        }
        int newNumber= random.nextInt(10);
        code+=newNumber;
        char[] arr2=code.toCharArray();
        int index=random.nextInt(arr2.length);
        char temp=arr2[index];
        arr2[index]=arr2[arr2.length-1];
        arr2[arr2.length-1]=temp;
        String result=new String(arr2);
        System.out.println(result);
    }
    
}
