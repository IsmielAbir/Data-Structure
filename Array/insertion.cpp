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
    cout<<endl<<"Given Array:"<<endl;
    printArray(a, n);
    
    int pos, value;
    cout<<"Enter a position that you want to insert a value: ";
    cin>>pos;
    cout<<"Enter the value that you want to insert: ";
    cin>>value;
    
    if(pos<0 || pos>n){
        cout<<"Invalid index, please try again.";
    
    }
    else
    {
    
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=value;
    }
    cout<<"Array after insertion: ";
    printArray(a, n+1);

    return 0;
}