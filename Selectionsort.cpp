#include <iostream>

using namespace std;
void MoveMin(int Array[],int size,int minindex)//building block :moves minimum to its right position
{
    int minimum=Array[minindex],index=minindex;
    for(int i=minindex+1; i<=size; i++)
    {
        if(Array[i]<minimum)
        {
            minimum=Array[i];
            index=i;
        }
    }
    if(index==minindex)//check if we do not find minimum
    {
        Array[minindex]=minimum;
    }
    else//check if we find minimum then swap as well
    {
        for(int i=index; i>minindex; i--)
        {
            Array[i]=Array[i-1];
        }
        Array[minindex]=minimum;
    }

}
void MoveMinAlgo(int Array[],int size_of_Array)//sorts Array by using "move min" function.
{   int n=size_of_Array;
    int minindex=0;
    for(int i=1;i<=n-1;i++)
    {
        MoveMin(Array,size_of_Array,minindex);
        minindex+=1;

    }
     cout<<"   SORTED ARRAY (Movemin Algo): "<<endl;
     for(int j=0;j<=size_of_Array-1;j++)
    {
        cout<<Array[j]<<"  |  ";
    }
}

int main()

{
    int A[8]= {2,5,1,6,3,7,4,8};
   MoveMinAlgo(A,8);
    return 0;
}
