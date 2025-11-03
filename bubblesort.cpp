#include<iostream>
using namespace std;

int main()
{
  // int arr[1000];
  // int n;
  // cout<<"Enter the size of array:-";
  // cin>>n;
  // cout<<"Enter the element in array:-";
  // for(int i=0;i<n;i++)
  // {
  //   cin>>arr[i];
  // }
  // for(int i=n-2;i>=0;i--)
  // {
  //   for(int j=0;j<=i;j++)
  //   {
  //     if(arr[j]>arr[j+1])
  //     swap(arr[j], arr[j+1]);

  //   }
  // }
  // for(int i=0;i<n;i++)
  // cout<<arr[i]<<" ";
  int arr[1000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    int choice;
    cout << "Enter 1 for Ascending, 2 for Descending: ";
    cin >> choice;

    for (int i = n - 2; i >= 0; i--) {
        bool swapped = false;
        for (int j = 0; j <= i; j++) {
            if ((choice == 1 && arr[j] > arr[j + 1]) ||
                (choice == 2 && arr[j] < arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; 
    }

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}