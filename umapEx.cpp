#include<bits/stdc++.h>
using namespace std;

int main(){
    //unodered map can't have duplicate key value pair
    unordered_map<int, string> umap;
    unordered_map<int, string> umap2 = {{101, "Pankaj"},{125, "Vikalp"}, {110, "Poonam"}, {115, "Amber"}, {105, "Vidhi"}};
    unordered_map<int, string>::iterator it = umap2.begin();
    for(it=umap2.begin(); it!=umap2.end(); it++){
        cout << it->first << " ";
        cout << it->second << endl;
    }

    cout << umap2.at(110) << endl;

    umap2.insert(pair<int, string>(120, "Surajit"));
    umap2.insert(make_pair(130, "James"));

    it = umap2.begin();
    cout << umap2.size() << endl;
    // umap.erase(it);

    cout << "--------------------------------------------\n";
    for(it=umap2.begin(); it!=umap2.end(); it++){
        cout << it->first << " ";
        cout << it->second << endl;
    }
    return 0;
}