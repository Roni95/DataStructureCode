/*
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/

//Insertion Sort

#include <stdio.h>
void Insert(int A[],int size){
    int k,m,temp,loc;
    for(k=1;k<=size-1;k++){
            temp=A[k];
            loc=k-1;
            while(loc >= 0 && A[loc]>temp){                
                A[loc+1]=A[loc];
                loc--;
            }
            A[loc+1]=temp;
        }
    }    
int main(){
    int size,i ,j;
    printf("Enter the size of the Array : ");
    scanf("%d",&size);
    int A[size];
    for (i=0;i<size;i++){
        printf("/nEnter insert element : ");
        scanf("%d",&A[i]);
        if(i>0)
            Insert(A,i+1);
        printf("\nSorted Element is : ");
        for(j=0;j<=i;j++){
            printf("%d  ",A[j]);
        }
        printf("\n");
    }
    //print 
}

