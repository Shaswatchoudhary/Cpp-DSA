#include<iostream>
using namespace std;

int main()
{
    //print a to z
    // char i;
    // for(i='a';i<='z';i++)
    // {
    //     cout<<i<<" ";
    // }

    //reverse the number 
    // int num,i;
    // cout<<"Enter the number :";
    // cin>>num;
    
    // for(i=nu m;i>=1;i--)
    // {
    //     cout<<i<<" ";
    // }
//print and skip 3 number 
    // int i,num;
    // cout<<"Enter the number :";
    // cin>>num;
    // for(int i=1;i<=num;i=i+3)
    // {
    //     cout<<i<<" ";
    // 

    //multiply by taking num from user
    // int num,i;
    // cout<<"Enter the number :";
    // cin>>num;
    // for(i=1;i<=10;i++)// we can declare i here by using int 
    // {
    //     cout<<num<<"*"<<i<<"="<<num*i<<endl;
    // }
    //alternative waqy to solve this question
    // int num=6,i;
    // // cout<<"Enter the number :";
    // // cin>>num;
    // for(  i=1;i<=num;i=i+num)
    // {
    //     cout<<i<<" ";
    // }

    //power of number
    // int n,pow,i,num;
    // cout<<"Enter the number :";
    // cin>>n;
    // num=n;
    // cout<<"Enter the power :";
    // cin>>pow;
    // for(i=1;i<pow;i++)
    // {
    //     num=num*n;
    // }
    // cout<<num;\

    //sum of natural number
    
    // int num,i,sum=0;
    // cout<<"enter the number :";
    // cin>>num;
    // // for(i=1;i<=num;i++)
    // // {
    // //     sum=sum+i;
    // // }
    // // cout<<sum;
    // cout<<(num*(num+1))/2; // 2 method to solve this q

    // //factorial number 
    // long int n , fact=1;// when we use int the output will be 0 why , because int has limited space of memory 
    // // but when we use Long int the long int has more space of memory  8byte = 2^64
    // cout<<"Enter the number :";
    // cin>>n;

    // for(int i=1;i<=n;i++)
    // {
    //     fact=fact*i;
    // }
    // cout<<fact;

//     //prime number 

//     int n,i;
//     cout<<"Enter the number :";
//     cin>>n;
//    if(n<2)
//    {
//     cout<<"Not Prime";
//     return 0;
//    }
//    else {
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0)
//        cout<<"Not Prime";
//     return 0;
//     }

//         cout<<"Prime";
//         return 0;

// } 


//fibonacci  find 

int n,i, last , prev , curr;
cout<<"Enter the number :";
cin>>n;
if(n<0)
{
cout<<"Enter valid number";
return 0;
}
else {
    last=0;
    prev=1;
   // cout<<last<<" "<<prev<<" ";
}
    for(i=2;i<n;i++) // why we have taken i=2;  because we have already taken last=0; prev=1; curr=1;
    {
        curr=last+prev;
        last=prev;œ
        prev=curr;
    }
    cout<<curr;



}