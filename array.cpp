#include<iostream>
#include <climits> // for INT_MAX
using namespace std;

int main()
{
//   int arr[5] = {1,2,34,5,10}; type 1
//   for(int i=0;i<5;i++)
//  cout<<arr[i]<<" ";  
// return 0;

// int arr[] = {1,2,34,5,1, 48 , 29 , 20 ,30 , 10}; // type 2
// for(int i=0;i<10;i++) //change how much item or array is 
// cout<<arr[i]<<" ";
// return 0;

// int arr[5] = {1,2}; // type 3 method
// for(int i=0;i<5;i++)
// cout<<arr[i]<<" ";
// return 0;

// int arr[5]; // type 4 print the array by user
// for(int i=0;i<5;i++)
// cin>>arr[i];
// for(int i=0;i<5;i++)
// cout<<arr[i]<<" ";
// return 0;


// int size;
// cout<<"Enter the size:";
// cin>>size;
// int arr[10000]; // here we can use the size instead of 10000 but it will work but its not a good habit to use the size instead of 10000 
// for(int i=0;i<size;i++)
// cout<<"Enter the element:";
// cin>>arr[i];

// for(int i=0;i<size;i++)
// cout<<arr[i]<<" ";
// return 0;

// int arr[5] = {1,2, 3 ,4 ,5 }; 
// cout<<sizeof(arr)/sizeof(arr[0])<<" "; // using index to print the array and sizeof(arr) will give the size of the array and sizeof(arr[0]) will give the size of the first element of the array
// int a;
// char b;
// float c;
// double d;
// long long int e;
// cout<<sizeof(a)<<endl;
// cout<<sizeof(b)<<endl;
// cout<<sizeof(c)<<endl;
// cout<<sizeof(d)<<endl;
// cout<<sizeof(e)<<endl;
// return 0;


// int arr[5]={1,2,3,4,5};
// int ans=INT_MAX; // INT_MAX is a constant that will give minimum value
// int ans1=INT_MIN; // INT_MIN is a constant that will give maximum value
// for(int i=0;i<5;i++)
// {
//   if(arr[i]<ans && arr[i]>ans1)
//   ans=arr[i];
// ans1=arr[i];
// }
// cout<<ans<<" "<<ans1;
// return 0;

// int arr[5]={1,2,3,4,5}; // toatl sum of array
// cout<<sizeof(arr);
// // int sum=0;
// // int avg=0;
// // for(int i=0; i<5;i++)
// // cout<<arr[i]<<" ";
// // sum+=arr[i];
// // cout<<sum;
// // avg=sum/5;
// // cout<<avg;


// return 0;
// int size;
// cout<<"Enter the size:";
// cin>>size;
// int arr[16]={1,2,3,4,5,5,6,6,67,7,7,8,8,8,89};
// cout<<sizeof(arr)/sizeof(arr[0])<<" ";
// for(int i=0;i<16;i++)
// {
//   cout<<arr[i]<<" ";
// }
// int size;
// cout<<"Enter the size:";
// cin>>size;
// int arr[1000];
// cout << "Enter " << size << " elements: ";
// for(int i=0;i<size;i++)
// cin>>arr[i];
// // cout<<arr[size]<<endl;// i want to add index size of element and get the element of that index
// int index;
// cout<<"Enter the index:";
// cin>>index;
// if(index >= 0 && index < size) {
//   cout << "Element at index " << index << " is: " << arr[index] << endl;
// } else {
//   cout << "Invalid index! Please enter an index between 0 and " << size-1 << endl;
// }
// char arr[26];
// for(int i=0;i<26;i++)
// arr[i] = 'A' + i; // here we have use the ASCII value to print the array
// for(int i=0;i<26;i++)
// cout<<arr[i]<<" ";
// return 0;


// int arr[5]={1,2,3,4,5};
// // int ans=INT_MAX; // INT_MAX is a constant that will give minimum value
// int ans=INT_MIN , ans1=INT_MIN ;// INT_MIN is a constant that will give maximum value
// for(int i=0;i<5;i++)
// {
//   if(arr[i]>ans)
//   {
//     ans1=ans;
//     ans=arr[i];
    
//   }
//   else if(arr[i]>ans1)
//   ans1=arr[i];


// }

// cout<<ans<<" "<<ans1;
// return 0;



// int thirdSmallestElement(int arr[], int n) {
//   if (n < 3) {
//       cout << "Array has less than 3 elements" << endl;
//       return -1;
//   }

//   int first = INT_MAX, second = INT_MAX, third = INT_MAX;

//   for (int i = 0; i < n; i++) {
//       if (arr[i] < first) {
//           third = second;
//           second = first;
//           first = arr[i];
//       }
//       else if (arr[i] < second && arr[i] != first) {
//           third = second;
//           second = arr[i];
//       }
//       else if (arr[i] < third && arr[i] != second && arr[i] != first) {
//           third = arr[i];
//       }
//   }

//   if (third == INT_MAX) {
//       cout << "Third smallest element doesn't exist (array might have duplicates or less than 3 unique elements)" << endl;
//       return -1;
//   }

//   return third;
// }

// int main() {
//   int n;
//   cout << "Enter the size of the array: ";
//   cin >> n;

//   int arr[1000];
//   cout << "Enter " << n << " elements: ";
//   for (int i = 0; i < n; i++) {
//       cin >> arr[i];
//   }

//   int result = thirdSmallestElement(arr, n);
//   if (result != -1) {
//       cout << "Third smallest element is: " << result << endl;
//   }

//   return 0;
// }

// int arr[5]={1,2,3,4,5};
// int n=5;
// for(int i=0;i<n/2;i++)
// {
//     swap(arr[i],arr[n-i-1]);
// }
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }

// int arr[5]={1,2,3,4,5};
// int start=0;
// int end=4;
// while(start<end)
// {
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
// }
// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<" ";
// }

// int arr[5]={1,2,3,4,5};
// int second=INT_MIN , ans=INT_MIN;
// for(int i=0;i<5;i++)
// {
//     if(arr[i]>ans)
//     {
//         ans=arr[i];
//     }
// }
// for(int i=0;i<5;i++)
// {
//     if(ans!=arr[i])
//     {
//        second=max(second,arr[i]);
//     }
// }
// cout<<second;

// //sum of all element in array
// int n=5 , sum=0;
// int arr[5]={1,3,4,5};
// for(int i=0;i<n-1;i++)
// {
//     sum+=arr[i];
// }
// //sum of n number
// int ans=n*(n+1)/2;
// cout<< ans-sum;
// return 0;

int n;
cout<<"Enter the number :";
cin>>n;
int arr[1000];

arr[0]=0;
arr[1]=1;

for(int i=2;i<=n-1;i++)
arr[i]=arr[i-1]+arr[i-2];

cout<<arr[n-1]<<" ";
}