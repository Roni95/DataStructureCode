/* 
    Author : Md. Abid Hasan Roni
    Dept of CSE
    Faridpur Engineering College
*/

//Matrix Summation, Multiplication, Transpose 
#include <stdio.h>
int Summation()
{
    int row1,row2,col1,col2,i,j;
    printf("Enter The Order of First Matrix : \n");
    scanf("%d%d",&row1,&col1);
    int Mat1[row1][col1];
    printf("Enter the elements of First Matrix : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
            scanf("%d",&Mat1[i][j]);
    }
    printf("Enter The Order of Second Matrix : \n");
    scanf("%d%d",&row2,&col2);
    int Mat2[row2][col2];
    printf("Enter the elements of Second Matrix : \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
            scanf("%d",&Mat2[i][j]);
    }
    if(row1==row2 && col1==col2)
    {
        int Sum[row1][col1];
        printf("Matrix Summation is :\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
                printf("%d  ",Mat1[i][j]+Mat2[i][j]);
            printf("\n");
        }
    }
    else 
        printf("Matrix Summation is not possible ");
    return Lab2();
}

int Multiplication()
{
    int row1,row2,col1,col2,i,j,k,sum;
    printf("Enter The Order of First Matrix : \n");
    scanf("%d%d",&row1,&col1);
    int Mat1[row1][col1];
    printf("Enter the elements of First Matrix : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
            scanf("%d",&Mat1[i][j]);
    }
    printf("Enter The Order of Second Matrix : \n");
    scanf("%d%d",&row2,&col2);
    int Mat2[row2][col2];
    printf("Enter the elements of Second Matrix : \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
            scanf("%d",&Mat2[i][j]);
    }
    if(row2==col1)
    {
        printf("Matrix Multiplication is : \n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<row2  ;j++)
            {
                sum=0;
                for(k=0; k<col1 ;k++)
                    sum=sum+Mat1[i][k]*Mat2[k][j];
                printf("%d  ",sum);
            }
            printf("\n");
        }
    }
    else 
        printf("Matrix Multiplication is not possible ");
    return Lab2();
}
int Transpose()
{
    int row,col,i,j;
    printf("Enter the oder of Matrix : \n");
    scanf("%d%d",&row,&col);
    int Mat[row][col];
    printf("Enter the elements of the matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&Mat[i][j]);
    }
    printf("Transpose is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d  ",Mat[j][i]);
        printf("\n");
    }
    return Lab2();
}

int Lab2()
{
    int option;
    printf("Please Choose an Option :\n\t1.Matrix Summation\n\t2.Matrix Multiplication\n\t3.Transpose \n\t\t Press 0 to exit \n");
    scanf("%d",&option);
    if(option==1)
        Summation();
    else if(option==2)
        Multiplication();
    else if(option==3)
        Transpose();
    else 
        return 0;
}

int main()
{
    Lab2();
    return 0;
}