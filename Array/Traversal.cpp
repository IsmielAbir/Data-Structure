#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl<<"Print Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}