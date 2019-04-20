
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i,n;
  int arr[5]={3,5,1,9,70};
  int x=9;
  for(i=0;i<5;i++)
  {
      if(arr[i]==x)
      {
          return i;
      }
  }
  return -1;
}
