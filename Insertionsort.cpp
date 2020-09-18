#include <iostream>
//Sorting of Array by Insertion sort

using namespace std;
void  Insert(int Array[],int size)//insertion sort  moves last element of Array to desired position.
{
    int i,last=Array[size-1];
    for(i=0; i<=size; i++)
    {
        if(Array[size-1]<Array[0])//If Last element Is the smallest element of array
        {
            for(int k=size-1; k>i; k--)
            {
                Array[k]=Array[k-1];

            }
            Array[0]=last;//last will be placed on 0 index after swapping.

            return;

        }
        if(Array[size-1]>Array[i]&&Array[size-1]<Array[i+1])//If last element is not smallest..
        {
            int j;
            for(j=size-1; j>i+1; j--)
            {
                Array[j]=Array[j-1];

            }
            break;
        }

    }
    Array[i+1]=last;//last will be in right position after swapping.
}
void InsertionSort(int Array[],int size)//Using Insertion Sort Algorithm for sorting any Array.
{
    int temp=2;
    for(int i=0; i<=size-2; i++)
    {
        Insert(Array,temp);//Passing Array in small pieces.
        temp++;
    }
    cout<<"SORTED ARRAY "<<"(INSERTION SORT ALGORITHM:)"<<endl;
    for(int s=0; s<=size-1; s++)//Sorted Array
    {
        cout<<Array[s]<<" | ";
    }
    cout<<endl;
}
int main()
{
    int A[10]= {9,3,4,5,2,1,7,8,10,6};
    InsertionSort(A,10);
    return 0;
}
