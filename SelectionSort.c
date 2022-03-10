/*
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/


// Selection Sort
#include <stdio.h>

int MinLoc(int A[], int ib , int size){
    int i,loc;
    loc = ib;
    for(i=ib+1; i<size; i++){
        if(A[loc]>A[i])
            loc = i;
    }
    return loc;
}

void SelectionSort(int A[],int size){
    int i, loc ,temp;
    for(int i=0;i<size-1;i++){
        loc = MinLoc(A,i,size);
        if(loc!=i){
            temp = A[loc];
            A[loc] = A[i];
            A[i] = temp;
        }
    }
}

int main(){
    int size ,i ;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int A[size];
    printf("Enter Array element : ");
    for ( i = 0; i < size; i++){
        scanf("%d",&A[i]);
    }
    printf("Your entered array elements is : \n");
    for ( i = 0; i < size; i++){
        printf("%d ",A[i]);
    }   
    SelectionSort(A,size);
    printf("\nSelection Sorted array elements is : \n");
    for ( i = 0; i < size; i++){
        printf("%d ",A[i]);
    }       
    printf("\n");
    return 0;
}