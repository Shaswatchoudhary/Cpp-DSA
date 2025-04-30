#include <iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    // for(row=1;row<=n;row++)
    // {
    //     //space print 
    //     for(col=1;col<=n-row;col++)
    //     {
    //         cout<<" "; // if we want pyramid pattern  then we dont need space 
    //     }
    //     //star print 
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
//for(row=1;row<=n;row++)
    // {
    //     for(col=1;col<=n-row;col++)
    //     { //print spaces
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++)
    //     { //print number
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=n;row++)
    // {
    //     for(col=1;col<=n-row;col++)
    //     { //print spaces
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++)
    //     { //print number
    //         cout<<row;
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=n;row++)
    // {
    //     for(col=1;col<=n-row;col++)
    //     { //print spaces
    //         cout<<" ";
    //     }
    //     char name='A';// this is for printing alphabet
    //     for(col=1;col<=row;col++)
    //     { //print number
    //         cout<<name++;
    //         //cout<<name++<<" ";// traingle with space 
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=5;row++)
    // {
    //     for(col=1;col<=5-row;col++)
    //     { //print spaces
    //         cout<<" ";
    //     }
    //     for(col=row;col>=1;col--)
    //     { //print number
    //         cout<<col;
    //     }
    //     cout<<endl; 
        for(row=1;row<=n;row++)
        {
            //space print 
            for(col=1;col<=n-row;col++)
            {
                cout<<" "; // if we want pyramid pattern  then we dont need space 
            }
            //star print 
            for(col=1;col<=row;col++)
            {
                cout<<"*";
            }
            cout<<endl;
        }  
     }
