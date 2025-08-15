#include<iostream>
using namespace std;

int SUM(int m , int n)
{
  int ans=m+n;
  return ans;
}
int main(){

  int a,b;
  cin>>a>>b;

  //function call 
  cout<<SUM(a,b);
  cout<<endl;
  
}