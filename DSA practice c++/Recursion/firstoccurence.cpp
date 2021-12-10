#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key)
{
    if (n==0)
    {
        return -1;
    }
    if (arr[0]==key)
    {
        return 0;
    
    }
    
    int subindex = firstocc(arr+1,n-1,key);
    if (subindex != -1)
    {
        return subindex+1;
    }
    return -1;
}

int main()
{
    int arr[] = {2,3,4,5,7,9,8};
    int n = sizeof(arr)/sizeof(int);
    int key = 7;

    cout<<firstocc(arr,n,key)<<endl;
}