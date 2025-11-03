#include<iostream>
using namespace std;

// int SUM(int m , int n) //function declare 
// {
//   int ans=m+n;//function define 
//   return ans;
// }

// int MUL(int m , int n)
// {
//   int ans=m*n;
//   return ans;
// }

// void func()
// {
//   cout<<"Hello Shaswat Army";
// }
// int main(){

//   int a,b;
//   cout<<"Enter 2 number, ";
//   cin>>a>>b;

//   //function call 
//   cout<<SUM(a,b);
//   cout<<endl;

//   cout<<MUL(a,b);
//   cout<<endl;
//   func();
  
// }
// bool Prime(int n=3) // default value  
// {
//   if(n<2)
//   return 0;

//   for(int i=2; i<=n; i++)
//   {
//     if(n%i==0)
//     return 0;

//   }
//   return 1;
// }

// int Fact(int n=3) // default value or parameter

// {
//   int ans=1;
//   for(int i=1; i<=n; i++)
//   ans=ans*i;

// return ans;
// }

// int main()
// { 

//   int a , b;

//   cout<<"Enter the number";
//   cin>>a>>b;

//   //function call
//   // A is prime or not
//   cout<<Fact(); // without adding any number by default it will give or provide the ans
//   cout<<Prime(a)<<endl;
//   //Factorial of A
//   cout<<Fact(a)<<endl;

//   // B IS PRIME OR NOT
//   cout<<Prime(b)<<endl;
//   //Factorial of B
//   cout<<Fact(b)<<endl;

//   //B-A IS PRIME OR NOT 
//   cout<<Prime(b-a)<<endl;
//   cout<<endl;
//   //Factorial of B-A
//   cout<<Fact(b-a);
// }

// void SWAP(int &a , int &b) // here we have use the pass by reference to exchange the value of a and b 
// // we first use the pas by value so it copies the value of a and b and exchange them but in pass by reference it exchange the value of a and b directly
// {
//   a=a+b;
//   b=a-b;
//   a=a-b;
  
// }
// int main()
// {
//   int a , b ;

//   cout<<"Enter the 2 number:";
//   cin>>a>>b;
//   SWAP(a,b);
//   cout<<a<<" "<<b;
// }
// int Cube (int n=3) // taking default valiue
// {
//   return n*n*n;
// }

// int main()
// {
//   // int a , b;

//   // cin>>a;

//   cout<<Cube();
// }

// int Reverse(int n)
// {
//   int  ans=0;
//   while(n)
//   {
//     int rem=n%10;
//     n=n/10;

//     if (ans > INT_MAX / 10 || ans <INT_MIN / 10)
//     return 0;
//     ans = ans*10+rem;
//   }
//   return ans;
// }
// int main()
// {
//   int n;
//   cin>>n;
//   cout<<Reverse(n);
// }


// void rotate(int &a, int &b, int &c) {
//   a = a + b + c;         // a = original a + b + c
//   b = a - (b + c);       // b = original a
//   c = a - (b + c);       // c = original b
//   a = a - (b + c);       // a = original c
// }


// int main()
// {
//   int a , b,c;
//   cin>>a>>b>>c;
//   rotate(a,b,c);
//   cout<<a<<" "<<b<<" "<<c;
// }

// void printShaswat(int n)
// {
//   for(int i=1;i<=n; i++)
//   {
//     cout<<"Shaswat"<<endl;
//   }
// }
// int main()
// {
//   int n;
//   cin>>n;
//   printShaswat(n);
// }

int fact(int n) {
  if(n<0)
  {
    return 0;
  }
  if (n == 0 || n == 1) {
      return 1;
  }
  return n * fact(n - 1);
}

void combination(int &a , int &b)
{
  int factA = fact(a);            // n!
    int factB = fact(b);            // r!
    int factAminusB = fact(a - b);  // (n-r)!
    int c = factA / (factB * factAminusB);
    cout << c << endl;
}
int main() {
  int n, r;
  cout << "Enter n and r: ";
  cin >> n >> r;
  combination(n, r);
  return 0;
}