
import java.lang.reflect.Array;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.io.*;
import java.util.*;


public class BigIntwyj {

    public static void main(String[] args) {
        int i,n,maxt = 0;
        int time[] = new int[]{0,0,0,0,0,0,0,0,0,0};
        System.out.println("请输入:");
        Scanner cin = new Scanner(System.in);
        n = cin.nextInt();
        BigInteger result = new BigInteger("1");
        for(i = 1; i <= n; i++)
            result = result.multiply(new BigInteger(String.valueOf(i)));
        String nre = new String();
        nre = result.toString();
        char c= 0,max = 0;
        for(i= 0; i<nre.length();i++){
            c = nre.charAt(i);
            time[c-48]++;
            if(time[c-48]>maxt){
                maxt =time[c-48];
                max = nre.charAt(i);
            }
        }
        System.out.println("数 :"+max+"  ，次数:  "+maxt);
    }
}
