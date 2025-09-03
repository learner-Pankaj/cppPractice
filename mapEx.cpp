#include<bits/stdc++.h>
using namespace std;

int main(){
    //declaration
    std::map<int, string> map1;
    //initialization
    std::map<int, string> map2 = {{1001, "Pankaj"}, {2001, "vikalp"}, {3001, "Amber"}};
    
    //insert
    map2[3001] = "Tim";
    map<int, string>::iterator it = map2.begin();
    for(it=map2.begin(); it != map2.end(); it++){
        cout << "Key :: " << it->first << " ";
        cout << "Value :: " << it->second << endl;
    }

    cout << "Value at 2001 :: " << map2.at(2001) << endl;
    map2.at(3001) = "Amber";
    cout << "Value at 3001 :: " << map2.at(3001) << endl;

    //insert key value in the map
    //insert 1st approach
    map2.insert(pair<int, string>(2011, "James"));
    //insert 2nd approach
    map2.insert(make_pair(5001, "Aasma"));

    it = map2.begin();
    map2.erase(it); //it will erase the element where iterator is pointing (right now at the begining)
    for(it=map2.begin(); it != map2.end(); it++){
        cout << "Key :: " << it->first << " ";
        cout << "Value :: " << it->second << endl;
    }
    return 0;
}