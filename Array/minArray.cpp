#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, min=INT_MAX;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<min)
        min=a[i];
        
    }
    cout<<min<<endl;

    return 0;
}