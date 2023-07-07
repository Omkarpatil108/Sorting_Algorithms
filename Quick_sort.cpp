#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int partition(int A[],int low,int high)
{
    int pivot=A[low];
    int cnt=0;
    
    for(int i=low+1;i<=high;i++)
    {
        if(A[i]<pivot)
        {
            cnt++;
        }
    }
    int pivotIndex=low+cnt;
    swap(pivotIndex,A[low]);
    int i=low,j=high;

    while(low<pivotIndex && high>pivotIndex)
    {
        while(A[low] <= pivot) i++;
        while(A[high] > pivot) j--;
        if(A[low]>pivot)
        {
            swap(A[i],A[j]);
            i++;
            j--;
        }
        if(A[high]<pivot)
        {
            swap(A[i],A[j]);
            i++;
            j--;
        }
        
    }
    return pivotIndex;


}
void Quicksort(int A[],int low,int high)
{
    int p;
    if(low>=high)
    {
        return;
    }
    p=partition(A,low,high);
    Quicksort(A,low,p-1);  //for left sort
    Quicksort(A,p+1,high);

}

int main()
{
    int A[]={8,6,3,10,9,4,12,5,2,7};
    //int n=sizeof(A)/sizeof(A[0]);
    int n=10;
    Quicksort(A,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

}