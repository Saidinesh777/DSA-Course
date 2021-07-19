#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int,bool> h;
    unordered_map< string, string > Phonebook;

    Phonebook["Kartavya"] = "9581514746";
    Phonebook["sai"] = "8185898485";
    

    string name;
    cin>>name;

    if(Phonebook.find(name) == Phonebook.end()){
        cout<<"Number not found"<<endl;
    }else{
        cout<<"Number of "<<name<<" is "<<Phonebook[name]<<endl;
    }

    return 0;
   
}