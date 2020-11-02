#include<bits/stdc++.h> ///Binary search
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

    int first = 0;
    int last= n-1;
    int mid = (first+last)/2;

    cout<<"\nEnter value to search ..."<<endl;
    cin>>value;

    while(last>=first){
        if(ary[mid]==value){
            pos=mid;
            break;
        }
        else if(ary[mid]>value){
            last=mid-1;
        }
        else{
            first= mid+1;
        }
        mid = (first+last)/2;

    }

    if(pos== -1){
        cout<<"\nSorry! not found..."<<endl;
    } else{
         cout<<"\nPosition is found at = "<<pos+1<<endl;
    }
    return 0;
}
