package com.ccnu.string_exercise;

public class MultiplyString {
    public static void main(String[] args){
        String num1="1234567";
        String num2="123456";
        char[] arr1=num1.toCharArray();
        char[] arr2=num2.toCharArray();
        int newNum1=changeToInteger(arr1);
//        System.out.println(newNum1);
        int newNum2=changeToInteger(arr2);
//        System.out.println(newNum2);
        int result=newNum1*newNum2;
//        System.out.println(result);
        String newString=changeTostring(result);
        System.out.println(newString);

    }

    public static int changeToInteger(char[] arr){
        int result=0;
        for(int i=0;i<arr.length;i++){
            result=result*10+(arr[i]-'0');
        }
        return result;
    }

    public static String changeTostring(int number){
        String s="";
        while (number>0){
            int ge=number%10;
            number=number/10;
            s=ge+s;
        }
        return s;
    }

}
