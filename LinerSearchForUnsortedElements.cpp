#include<bits/stdc++.h> ///Liner search for Unsorted elements
using namespace std;
int main(){
    int ary[20],i,n,pos= -1,value;
    cout<<"Enter how many elements..."<<endl;
    cin>>n;
    cout<<"\nEnter  elements..."<<endl;
    for(i=0;i<n;i++){
        cin>>ary[i];
    }

    cout<<"\nArray is given below...."<<endl;
    for(i=0;i<n;i++){
        cout<<" "<<ary[i];
    }

    cout<<"\nEnter value to search ..."<<endl;
    cin>>value;
    for(i=0;i<n;i++){
        if(ary[i]==value){
            pos=i+1;
            break;
        }
    }

    if(pos== -1){
        cout<<"\nSorry! not found..."<<endl;
    } else{
         cout<<"\nPosition is found at = "<<pos<<endl;
    }
    return 0;
}

