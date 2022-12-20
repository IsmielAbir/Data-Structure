
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
    int m, c=0;
    cout<<"Searching value: ";
    cin>>m;
    for(int i=0;i<n;i++){
        if(a[i]==m)
        c=i;
    }
    cout<<"Searcing index: "<<c<<endl;


    return 0;
}