package com.ccnu.exercise;

import java.util.ArrayList;

public class FindPhone {
    public static void main(String[] args){
        ArrayList<Phone>list=new ArrayList<>();
        Phone p1=new Phone("Apple",9000);
        Phone p2=new Phone("HuaWei",5000);
        Phone p3=new Phone("Xiaomi",3000);
        Phone p4=new Phone("Redmi",2000);
        list.add(p1);
        list.add(p2);
        list.add(p3);
        list.add(p4);
        getPhone(list);

    }

    public static void getPhone(ArrayList<Phone>list){
        ArrayList<Phone>newList=new ArrayList<>();
        for (int i=0;i< list.size();i++){
            int price=list.get(i).getPrice();
            if(price<=3000){
                newList.add(list.get(i));
//                System.out.println(list.get(i).getBrand()+","+list.get(i).getPrice());

            }
        }
        for(int i=0;i< newList.size();i++){
            System.out.println(newList.get(i).getBrand()+","+newList.get(i).getPrice());
        }
    }
}
