/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/

//Insertion Sort
import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Array Size : ");
        int temp,i,j,n=in.nextInt();
        int[] A=new int[n]; 
        Insert obj=new Insert();
        System.out.println("Enter Your Array Element : ");
        for(i=0;i<n;i++){
            System.out.println("\nInsert an element : ");
            A[i]=in.nextInt();
            if(i>0)
                obj.sort(A,i);
            System.out.println("Sorted element : ");
            for(j=0;j<=i;j++){
                System.out.print(A[j]+" ");
            }
            System.out.println();
        }
        
    }
}
public class Insert{
    void sort(int[] A,int n){
        int k,m,temp,loc;
        for(k=0;k<=n-1;k++){
            if(A[k]>=A[k+1]){
                temp=A[k+1];
                loc=k+1;
                while(loc != 0 && A[loc-1]>temp){
                    A[loc]=A[loc-1];
                    loc--;
                }
                A[loc]=temp;
            }
        }
    }
}