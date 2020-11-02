#include<bits/stdc++.h> ///Deleting elements of an array
using namespace std;
int main(){
    int ary[20],i,n,pos;
    cout<<"Enter how many elements..."<<endl;
    cin>>n;
    cout<<"\nEnter  elements..."<<endl;
    for(i=0;i<n;i++){
        cin>>ary[i];
    }

    cout<<"\nBefore deleting element the array is given below..."<<endl;
    for(i=0;i<n;i++){
        cout<<" "<<ary[i];
    }

    cout<<"\nEnter which position to delete..."<<endl;
    cin>>pos;

    for(i=pos-1;i<n;i++){
        ary[i]= ary[i+1];
    }
    n--;
    cout<<"\nAfter deleting element the array is given below..."<<endl;
    for(i=0;i<n;i++){
        cout<<" "<<ary[i];
    }
    return 0;
}
