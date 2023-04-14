package com.ccnu.exercise;

import java.util.ArrayList;

public class FindUser {
    public static void main(String[] args){
        ArrayList<User>list=new ArrayList<>();
        User u1= new User("ccnu001","Jack","123456");
        User u2=new User("ccnu002","Tom","654321");
        User u3=new User("ccnu003","Petter","234567");
        list.add(u1);
        list.add(u2);
        list.add(u3);
        boolean flag=contains(list,"ccnu001");
        System.out.println(flag);

    }
    public static boolean contains(ArrayList<User>list,String id){
        int flag=getIndex(list,id);
        return flag>=0;
    }

    public static int getIndex(ArrayList<User>list,String id){
        for (int i=0;i< list.size();i++){
            String uid=list.get(i).getId();
            if (uid.equals(id)){
                return i;
            }
        }
        return -1;
    }
}
