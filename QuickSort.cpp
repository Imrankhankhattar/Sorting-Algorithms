#include <iostream>
//Sorting of Array by Insertion sort

using namespace std;
void  quick(int Array[],int size,int left, int right)
{
    for(int y=0; y<size; y++)//displays array
    {
        cout<<Array[y]<<" ";
    }
    cout<<endl;
    int locate=left,start=left,end=right;
    int check=0;
    while(true)
    {
        while(Array[locate]<Array[right])
        {
            check=1;
            right=right-1;
        }
        /* if(right==locate)
             return;*/
        if(Array[locate]>Array[right])
        {
            check=1;
            int temp=Array[locate];
            Array[locate]=Array[right];
            Array[right]=temp;
            locate=right;
            while(Array[left]<Array[locate])
            {
                left++;
            }
            /*if(left==locate)
                return;*/
            if(Array[locate]<Array[left])
            {
                temp=Array[locate];
                Array[locate]=Array[left];
                Array[left]=temp;
                locate=left;

            }
        }


        if(check==0)
        {
            cout<<"After Locating First number's Index"<<endl;
            for(int y=0; y<size; y++)//displays array
            {
                cout<<Array[y]<<" ";
            }
            cout<<endl;
            break;
        }
        check=0;


        //
    }

}
int main()
{
    int A[3]= {22,18,12};
    quick(A,3,0,2);
    return 0;
}
