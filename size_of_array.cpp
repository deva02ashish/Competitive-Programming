#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
   
 
    cout<<"the sizeof(v[0]); "<<sizeof(v[0])<<endl;
   
    cout<<"size of the vector is: "<<v.size()<<endl;

    cout<<"operetion of array is presented here : "<<endl;
int arr[]={5,5,5,5,5,5,5,5};
 int nm=sizeof(arr)/sizeof(arr[0]);
    cout<<"the sizeof(v): "<<sizeof(arr)<<endl;
    cout<<"the sizeof(v[0]): "<<sizeof(arr[0])<<endl;
    
    cout<<"the size of array : "<<nm<<endl;
    // cout<<"size of the vector is"<<arr.size()<<endl;
return 0;
}
