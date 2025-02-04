#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;;
    cout<<"Enter size of an array 1 and array 2 : ";
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    int arr3[n1+n2];
    cout<<"Enter elements of array 1 : ";
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    cout<<"Enter elements of array 2 : ";
    for(int i=0;i<n2;i++)
        cin>>arr2[i];

   for (int i = 0; i < (n1+n2); i++)
   {
       if (i<n1)
       {
           arr3[i]=arr1[i];
       }
       else
       {
           arr3[i]=arr2[i-n1];
       }    
  
   }
    cout<<"Merged array : ";
    for(int i=0;i<n1+n2;i++)
    cout<<arr3[i]<<" ";

   
    return 0;
}