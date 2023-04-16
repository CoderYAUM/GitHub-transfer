package com.ccnu.studentsystem_upgraded;

import java.nio.file.attribute.UserPrincipal;
import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class StudentSystem_upgraded {
    public static void main(String[] args){
        ArrayList<User>list=new ArrayList<>();
        Scanner sc=new Scanner(System.in);
        while (true) {
            System.out.println("Welcome to the student system.");
            System.out.println("Please choose the function:");
            System.out.println("1.Log in");
            System.out.println("2.Sign up");
            System.out.println("3.Forget the password");
            System.out.println("4.Exit");
            int choice=sc.nextInt();
            switch (choice){
                case 1->logIn(list);
                case 2->signUp(list);
                case 3->forgetPassword(list);
                case 4->{
                    System.out.println("Thank you for using.");
                    System.exit(0);
                }
                default -> {
                    System.out.println("Your choice is false.");
                    System.out.println("\n");
                }
            }
        }

    }


    public static void signUp(ArrayList<User>list){
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input username.");
        String username;
        while (true) {
            username = sc.next();
            boolean flag=checkUsername(username);
            if(!flag){
                System.out.println("The username is not allowed.You should input another one.");
                continue;
            }
            boolean flag2=contains(list,username);
            if(flag2){
                System.out.println("The username is existed.You should input another one.");
            }else {
                System.out.println("The username can be used.");
                break;
            }
        }

        String password;
        while (true) {
            System.out.println("Please input your password.");
            password = sc.next();
            System.out.println("Please ensure your password.");
            String password2=sc.next();
            if(!password2.equals(password)){
                System.out.println("Your password is not same during your two inputs.Please ensure it again.");
            }else {
                System.out.println("Your password is set successfully!");
                break;
            }
        }

        String personID;
        while (true) {
            System.out.println("Please input your personID.");
            personID = sc.next();
            boolean flag=checkPersonID(personID);
            if(flag){
                System.out.println("Your personID is set successfully.");
                break;
            }else {
                System.out.println("Your personID is not allowed.Please input another one.");
            }
        }

        String phoneNumber;
        while (true) {
            System.out.println("Please input your phone number.");
            phoneNumber = sc.next();
            boolean flag=checkPhoneNumber(phoneNumber);
            if (flag){
                System.out.println("The phone number is set successfully.");
                break;
            }else {
                System.out.println("The phone number is not allowed.");
            }
        }

        User user=new User(username,password,personID,phoneNumber);
        list.add(user);
        System.out.println("Sign up successfully!");
        showUsers(list);
        System.out.println("\n");

//        Scanner sc=new Scanner(System.in);
//        System.out.println("Please input the username you want to sign up.");
//        String name=sc.next();
//        if(contains(list,name)){
//            System.out.println("The username has been used.You should choose another one.");
//        }
//        if(name.length()<3||name.length()>15){
//            System.out.println("Your username length is not allowed.");
//        }
//
//        int countNumber=0;
//        int countChar=0;
//        char[] arr1={'0','1','2','3','4','5','6','7','8','9'};
//        char[] arr2=new char[52];
//        for(int i=0;i<arr2.length;i++){
//            if(i<26){
//                arr2[i]= (char) ('a'+i);
//            }else {
//                arr2[i]= (char) ('A'+i-26);
//            }
//        }
//        char[] arr3=new char[62];
//        for(int i=0;i<arr3.length;i++){
//            if(i<10){
//                arr3[i]=arr1[i];
//            }else {
//                arr3[i]=arr2[i-10];
//            }
//        }
//
//        for(int i=0;i<name.length();i++){
//            char c=name.charAt(i);
//            for (int n=0;n<arr3.length;n++){
//                if(c==arr3[n]){
//                    for(int j=0;j<arr1.length;j++){
//                        if(c==arr1[j]){
//                            countNumber++;
//                            System.out.println(countNumber);
//                        }
//                    }
//                    for (int m=0;m<arr2.length;m++){
//                        if(c==arr2[m]){
//                            countChar++;
//                            System.out.println(countChar);
//                        }
//                    }
//                }
//            }
//            System.out.println("Your username has not allowed word.");
//            break;
//            if(countChar>0&&countNumber>0){
//                System.out.println("Your username is allowed.");
//            }else {
//                System.out.println("Your username should have numbers and characters in the same time.");
//            }
//        }

    }

    public static boolean checkUsername(String name){
        int len=name.length();
        if(len<3||len>15){
            return false;
        }
        for(int i=0;i<name.length();i++){
            char c=name.charAt(i);
            if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))){
                return false;
            }
        }
        int count=0;
        for(int i=0;i<name.length();i++){
            char c=name.charAt(i);
            if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
                count++;
                break;
            }
        }
        return count>0;
    }

    public static boolean checkPersonID(String personID){
        if(personID.length()!=18){
            return false;
        }
        char c=personID.charAt(0);
        if (c=='0'){
            return false;
        }
        for(int i=0;i<personID.length()-1;i++){
            char a=personID.charAt(i);
            if (!(a>='0'&&a<='9')){
                return false;
            }
        }
        char b=personID.charAt(personID.length()-1);
        if(!((b>='0'&&b<='9')||b=='X'||b=='x')){
            return false;
        }
        return true;
    }

    public static boolean checkPhoneNumber(String phoneNumber){
        if(phoneNumber.length()!=11){
            return false;
        }
        char c=phoneNumber.charAt(0);
        if (c=='0'){
            return false;
        }
        for (int i=0;i<phoneNumber.length();i++){
            char a=phoneNumber.charAt(i);
            if(!(a>='0'&&a<='9')){
                return false;
            }
        }
        return true;

    }



    public static void logIn(ArrayList<User>list){
        Scanner sc=new Scanner(System.in);
        for (int j=0;j<3;j++) {
            System.out.println("Please input your username.");
            String username=sc.next();
            boolean flag=contains(list,username);
            if(!flag){
                System.out.println("The username is not registered.Please sign up first.");
                return;
            }

            System.out.println("Please input the password.");
            String password=sc.next();

            while (true) {
                String createCode=createVerificationCode();
                System.out.println("The verification code is:"+createCode);
                System.out.println("Please input the verification code.");
                String inputCode=sc.next();
                boolean flag2=checkVerificationCode(createCode,inputCode);
                if(!flag2){
                    System.out.println("The verification code is not true.You should input it again.");
                    continue;
                }else {
                    System.out.println("The verification code is right.");
                    break;
                }
            }

            User userInfo=new User(username,password,null,null);
            boolean flag3=checkUserInfo(list,userInfo);
            if(flag3){
                System.out.println("Log in successfully.");
                StudentSystem ss=new StudentSystem();
                ss.startStudentSystem();
                break;
            }else {
                System.out.println("The username and password can not be matched.Can not log in the system.");
                if(j==2){
                    System.out.println("The account is locked.");
                    return;
                }else {
                    System.out.println("You also have "+(2-j)+" chances");
                }
            }
        }
 /*       if(!flag){
            System.out.println("The user is not registered,Please sign up.");
            return;
        }else {
            for (int j=1;j<4;j++) {
                System.out.println("Please input the password.");
                String password=sc.next();
                boolean flag2=findPassword(list,password);
                if (flag2){
                    System.out.println("Log in successfully!");
                    break;
                }
                System.out.println("The password is not true.Please input it again.");
                System.out.println("And you'll try "+(3-j)+" for log in.");
                String verificationCode=createVerificationCode();
                System.out.println("The verification code is: "+verificationCode);
                while (true) {
                    System.out.println("Please input the verification code.");
                    String vCode=sc.next();
                    boolean flag3=checkVerificationCode(verificationCode,vCode);
                    if(flag3) {
                        break;
                    } else {
                        System.out.println("The verification code is wrong.Please input it again.");
                    }
                }
                System.out.println("The chances have run out.You can not log in the system.");
            }
        }*/

    }

    private static boolean checkUserInfo(ArrayList<User>list,User userInfo) {
        for(int i=0;i< list.size();i++){
            User user=list.get(i);
            if(user.getUsername().equals(userInfo.getUsername())&&user.getPassword().equals(userInfo.getPassword())){
                return true;
            }
        }
        return false;
    }

    public static boolean findPassword(ArrayList<User>list,String password){
        for (int i=0;i< list.size();i++){
            if(password.equals(list.get(i).getPassword())){
                return true;
            }
        }
        return false;
    }

    public static String createVerificationCode(){
        char[] arr=new char[52];
        for (int i=0;i<arr.length;i++){
            if(i<26){
                arr[i]= (char) ('a'+i);
            }else {
                arr[i]= (char) ('A'+i-26);
            }
        }
        Random random=new Random();
        StringBuilder s=new StringBuilder();
        for(int i=0;i<4;i++){
            int index=random.nextInt(52);
            s.append(arr[index]);
        }
        int number= random.nextInt(10);
        s.append(number);
        char[] code=s.toString().toCharArray();
        int exchange=random.nextInt(4);
        char temp=code[4];
        code[4]=code[exchange];
        code[exchange]=temp;
        return new String(code);
    }

    public static boolean checkVerificationCode(String createCode,String inputCode){
        if (createCode.equalsIgnoreCase(inputCode)){
            return true;
        }else {
            return false;
        }
    }

    public static void forgetPassword(ArrayList<User>list){
        Scanner sc=new Scanner(System.in);
        System.out.println("Please input the username.");
        String username=sc.next();
        boolean flag=contains(list,username);
        if(!flag){
            System.out.println("The user is not registered.Please register first.");
            return;
        }
        System.out.println("Please input the personID.");
        String personID=sc.next();
        System.out.println("Please input the phone number.");
        String phoneNumber=sc.next();

        int index=findIndex(list,username);
        User user=list.get(index);
        if(!(user.getPersonID().equals(personID)&&user.getPhoneNumber().equals(phoneNumber))){
            System.out.println("The information can not matched.You can not modify the password.");
            return;
        }
        String newPassword;
        while (true) {
            System.out.println("Please input the new password.");
            newPassword = sc.next();
            System.out.println("Please input the new password again.");
            String newPasswordAgain=sc.next();
            if(!(newPasswordAgain.equals(newPassword))){
                System.out.println("The two password are not matched.Please input password again.");
                continue;
            }else {
                System.out.println("The password is effective.");
                break;
            }
        }
        user.setPassword(newPassword);
        System.out.println("The password is set successfully!");
    }

    private static int findIndex(ArrayList<User> list, String username) {
        for (int i=0;i< list.size();i++){
            User user=list.get(i);
            if(user.getUsername().equals(username)){
                return i;
            }
        }
        return -1;
    }


    public static boolean contains(ArrayList<User>list,String name){
        int flag=getIndex(list,name);
        return flag>=0;
    }

    public static int getIndex(ArrayList<User>list,String name){
        for (int i=0;i< list.size();i++){
            if(name.equals(list.get(i).getUsername())){
                return i;
            }
        }
        return -1;
    }

    public static void showUsers(ArrayList<User>list){
        for (int i=0;i< list.size();i++){
            User u=list.get(i);
            System.out.println(u.getUsername()+"\t"+u.getPassword()+"\t"+
                    u.getPersonID()+"\t"+u.getPhoneNumber());
        }
    }
}
