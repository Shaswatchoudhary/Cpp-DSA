#include<iostream>
using namespace std;

//printig pattern
int main()
{
int i,j,row,col;

// for(i=1;i<=5;i++) using this we have printed 1 row of pattern
// {
//     cout<<"*"<<" ";

// }
// cout<<endl;

//now we have to prin 5 * row and columnm 
// for(row=1;row<=5;row++)
// {
//     for(col=1;col<=5;col++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

//now we have to print 4 row and 5 column 

// // for(row=1;row<=4;row++)
// // {
// //     for(col=1;col<=5;col++)
// //     {
// //         cout<<"10"<<" ";
// //     }
// //     cout<<endl;
// }//

//we have to print 5 row 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5

// for(row=1;row<=5;row++)
// {
//     for(col=1;col<=5;col++)
//     {
//         cout<<col*col*col<<" ";// we square and cube the number 
//     }
//     cout<<endl;
// }

// now we have to print 1 2 3 4 5 for 5 times 

for(row=1;row<=5;row++)
{
    for(col=5;col>=1;col--)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
}

// printing pattern of alphabet a to e for 5 times
// char name='a';
// for(name='a';name<='e';name++)

// {
//     for(col='a';col<='e';col++)
//     {
//         cout<<name<<" ";
//     }
//     cout<<endl;
// }

//char col;
for(row='a';row<='e';row++)
{
    for(col='a';col<='e';col++)// in this for it only print a b c d e for one time and the other for prints it 5 times 
    {
        cout<<col<<" ";
    }
    cout<<endl;//give the output a b c d e for 5 times 
}
//print the pattern 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

int count = 1;
for(row=1;row<=5;row++)
{
    for(col=1;col<=5;col++)
    {
        //cout<<count++<<" ";
        cout<<(row-1)*5+col<<" "; //other example to solve this

    }
    cout<<endl;
}

}