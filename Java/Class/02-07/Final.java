/**
 * Java中的常量（最终变量）有2种
 * 1. 常数（数值 字符串 字符 布尔）
 * 2. 标志性（final修饰）
 */
public class Final {
    final static double MONEY = 12356.99; // static函数使用的全局变量必须为static
    // final double MONEY = 12356.99; // 错误：不是static main无法使用

    public static void main(String args[]) {
        final int MAX_SCORE = 100; // final必须赋值 且只能在初始化时赋值
        System.out.println(MAX_SCORE);
        System.out.println(MONEY);
    }
}
