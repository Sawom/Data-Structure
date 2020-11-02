#include<bits/stdc++.h> ///Inserting elements of an array
using namespace std;
int main(){
    int ary[20],i,n,pos,num;
    cout<<"Enter how many elements..."<<endl;
    cin>>n;
    cout<<"\nEnter  elements..."<<endl;
    for(i=0;i<n;i++){
        cin>>ary[i];
    }

    cout<<"\nBefore inserting elements the array is given below..."<<endl;
    for(i=0;i<n;i++){
        cout<<" "<<ary[i];
    }

    cout<<"\nEnter which position to insert..."<<endl;
    cin>>pos;
    cout<<"\nEnter number to insert..."<<endl;
    cin>>num;

    for(i=n;i>=pos;i--){
        ary[i]=ary[i-1];
    }
    ary[pos-1]=num;
    n++;

    cout<<"\nAfter inserting elements the array is given below..."<<endl;
    for(i=0;i<n;i++){
        cout<<" "<<ary[i];
    }
    return 0;
}
