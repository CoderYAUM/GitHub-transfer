package com.ccnu.demo1.test1;
import java.lang.*;
import java.util.Scanner;

public class Test1 {
    public static void main(String[] args){
        Car[] cars=new Car[3];
        Scanner in=new Scanner(System.in);
        System.out.println("请输入汽车信息");
        int i=0;
        while(i<3){
            Car c=new Car();
            System.out.println("请输入汽车的品牌：");
            String brand=in.next();
            c.setBrand(brand);
            System.out.println("请输入汽车的颜色：");
            String color=in.next();
            c.setColor(color);
            System.out.println("请输入汽车的价格：");
            double price=in.nextDouble();
            c.setPrice(price);
            cars[i]=c;
            i++;

        }
        System.out.println("汽车信息如下：");
        for(int j=0;j< cars.length;j++){
            System.out.println(cars[j].getBrand()+" "+cars[j].getPrice()+" "+cars[j].getColor());
        }
    }

}
