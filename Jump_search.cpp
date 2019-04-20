
#include <bits/stdc++.h>
using namespace std;
int jump(int arr[],int n,int x)
{
    int m=sqrt(n);
    int i;
    int k=0;
    while(k*m<=n){

    if(arr[k*m]==x)
    {
       return 1;
    }
    if(x>arr[k*m])
    {
        k++;
    }if(x<arr[k*m])
    {
       for(i=(k-1)*m;i<k*m;i++)
       {
           if(x==arr[i])
           {
               return 1;
           }
       }
    }
  }
  return -1;
}
int main()
{
  int arr[10]={0,1,1,4,6,8,9,12,45,67};
  int result=jump(arr,10,48);
  cout<<result;

}
