
#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int l,int h,int x)
{
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(x==arr[mid])
        {
            return mid;
        }
        if(x<arr[mid])
        {
            h=mid-1;
        }else{
         l=mid+1;
        }
    }
    return -1;
}
int main()
{
  int arr[5]={5,2,9,6,0};
  sort(arr,arr+5);
  binary(arr,0,4,6);
}
