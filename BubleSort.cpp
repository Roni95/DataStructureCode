/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/

//Buble Sort

#include <iostream>
#include <cstring>
using namespace std;

int Digit() {
    int size,temp;
    printf("Enter The size of Array : ");
    scanf("%d",&size);
    int Array[size],i,j;
    printf("Enter The elements of the Array : \n");
    for(i=0;i<size;i++)
        scanf("%d",&Array[i]);
    printf("Accending order is : \n");
    for(i=0;i<size-2;i++)
    {
        for(j=0;j<(size-1)-i;j++)
        {
            if(Array[j]>Array[j+1])
            {
                temp=Array[j];
                Array[j]=Array[j+1];
                Array[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
        printf("%d  ",Array[i]);
    printf("\nDecending order is : \n");
    for(i=size-1;i>=0;i--)
        printf("%d  ",Array[i]);
    printf("\n");
    return 0;
}

int String()
{
    int size,i,j;
    string Ch;
    char temp;
    cout<<"Enter your String :";
    cin>> Ch;
    size = Ch.length();
    cout<<"Accending order is : ";
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<(size-1)-i;j++)
        {
            if(Ch[j]>Ch[j+1])
            {
                temp=Ch[j];
                Ch[j]=Ch[j+1];
                Ch[j+1]=temp;
            }
        }
    }    
    cout<<Ch<<endl;
    return 0;
}

int Lab3()
{
    printf("Please Choose an Option :\n\t1.Bubble Short for Digit\n\t2.Bubble short for String or Character\n\t\tPress 0 to Exit\n");
    int option;
    scanf("%d",&option);
    if(option==1)
        Digit();
    else if(option==2)
        String();
    return 0;
}

int main()
{
    Lab3();
    return 0;
}