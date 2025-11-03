#include<iostream>
using namespace std;

int main() {
//binary operator 
    // cout<<13.7/2;
    // cout<<13*4.2;

    //unary operator 
    // int a=13;
    
    // //post increment
    // cout<<a++;
    // cout<<endl<<a;
    // //pre increment
    // cout<<++a;
    // cout<<endl<<a;\

    //comparision operator 
    //give ans in 1 or 0 
    int a,b,c;
    // cout<<"Enter the number a :";
    // cin>>a;
    // cout<<"Enter the number b :";
    // cin>>b;
    // cout<<"Enter the number c :";
    // cin>>c;
    // //== 
//     if(a==b )
//     cout<<"yes";
//     else 
//      cout<<"No";

//>
// if(a>b)
//     cout<<"yes";
// else 
//     cout<<"No";
// cout<<endl;
// //<
// if(a<b)
//     cout<<"yes";
// else 
//     cout<<"No";
// cout<<endl;
// //>=
// if(a>=b)
//     cout<<"yes";
// else 
//     cout<<"No";
// cout<<endl;
// //<=
// if(a<=b)
//     cout<<"yes";
// else 
//     cout<<"No";
// cout<<endl;
// //
// if(a!=b)
//     cout<<"yes";
// else 
//     cout<<"No";



//logical operator && || !  {|| = 0||0   hua to = 0 and 0||1 hua to = 1}
// {&& = 1&&5 hua to = 1 and 1&&0 hua to = 0}
//{! = !1,2 3 4 5 6 hua to = 0 and !0 hua to = 1}

//print where a is greate than b and c print yes otherwise no 

// if(a>b && a>c)
//     cout<<"yes";
// else 
//     cout<<"No";

//print vowels 
// char name='b';
// if(name=='a'|| name=='e'|| name=='i' || name=='o'|| name=='u')
//     cout<<"vowels";
// else 
//     cout<<"consonant";

//bitwise operator {& | ~ ^ << >> } convert into binary 
//& iska meaning hai ke 2&3 to ans 2 ayega because 2 in binary is 10 and 3 in binary is 11 and 10&11 is 10 which is 2
// | iska meaning hai ke 2|3 to ans 3 ayega because 2 in binary is 10 and 3 in binary is 11 and 10|11 is 11 which is 3
// ~ iska meaning hai ke ~2 to ans -3 ayega because 2 in binary is 10 and 3 in binary is 11 and 10|11 is 11 which is 3 
// ~ negative se positivbe karna hoga to ek or bar complement karna hoga means 2 complement
// ^ iska meaning hai ke 2^3 to ans 1 ayega because 2 in binary is 10 and 3 in binary is 11 and 10^11 is 11 which is 1
//<< left shift 6<<1 to ans 12 ayega because 6 in binary is 110 and 110<<1 is 1100 which is 12 
//<< number * 2^x
//>> right shift 6>>1 to ans 3 ayega because 6 in binary is 110 and 110>>1 is 11 which is 3
//>> number / 2^x


//{ << >> having greater priority than & | ~ ^ }
// int ans= 5&6;
// cout<<ans;

int ans= 5|6;
cout<<ans;
cout<<endl;

int ans1= ~5;
cout<<ans1;
cout<<endl;

int ans2= 5^6;
cout<<ans2;
cout<<endl;

int ans3= 6<<1;
cout<<ans3;
cout<<endl;

int ans4= 6>>1;
cout<<ans4;

}

