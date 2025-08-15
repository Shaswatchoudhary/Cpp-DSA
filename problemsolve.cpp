#include<iostream>
using namespace std;

// char convert (char name)
// {
//   //we have to find the convert the small a to capital A
//   char ans;
//   ans=name-'a'+'A';
//   return ans;
// }

// int main()
// {
//   char name;
//   cin>>name;
//   cout<<convert(name);
  
// }
int digit(int n){
  int count=0;
  while(n)
  {
    count++;
    n/=10;
  }
  return count;
}
bool armstrong(int num , int digit)
{
  int n=num , ans=0 , rem;
  while(n)
  {
    rem=n%10; // we take the last digit means 123 then 3 will be the last digit , 12 will be the second last digit and 1 will be the first last digit
    n/=10; // we remove the last digit means 123 then 12 will be the last digit

    ans=ans+pow(rem , digit); // we add the last digit to the ans means the rem will be the last digit and digit will be the power of the last digit
  }
 if(ans==num)
 return true;
 else 
 return false;
}


int main()
{
  int num;
  cin>>num;
  int d=digit(num);
  cout<<armstrong(num , d);
}