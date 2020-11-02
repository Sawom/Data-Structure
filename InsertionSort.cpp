#include<bits/stdc++.h> ///Insertion sort
using namespace std;
int main(){
    int ary[20],i,n,j,temp;
    cout<<"Enter how many elements..."<<endl;
    cin>>n;
    cout<<"\nEnter  elements..."<<endl;
    for(i=0;i<n;i++){
        cin>>ary[i];
    }

    cout<<"\nUnsorted elements are given below..."<<endl;
    for(i=0;i<n;i++){
        cout<<" "<<ary[i];
    }

    for(i=0;i<n;i++){   /// Insertion sorting algorithm from here
        j=i;
        while(j>0&&ary[j]<ary[j-1]){
            temp=ary[j];
            ary[j]=ary[j-1];
            ary[j-1]=temp;
            j--;
        }
    } ///end

    cout<<"\nSorting elements are given below..."<<endl;
    for(i=0;i<n;i++){
        cout<<" "<<ary[i];
    }
    return 0;
}
