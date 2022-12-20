#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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
    cout<<"Given Array is"<<endl;
    printArray(a, n);
    
   int pos;
   cout<<"Enter the delation postion: ";
   cin>>pos;
   
   if(pos==n-1) n--;
   else{
       for(int i=pos+1;i<n;i++){
           a[i-1]=a[i];
       }
       
       n--;
   }
   cout<<"Given Array is"<<endl;
    printArray(a, n);
   
    
    
    return 0;
}






















