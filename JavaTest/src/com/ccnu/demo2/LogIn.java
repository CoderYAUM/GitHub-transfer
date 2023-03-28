package com.ccnu.demo2;
import java.util.*;
import java.lang.*;
public class LogIn {
    public static void main(String[] args){
        String rightusername="yjm";
        String rightuserword="123456";

        for(int i=0;i<3;i++){
            Scanner in=new Scanner(System.in);
            System.out.println("请输入用户名：");
            String username=in.nextLine();
            System.out.println("请输入密码：");
            String userword=in.nextLine();

            if(username.equals(rightusername)&&userword.equals(rightuserword)){
                System.out.println("用户登陆成功！");
            }else if(i==2){
                System.out.println("用户登陆失败，自动退出！");
            }else{
                System.out.println("用户登陆失败！");
                System.out.println("您还剩下"+(2-i)+"次机会");
            }
        }
    }
}
