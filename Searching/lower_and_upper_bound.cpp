#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {3,56,24,1,56,89,90};

    cout<<*lower_bound(arr.begin(),arr.end(),50)<<endl;

    cout<<*upper_bound(arr.begin(),arr.end(),50)<<endl;

    return 0;

}