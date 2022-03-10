/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/

//Selection Sort

import java.util.*;

public class SelectionSort{

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Array Size : ");
        int i,n=in.nextInt();
        int[] A=new int[n];
        for(i=0;i<n;i++)
            A[i]=in.nextInt();
        System.out.println("Selection Sorted Value : ");
        Sort obj=new Sort();
        obj.Selection(A, n);
        for(i=0;i<n;i++)
            System.out.print(" "+A[i]);
        System.out.println();
    }
    
}

class Sort{
    int MinLoc(int A[],int lb,int n)
    {
        int i,loc=lb;
        for(i=lb+1;i<=n-1;i++)
        {
            if(A[loc]>A[i])
            {
                loc=i;
            }
        }
        return loc;
    }
    
    void Selection(int A[],int n)
    {
        int i ,loc,temp;
        for(i=0;i<n-1;i++)
        {
            loc=MinLoc(A,i,n);
            if(loc!=i)
            {
                temp=A[loc];
                A[loc]=A[i];
                A[i]=temp;
            }
        }
    }    
}