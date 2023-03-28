package com.ccnu.demo1;

import java.util.*;

public class Role {
    private char gender;
    private int blood;
    private String face;
    private String name;

    String[] maleface={"风流俊雅","气宇轩昂","相貌英俊","五官端正","相貌平平", "一塌糊涂","面目狰狞"};
    String[] fmaleface={"美奂绝伦","沉鱼落雁","亭亭玉立","身材姣好","相貌平平", "相貌简陋","惨不忍睹"};
    String[] injured_desc={"结果%s退了半步，毫发无损",
            "结果给%s造成了一处瘀伤",
            "结果一击命中，%s疼的弯下了腰",
            "结果%s痛苦地闷哼了一声，显然受了点内伤",
            "结果%s摇摇晃晃，一跤摔倒在地",
            "结果%s脸色一下子变得惨白，连退了好几步",
            "结果‘轰’的一声，%s口中鲜血直喷",
            "结果%s一声惨叫，像滩软泥般倒了下去"};
    String[] attack_desc={"%s使出一招‘背心钉’，转到对方身后，一掌向%s背心的灵台穴拍去。",
            "%s使出一招‘游空探爪‘，飞起身形自半空中变掌为抓锁向%s。",
            "%s大喝一声，身形下伏，一招‘劈雷坠地’，锤向%s双腿。",
            "%s运气与掌，一瞬间掌心变得通红，一式‘掌心雷’，推向%s。",
            "%s阴手翻起阳手跟进，一式‘没遮拦’，结结实实捶向%s。",
            "%s上部抢身，套中套招，一招‘披挂连环’，连环攻向%s。"};
    public Role() {
    }

    public Role(char gender, int blood, String name) {
        this.gender = gender;
        this.blood = blood;
        this.name = name;
        setFace(this.gender);
    }

    public char getGender() {
        return gender;
    }

    public void setGender(char gender) {
        this.gender = gender;
    }

    public int getBlood() {
        return blood;
    }

    public void setBlood(int blood) {
        this.blood = blood;
    }

    public String getFace() {
        return face;
    }

    public void setFace(char gender) {
        Random r=new Random();
        if(gender=='男') {
            int index=r.nextInt(maleface.length);
            this.face=maleface[index];
        }
        else if(gender=='女') {
            int index=r.nextInt(fmaleface.length);
            this.face=fmaleface[index];
        }
        else {
            this.face="面目狰狞";
        }

    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void attack(Role role){
        Random r=new Random();
        int index=r.nextInt(attack_desc.length);
        String KungFu=attack_desc[index];
        System.out.printf(KungFu,this.getName(),role.getName());
        System.out.println();
        int hurt=r.nextInt(20)+1;
        int remainBlood=role.getBlood()-hurt;
        remainBlood = Math.max(remainBlood, 0);
        role.setBlood(remainBlood);
       /* System.out.println(this.getName()+"举起拳头打了"+role.getName()+"一下"+hurt+"点生命值伤害"+role.getName()+"还剩下"+remainBlood+"血量");*/
        if(remainBlood>90){
            System.out.printf(injured_desc[0],role.getName());
        } else if (remainBlood>80&&remainBlood<=90) {
            System.out.printf(injured_desc[1],role.getName());
        } else if (remainBlood>70&&remainBlood<=80) {
            System.out.printf(injured_desc[2],role.getName());
        } else if (remainBlood>60&&remainBlood<=70) {
            System.out.printf(injured_desc[3],role.getName());
        } else if (remainBlood>40&&remainBlood<=60) {
            System.out.printf(injured_desc[4],role.getName());
        } else if (remainBlood>20&&remainBlood<=40) {
            System.out.printf(injured_desc[5],role.getName());
        } else if (remainBlood>10&&remainBlood<=20) {
            System.out.printf(injured_desc[6],role.getName());
        }else {
            System.out.printf(injured_desc[7],role.getName());
        }
        System.out.println();
    }

    public void showRoleIinfo(){
        System.out.println("姓名为："+getName());
        System.out.println("血量为："+getBlood());
        System.out.println("长相为："+getFace());
        System.out.println("性别为："+getGender());
    }


}

