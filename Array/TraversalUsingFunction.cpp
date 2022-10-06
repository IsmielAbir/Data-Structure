#include <iostream>
using namespace std;

void TraversalArray(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Traversal of the array is: "<<endl;
    TraversalArray(a, n);
   

    return 0;
}