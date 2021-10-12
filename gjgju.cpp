#include<bits/stdc++.h>
using namespace std;

int main()
{
     int size;
    cin >> size;
    vector<int> vec(size);
    int input;


    for(int it = 0; it < size; it++){
        cin >> input;
        vec[it] = input;
    }
    vector<int>::iterator vIt;



    int queries;
    cin >> queries;
    int comp;
    for (int it = 0; it < queries; it++){
        cin >> comp;
        vIt = lower_bound(vec.begin(), vec.end(), comp);
        if(comp == *vIt) cout << "Yes " << (vIt - vec.begin() + 1) << endl;
        else cout << "No " << (vIt - vec.begin() + 1) << endl;
    }
return 0;
}
