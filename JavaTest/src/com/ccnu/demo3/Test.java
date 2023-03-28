package com.ccnu.demo3;

public class Test {
    public static void main(String[] args){
        Student[] arr=new Student[3];
        Student stu1=new Student("1111",19,"Jack");
        Student stu2=new Student("1112",20,"Tom");
        Student stu3=new Student("1113",19,"Jobs");
        arr[0]=stu1;
        arr[1]=stu2;
        arr[2]=stu3;
        System.out.println("学生信息如下：");
        Student stu4=new Student("1116",21,"Gates");
        Method.printArr(arr);
        Method.addStudent(arr,"1116",stu4);
        Method.deleteStudent(arr,"1112");
        Method.modifyArr(arr,"1111");
    }

}
