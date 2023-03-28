package com.ccnu.demo3;

public class Method {
    public static int getIndex(Student[] arr,String id){
        for(int i=0;i< arr.length;i++){
            if(arr[i].getId().equals(id)){
                return i;
            }
        }
        return -1;
    }

/*    public static void printArr(Student[] arr){
        for(int i=0;i< arr.length;i++){
            if(arr[i]!=null){
                System.out.println("学号："+arr[i].getId());
                System.out.println("年龄："+arr[i].getAge());
                System.out.println("姓名："+arr[i].getName());
                System.out.println();
            }
        }
    }*/

    public static void modifyArr(Student[] arr,String id){
        int index= Method.getIndex(arr,id);
        if(index>0){
            int newage=arr[index].getAge()+1;
            arr[index].setAge(newage);
            System.out.println("修改后信息如下：");
            printArr(arr);
        }else{
            System.out.println("当前用户并不存在，修改失败！");
        }
    }
    public static void addStudent(Student[] arr,String id,Student stu){
        boolean flag=contains(arr,id);
        if(flag){
            System.out.println("当前id重复，请修改后再进行添加！");
        }else {
            int count=getCount(arr);
            if(count== arr.length){
                Student[] newarr=createNewArr(arr);
                newarr[count]=stu;
                printArr(arr);
            }else{
                arr[count]=stu;
                printArr(arr);
            }
        }
    }

    public static void deleteStudent(Student[] arr,String id){
        int index= Method.getIndex(arr,id);
        if(index>0){
            arr[index]=null;
//            Method.printArr(arr);
            printArr(arr);
        }else{
            System.out.println("目前id不存在，删除失败！");
        }
//        Method.modifyArr(arr);
    }
    public static boolean contains(Student[] arr,String id){
        for(int i=0;i<arr.length;i++){
            if(arr[i].getId().equals(id)){
                return true;
            }
        }
        return false;
    }
    public static int getCount(Student[] arr){
        int count=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]!=null){
                count++;
            }
        }
        return count;
    }
    public static Student[] createNewArr(Student[] arr){
        Student[] newarr=new Student[arr.length+1];
        for(int i=0;i< arr.length;i++){
            newarr[i]=arr[i];
        }
        return newarr;
    }

    public static void printArr(Student[] arr){
        for(int i=0;i< arr.length;i++){
            if(arr[i]!=null){
                System.out.println(arr[i].getId()+","+arr[i].getName()+","+arr[i].getAge());
            }
        }
    }

}
