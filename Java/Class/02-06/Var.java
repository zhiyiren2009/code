public class Var {
    // 全局变量
    int num = 23;
    double money = 899.55;

    public static void main(String args[]) {
        // 局部变量
        int age;
        age = 18;
        System.out.println("Age " + age);
        age = 20; // 覆盖18
        double height = 178.5;
        System.out.println("Age " + age);
        System.out.println("Height " + height);
    }
}
