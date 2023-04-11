package com.ccnu.string_demo;

import java.util.Scanner;

public class StringDemo3 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input the number of money.");
        int money;
        //这里的while循环对于日后无效金额的重新输入判断很重要，以防日后程序出错
        while(true){
            money=sc.nextInt();
            if(money>=0&&money<=9999999){
                break;
            }else{
                System.out.println("Invalid amount.");
            }
        }
        String moneystr="";
        while(true){
            int ge=money%10;
            String capitalNumber=getCapitalNumber(ge);
            money=money/10;
//            moneystr+=capitalNumber;
            moneystr=capitalNumber+moneystr;  //字符串拼接顺序影响最终的字符串排列

            if(money==0){
                break;
            }
        }

        int count=7-moneystr.length();
        for(int i=0;i<count;i++){
            moneystr="零"+moneystr;
        }
//        String remoneystr=reverser(moneystr);
//        System.out.println(remoneystr);
//        System.out.println(moneystr);

        String[] arr={"佰","拾","万","仟","佰","拾","元"};
        String result="";
        for(int i=0;i<moneystr.length();i++){
            result=result+moneystr.charAt(i)+arr[i];
        }
        System.out.println(result);

    }

//    public static String reverser(String str){
//        String result="";
//        for(int i=str.length()-1;i>=0;i--){
//            result+=str.charAt(i);
//        }
//        return result;
//    }
    public static String getCapitalNumber(int number){
        String[] arr={"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};
        return arr[number];
    }


}
