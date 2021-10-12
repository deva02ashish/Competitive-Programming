#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   long long int n;
    cin>>n;
    // vector<long long int>v;
    long long int v[n];
    for(long long int i=0;i<n;i++)
    {
    //    long long int x;
    //     cin>>x;
    //     v.push_back(x);
    cin>>v[i];
    } 
    long long int q;
    cin>>q;
    // vector<long long int> b;
    long long int b[q];
    for(long long int i=0;i<q;i++)
    {
        // long long int x;
        // cin>>x;
        // b.push_back(x);
        cin>>b[i];
    }
    for(long long int i=0;i<q;i++)
    {
        for(long long int j=0;j<n;j++)
        {
            if(b[i]==v[j])
            {
                cout<<"Yes "<<j+1<<endl;
                break;
            }
            else if (b[i]<v[j]) {
            cout<<"No "<<j+1<<endl;
            break;
            }
        }
    }
      
    return 0;
}