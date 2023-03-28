import com.ccnu.demo1.Role;

public class Main {
    public static void main(String[] args) {
        Role r1=new Role('男',100,"乔峰");
        Role r2=new Role('男',100,"慕容复");
        r1.showRoleIinfo();
        r2.showRoleIinfo();
       while(true){
            r1.attack(r2);
            if(r2.getBlood()<=0){
                System.out.println(r1.getName()+"ko"+r2.getName());
                break;
            }
            r2.attack(r1);
            if(r1.getBlood()<=0){
                System.out.println(r2.getName()+"ko"+r1.getName());
                break;
            }
        }

    }
}