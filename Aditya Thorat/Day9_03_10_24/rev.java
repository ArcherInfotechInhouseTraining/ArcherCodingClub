import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Main {

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        int k= sc.nextInt();
        sc.nextLine();
        String str= sc.nextLine();
        System.out.println(str.charAt(n-k));

    }