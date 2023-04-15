package com.ccnu.studentsystem;

import java.util.ArrayList;
import java.util.Scanner;

//改进的建议：
//1.将各个功能函数中相同的遍历代码提取出来，单独建立一个新的函数以便简化代码，使函数结构看起来更有层次感
//2.增添与更新函数中各个成员性质输入时最好可以即使更改，可以增加返回键，以防输入错误需要重新输入造成的麻烦
//3.在增添，修改与删除函数中可以增加循环，在功能结束的末尾选择是否需要继续执行当前操作，避免每次重复打印菜单造成的视觉疲劳
//4.制表需要重做，熟练掌握制表符的运用

public class StudentSystem {
    public static void main(String[] args){
        ArrayList<Student>list=new ArrayList<>();
        loop:while (true) {
            System.out.println("---------------------------------------");
            System.out.println("-----Welcome to the Student System-----");
            System.out.println("------------1.Add Student--------------");
            System.out.println("------------2.Delete Student-----------");
            System.out.println("------------3.Update Student-----------");
            System.out.println("------------4.Find Student-------------");
            System.out.println("------------5.Exit---------------------");
            System.out.println("---------------------------------------");
            System.out.println("Please input your choice.");

            Scanner sc=new Scanner(System.in);
            int input=sc.nextInt();
            switch (input){
                case 1->addStudent(list);
                case 2->deleteStudent(list);
                case 3->updateStudent(list);
                case 4->findStudent(list);
                case 5->{
                    System.out.println("Exit");
                    break loop;    //注意switch与while语句结合使用时break的跳出范围以及两种解决办法
//                    System.exit(0);
                }
                default -> {
                    System.out.println("Can't find this choice.");
                    System.out.println("\n");
                }
            }
        }
    }


    public static void addStudent(ArrayList<Student>list){
        Student s=new Student();
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input the student's id.");
        String id=sc.next();
        for(int i=0;i< list.size();i++){
            if(list.get(i).getId().equals(id)){
                System.out.println("The id is in the system.Please input another id.");
                return;
            }
        }
        s.setId(id);
//        System.out.println("Please input the student's age.");
//        int age=sc.nextInt();
//        s.setAge(age);
        System.out.println("Please input the student's name.");
        String name=sc.next();
        s.setName(name);
        System.out.println("Please input the student's age.");
        int age=sc.nextInt();
        s.setAge(age);
        System.out.println("Please input the student's address.");
        String address=sc.next();
        s.setAddress(address);
        list.add(s);
        System.out.println("Add student successfully!");
        System.out.println("\n");
    }

    public static void deleteStudent(ArrayList<Student>list){
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input the id you want to delete.");
        String input=sc.next();
        for(int i=0;i< list.size();i++){
            if(input.equals(list.get(i).getId())){
                list.remove(i);
                System.out.println("The student who's id is "+input+" is deleted successfully.");
                System.out.println("\n");
                return;
            }
        }
        System.out.println("The student is not in the system.");
        System.out.println("\n");
    }

    public static void updateStudent(ArrayList<Student>list){
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input the id of the student who you want to update. ");
        String id=sc.next();
        for(int i=0;i< list.size();i++){
            if(list.get(i).getId().equals(id)){
                System.out.println("Please input the new student's name.");
                String name=sc.next();
                list.get(i).setName(name);
                System.out.println("Please input the new student's age.");
                int age=sc.nextInt();
                list.get(i).setAge(age);
                System.out.println("Please input the new student's address.");
                String address=sc.next();
                list.get(i).setAddress(address);
                System.out.println("Update successfully!");
                System.out.println("\n");
            }
        }
        System.out.println("The student is not inn the system.");
        System.out.println("\n");

    }

    public static void findStudent(ArrayList<Student>list){
        if(list.size()==0){
            System.out.println("There is no student in the system.Please add students.");
            return;
        }
        System.out.println("Id\t\t\tName\t\tAge\t\tHome address");
        for(int i=0;i< list.size();i++){
            System.out.println(list.get(i).getId()+"\t\t"+
                    list.get(i).getName()+"\t\t"+
                    list.get(i).getAge()+"\t\t"+
                    list.get(i).getAddress());
        }
    }
}

