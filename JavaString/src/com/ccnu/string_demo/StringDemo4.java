package com.ccnu.string_demo;

public class StringDemo4 {
    public static void main(String[] args){
        String phoneNumber="17851153061";
        String start=phoneNumber.substring(0,3);
        String end=phoneNumber.substring(7);
        String result=start+"****"+end;
        System.out.println(result);


        String id="312456200101017112";
        String year=id.substring(6,10);
        String month=id.substring(10,12);
        String day=id.substring(12,14);

        System.out.println("人物信息为：");
        System.out.println("出生年月日："+year+"年"+month+"月"+day+"日");

        int gender=id.charAt(17);
        if(gender%2==0){
            System.out.println("性别为：女");
        }else {
            System.out.println("性别为：男");
        }


        String talk="CNM，你玩的真TMD好";
        String[] arr={"CNM","TMD","TLLD","SB","MLGB"};
        for(int i=0;i<arr.length;i++){
            talk=talk.replace(arr[i],"***");
        }
        System.out.println(talk);
    }

}
