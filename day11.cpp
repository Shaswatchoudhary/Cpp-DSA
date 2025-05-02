#include <iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    // for(row=1;row<=5;row++)
    // {
    //     //space print 
    //     for(col=1;col<=5-row;col++)
    //     {
    //         cout<<" ";

    //     }
    //     {
    //         //star print 
    //         for(col=1;col<=2*row-1;col++) //this will print the star in triangle shape
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(row=1;row<=5;row++)
    // {
    //     //space print 
    //  for(col=1;col<=5-row;col++)
    //     {
    //         cout<<" ";

    //     }
    //         //adding row +1
    // for(col=1;col<=row;col++) //this will print the star in triangle shape 
    //     cout<<col;
    //     //adding row -1
    // for(col=row-1;col>=1;col--)

    //     cout<<col;
            
        
    //     cout<<endl;
    // }
    // for(row=5;row>=1;row--)
    // {
    //     //space print 
    //     for(col=1;col<=5-row;col++)
    //     {
    //         cout<<" ";

    //     }
    //     {
    //         //star print 
    //         for(col=1;col<=2*row-1;col++) //this will print the star in triangle shape
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }


    //decrement 
    // for(row=n;row>=1;row--)
    // {
    //     for(col=1;col<=row;col++)
    //     cout<<"*";

    // //space print 
    // for(col=1;col<=2*n-2*row;col++)
    // cout<<" ";

    // //star print 
    // for(col=1;col<=row;col++)
    // cout<<"*";
    // cout<<endl;
    // }

   // increment 
    // for(row=1;row<=n;row++)
    // {
    //     //star print 
    //     for(col=1;col<=row;col++)
    //     cout<<"*";


    // //space print 
    // for(col=1;col<=2*n-2*row;col++)
    // cout<<" ";


    // //star print 
    // for(col=1;col<=row;col++)
    // cout<<"*";
    // cout<<endl;
    // }

    // //decrement 
    // for(row=n-1;row>=1;row--)
    // {
    //     //star print 
    //     for(col=1;col<=row;col++)
    //     cout<<"*";


    // //space print 
    // for(col=1;col<=2*n-2*row;col++)
    // cout<<" ";


    // //star print 
    // for(col=1;col<=row;col++)
    // cout<<"*";
    // cout<<endl;
    // }

    // for ( row = 1; row <= n ; row++)
    // {
    //     for ( col = 1; col <= row - 1; col++)
    //     {
    //         cout << "  ";
    //     }

    //     for ( col = n; col >= row; col--)
    //     {
    //         cout << "* ";
    //     }

    //     for ( col = n-1; col >= row; col--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(row=1;row<=n;row++)
    // {
    //     for(col=1;col<=n-row;col++)
    //     {
    //         cout<<" ";
    //     }
    //     for(col=1;col<=row;col++) // new pattern    
    //     {
    //         cout<<col;
    //     }
    //     for(col=row-1;col>=n-row;col--) // new pattern
    //     {
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }


    // for(row=1;row<=n;row++)
    // {
    //     // center indent: two spaces per missing row
    //     for(col=1;col<=n-row;col++)
    //         cout<<"  ";// 2 spaces redquired 
    //     // print numbers 1 to 2*row-1
    //     for(col=1;col<=2*row-1;col++)
    //     {
    //         cout<<col;
    //         if(col<2*row-1) cout<<" ";
    //     }
    //     cout<<endl;
    // }
    char name='a';
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        // this is for printing alphabet
        for(col=1;col<=row;col++)// new pattern    
        {
           
            cout<<name++<<" ";
        }
        name='a';
        for(col=row-1;col>=1;col--) // new pattern
        {
           
            cout<<name++<<" ";
        }
        cout<<endl;
    }

}