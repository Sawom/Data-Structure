#include<bits/stdc++.h>   ///selection sort
using namespace std;
int main(){
    int i,j,n,aray[60],temp;

    cout<<"Enter how many number ....."<<endl;
    cin>>n;

    cout<<"Enter  numbers ....."<<endl;
    for(i=0;i<n;i++){
        cin>>aray[i];
    }

    cout<<"\nbefore selecting sort......"<<endl;
    for(i=0;i<n;i++){
        cout<<"  "<<aray[i];
    }

    cout<<"\nafter selecting sort......"<<endl;
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(aray[i]<aray[j]){  /// asending order
                temp=aray[i];
                aray[i]=aray[j];
                aray[j]=temp;
            }
        }
     }

    for(i=0;i<n;i++){
        cout<<"  "<<aray[i];
    }
}
