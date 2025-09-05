#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream fout;
    // fout.open("my.txt");
    // fout << "Pankaj" ;
    // fout.close();

    ifstream fin;
    fin.open("my.txt");
    string line;
    getline(fin, line);
    cout << line << endl;
    return 0;
}