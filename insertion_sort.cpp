#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int x=A[i];
        if(j>=-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main()
{
    int A[]={2,4,6,8,20,10};
    int n=sizeof(A)/sizeof(A[0]);

    insertionsort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
