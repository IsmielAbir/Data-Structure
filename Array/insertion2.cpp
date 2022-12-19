//O(1)

#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<"Given Array: ";
   printArray(a,n);
   
   
   int pos, value;
   cout<<"Enter the position that you want to insert: ";
   cin>>pos;
   cout<<"Enter the value that you want to insert: ";
   cin>>value;
   
   a[n]=a[pos];
   a[pos]=value;
   
   cout<<"Array after insertion: ";
   printArray(a, n+1);

    return 0;
}


