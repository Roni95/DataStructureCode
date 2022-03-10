//Bubble Sort
import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Array Size : ");
        int temp,i,j,n=in.nextInt();
        int[] A=new int[n]; 
        System.out.println("Enter Your Array Element : ");
        for(i=0;i<n;i++)
            A[i]=in.nextInt();
        System.out.println("The Array Elements is : ");
        for(i=0;i<n;i++)
            System.out.print(A[i]+" ");
        for(i=0;i<=n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(A[j]>A[j+1]){
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }
        }
        System.out.println("Bubble sorted Array Elements is : ");
        for(i=0;i<n;i++)
            System.out.print(A[i]+" ");   
        System.out.println();     
    }
}