#include<bits/stdc++.h>
using namespace std;
void CountSort(int A[], int n){
    int maxi;
    for(int i=0;i<n;i++)
        maxi = max(maxi, A[i]);
 
    // Create count array
    int* count = new int [maxi + 1];
 
    // Initialize count array with 0
    for (int i=0; i<maxi+1; i++){
        count[i] = 0;
    }
 
    // Update count array values based on A values
    for (int i=0; i<n; i++){
        count[A[i]]++;
    }
 
    // Update A with sorted elements
    int i = 0;
    int j = 0;
    while (j < maxi+1){
        if (count[j] > 0){
            A[i++] = j;
            count[j]--;
        } else {
            j++;
        }
    }
}

int main()
{
    int A[]={6,3,9,10,15,6,8,12,3,6};
    int n=sizeof(A)/sizeof(A[0]);
    CountSort(A,n);

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}