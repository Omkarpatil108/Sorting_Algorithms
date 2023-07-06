#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int A[],int n)
{
    int k;
    for(int i=0;i<n-1;i++)
    {
        for(int j=k=i;j<n;j++)
        {
            if(A[j]<A[k])
            {
                k=j;
            }
        }
        swap(A[i],A[k]);
    }
}
int main()
{
    int A[]={8,6,3,10,9,4,12,5,2,7};
    int n=sizeof(A)/sizeof(A[0]);
    selectionsort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

}