#include <iostream>

using namespace std;
void Bubble_sort(int Array[],int size)//bubble sort function
{
    int check,s=0;
    for(int z=1; z<=size; z++)
    {
        check=0;
        for(int x=0; x<size; x++)
        {
            if(Array[x]>Array[x+1])
            {
                int swep=Array[x];
                Array[x]=Array[x+1];
                Array[x+1]=swep;
                check++;
            }

        }

        if(check==0)//to check if Array is already sorted...
        {
            break;
        }
        s++;
    }
    for(int y=0; y<size; y++)//displays array
    {
        cout<<Array[y]<<" ";
    }
    cout<<endl;
}

int main()
{
    int A[5]= {3,5,7,9,12};
    Bubble_sort(A,5);
    return 0;
}
