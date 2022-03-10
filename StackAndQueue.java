/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/

//Stack (PUSH and POP)
import java.util.*;
import javax.lang.model.util.ElementScanner6;
public class StackAndQueue{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Array Size : ");
        int i,n=in.nextInt();
        int[] A=new int[n];
        int top=-1;
        Stack obj=new Stack();
        obj.S(A, n, top);        
    }
}

public class Stack{
    Scanner in=new Scanner(System.in);
    int i;
    void S(int[] A,int n,int top){
        System.out.print("Select operation:\n1.Push\n2.PoP\n3.Exit\n");
        int option=in.nextInt();
        if(option==1){
            if(top==n-1){
                System.out.println("Stack is Full ");
                System.out.println();
                S(A, n, top);
            }
            System.out.println("Enter Push value : ");
            int value =in.nextInt();
            top=top+1;
            A[top] = value;
            System.out.println("Travers After Push is : ");
            for(i=0;i<=top;i++)
                System.out.print(" "+ A[i]);
            System.out.println();
            S(A, n, top);
        }
        else if (option==2){
            if(top<0){
                System.out.println("Stack is Empty ");
                System.out.println();
                S(A, n, top);
            }
            top=top-1;
            System.out.println("Travers After POP is : ");
            for(i=0;i<=top;i++)
                System.out.print(" "+A[i]);
            System.out.println();
            S(A, n, top);
        }
        else if(option==3){

        }
    }
}