/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/

//MargeSort


import java.util.*;
public class MergeSort{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Array Size : ");
        int i,n=in.nextInt();
        int[] A=new int[n];
        int lb = 0;
        int ub = n-1;
        System.out.println("Enter All the array element : ");
        for(i=0;i<n;i++)
            A[i]=in.nextInt();
        System.out.println("Merge Sorted Value : ");
        Sort obj=new Sort();
        obj.Merge(A, lb , ub);
        for(i=0;i<n;i++)
            System.out.print(" "+A[i]);
        System.out.println();
    }
    
}

class Sort{
    void MergeS(int A[],int lb,int ub)
    {
        int start = lb ;
        int mid = (lb+ub)/2;
        int k = mid+1;
        int l = lb ;
        int[] b=new int[ub+1];
        while(lb<=mid && k<=ub){
            if(A[lb]>=A[k]){
                b[l]=A[k];
                k=k+1;
            }
            else{
                b[l]=A[lb];
                lb=lb+1;
            }
            l=l+1;
        }
        if(lb>mid){
            while(k<=ub){
                b[l]=A[k];
                l=l+1;
                k=k+1;
            }
        }
        else{
            while(lb<=mid){
                b[l]=A[lb];
                l=l+1;
                lb=lb+1;
            }
        }
        for(l=start;l<=ub;l++){
            A[l]=b[l];
        }
    }   
    void Merge(int A[],int lb , int ub)
    {
        if(lb<ub){
            int mid = (lb+ub)/2;
            Merge(A,lb,mid);
            Merge(A,mid+1,ub);
            MergeS(A,lb,ub);
        }
    }    
}