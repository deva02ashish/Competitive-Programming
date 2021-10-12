#include<bits/stdc++.h>
using namespace std;

int main()
{int N=4;
    int A[N]={2,1,5,9};
    for (int i = 0; i < N; i++)
    {
       cout<<A[i]<<" ";
    }
    cout<<endl;
vector<int>v;
        for(int i=0;i<N;i++)
        {
            int temp=0;
            for(int j=0;j<N;j++)
            {
                cout<<"the value of temp before if ="<<temp<<endl;
             if(A[i]!=A[j])
             {
                temp=(temp^A[j]);
                cout<<"the value of temp :"<<temp<<endl; 
             }
            }
            cout<<endl;
           v.push_back(temp);
            
        }
        for (int i = 0; i < N; i++)
        {
            cout<<v[i]<<" ";
        }
        













          vector<int >v;
        for(int i=0;i<N;i++)
        {
            int temp=0;
            for(int j=0;j<N;j++)
            {
             if(A[i]!=A[j])
             {
                temp=(temp^A[j]); 
             }
            }
            v.push_back(temp);
        }
         return v;
    }
return 0;
}