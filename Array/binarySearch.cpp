#include <iostream>
using namespace std;

int binary(int a[], int l, int r, int n){
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==n)
        return mid;
        else if(a[mid]<n)
        l = mid + 1;
        else
        r = mid - 1;
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int m,c;
    cin>>m;
    c= binary(a, 0, n-1, m);
    if(c==-1)
    cout<<"Not found"<<endl;
    else
    cout<<c<<endl;
    
    

    return 0;
}