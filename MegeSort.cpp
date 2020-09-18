#include <iostream>
#include <stdio.h>
using namespace std;
              //Merge Sort Algorithm..
int * Merge(int A[],int B[],int size_A,int size_B)//merge function I.e merges the two sorted array
{
     int* Merge = new int[size_A+size_B];
    int i=0,j=0,k=0;
    while(i<=size_A-1&&j<=size_B-1)//this loop compares both arrays value and place them in Merge Array
    {

        if(A[i]<=B[j])
        {
            Merge[k]=A[i];
            i++;
            k++;

        }
        else if(A[i]>B[j])
        {
            Merge[k]=B[j];
            k++;
            j++;

        }
    }
    int p=size_A+size_B-(i+j);//if we get out of any Array then place the elements of other array without comparison..
    if(i>size_A-1)
    {
        for(int s=1; s<=p; s++)
        {
            Merge[k]=B[j];
            k++;
            j++;

        }
    }
    else
    {
        for(int s=1; s<=p; s++)
        {
            Merge[k]=A[i];
            k++;
            i++;

        }
    }
    return Merge;
}
int* MergSort(int A[],int n)//Divide the array into smaller arrays and sort using Merge function
{
    if(n>=2)//if size of array is >=2
    {
        int mid=n/2;
    int A1[mid];
    int A2[n-mid];
    int j;
    for(int i=0; i<mid; i++)
    {
        A1[i]=A[i];
    }
    j=0;
    for(int i=mid;i<n; i++)
    {
        A2[j]=A[i];
        j++;
    }
    j=0;


   int *a= MergSort(A1,mid);//calls for left array
    int *b=MergSort(A2,n-mid);//calls for right array
    return Merge(a,b,mid,n-mid);//merges the left and right array
    }
}
void Display(int *p,int s)
{
    cout<<"Sorted Array:"<<endl;
     for ( int i = 0; i <s; i++ )
        {
      cout <<"  "<< *(p + i);
        }
}
int main()
{
    int  D[]= {2,5,1,6,8,9,3};
     int *p;
     p = MergSort(D,7);
     Display(p,7);
    return 0;
}

