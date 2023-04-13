package com.ccnu.string_exercise;

import java.util.Scanner;

public class ReturnLastWord {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input some words.And i'll told you the length of the last word.");
        String word=sc.nextLine();
//        System.out.println(word);
        int number=wordLength(word);
        System.out.println("The length of the last word is:"+number);
    }

    public static int wordLength(String str){
        int count=0;
        for (int i=str.length()-1;i>=0;i--) {
            char c=str.charAt(i);
            if(c==' '){
                break;
            }else {
                count++;
            }
        }
        return count;
    }
}
