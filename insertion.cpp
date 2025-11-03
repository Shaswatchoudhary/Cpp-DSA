#include<iostream>
using namespace std;
int main(){

  int arr[1000];
  int n;
  cout<<"Enter the size of array:-";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  for(int i=1;i<n;i++)
  {
    for(int j=i;j>=1;j--) //descending order 
    //for increasing we use j<=i
    {
      if(arr[j]>arr[j-1]) //for descending order and for increasing we use <
      swap(arr[j],arr[j-1]);
      else
      break;
    }
  }

  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
}