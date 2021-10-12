#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   long long int n;
    cin>>n;
    vector<int>v(n);
    
    for(long long int i=0;i<n;i++)
    {
       long long int x;
        cin>>x;
        v.push_back(x);//it is sorted vector
    
    } 
   vector<int>::iterator it;
    long long int q;
    cin>>q;
    long long int num;
    for (int i=0; i<q; i++) {
    
    cin>>num;
     
    it=lower_bound(v.begin(),v.end(),num);
    if (num==(*it)) {
   cout<<"Yes"<<(it-v.begin()+1)<<endl;
    }
    else
    cout<<"No"<<(it-v.begin()+1)<<endl;
    }
    
   
      
    return 0;
}
