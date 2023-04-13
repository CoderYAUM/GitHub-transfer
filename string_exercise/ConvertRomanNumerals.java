package com.ccnu.string_exercise;

import java.util.Scanner;

public class ConvertRomanNumerals {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        while (true) {
            System.out.println("Please input a string.");
            String str=sc.next();
            if(checkStr(str)){
                StringBuilder result=changeRoman2(str);
                System.out.println(result);
                break;
            }else {
                System.out.println("Error!Please input another string.");
            }
        }
    }

    public static boolean checkStr(String str){
        if(str.length()>9){
            return false;
        }
        for(int i=0;i<str.length();i++){
            char c=str.charAt(i);
            if(c<'0'||c>'9'){
                return false;
            }
        }
        return true;
    }

    //转换为罗马数字的方法一
    public static StringBuilder changeRoman(String str){
        String[] arr={"","Ⅰ","Ⅱ","Ⅲ","Ⅳ","Ⅴ","Ⅵ","Ⅶ","Ⅷ","Ⅸ"};
        StringBuilder s=new StringBuilder();
        for(int i=0;i<str.length();i++){
            char c=str.charAt(i);
            s.append(arr[c-48]);//注意使用ASCⅡ码表进行数字与字符之间的转换！
        }
        return s;
    }

    //转换为罗马数字的方法二
    public static StringBuilder changeRoman2(String str){
        StringBuilder s=new StringBuilder();
        for (int i=0;i<str.length();i++) {
            char c=str.charAt(i);
            String get=switch (c){
                case '0'->"";
                case '1'->"Ⅰ";
                case '2'->"Ⅱ";
                case '3'->"Ⅲ";
                case '4'->"Ⅳ";
                case '5'->"Ⅴ";
                case '6'->"Ⅵ";
                case '7'->"Ⅶ";
                case '8'->"Ⅷ";
                case '9'->"Ⅸ";
                default -> str="";
            };
            s.append(get);
        }
        return s;
    }
}
