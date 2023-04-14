package com.ccnu.demo;

import java.util.ArrayList;

public class Demo1 {
    public static void main(String[] args){
        ArrayList<String>list=new ArrayList<>();
        list.add("aaa");
        list.add("bbb");
        list.add("ccc");

        list.add("eee");
        System.out.println(list);
        System.out.println(list.remove(2));
        System.out.println(list);
        System.out.println(list.remove("aaa"));
        System.out.println(list);
//        String result="[";
//        for(int i=0;i< list.size();i++){
//            if (i< list.size()-1) {
//                result=result+list.get(i)+",";
//            }else {
//                result+=list.get(i);
//            }
//
//        }
//        result+="]";
//        System.out.println(result);
    }
}
