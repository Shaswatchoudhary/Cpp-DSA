#include<iostream>
using namespace std;

int main()
{
    // printing pattern 2 
    int row,col;
    // for(row=1;row<=5;row++)
    // {
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=5;row++)
    // {
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(row=2;row<=40;row++)
    // {
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=5;row++)// this line will be same everytime 
    // {
    //     for(col=row;col>=1;col--)// this line will be change everytime for every row or pattern
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(row=5;row>=1;row--)
    // {
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // char name='a';
    // for(row=1;row<=5;row++)
    // {
    //     name='a';
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<name++<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=5;row++)
    // {
    //     for(col=5;col>=row;col--)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(row=5;row>=1;row--)// first method 
    // {
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(row=1;row<=5;row++)
    // {
    //     for(col=1;col<=5-row+1;col++)// another method 
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }


    //for(row=5;row>=1;row--)// first method 
    // {
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(row=5;row>=1;row--)// first method 
    // {
    //     for(col=5;col>=row;col--)
    //     {
    //         cout<<col<<" "; 
    //     }
    //     cout<<endl;
    // }

   
    // for(row=1;row<=16;row++)// first method  //task 2
    // {
    //     for(col=1;col<=row;col++)//increment col
    //     {
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    for(row=1;row<=4;row++)// first method  //task 3
    {
        char name='A';
        for(col=4;col>=row;col--)//decrement
        {
            cout<<name++<<" ";// name++ is used to print the next alphabet 
        }
        cout<<endl;
    }
    for(row=1;row<=4;row++)// first method  //task 3
    {
        char name='A';
        for(col=4;col>=row;col--)//decrement
        {
            cout<<name++<<" ";// name++ is used to print the next alphabet 
        }
        cout<<endl;
    }
}