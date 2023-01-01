#include <iostream>
#include <fstream>
using namespace std;
    
int main() {
    // code to write something into the file:
    string st="devesh is a great coder\n", bt="he will be a genius one day";
    ofstream in("newfile.txt");
    in<<st;
    in<<bt+" The father of code";
    string nt1,nt2;
    ifstream of("newfile.txt");
    // of>>nt;// this will only print a single line
    getline(of, nt1);
    getline(of,nt2);
    cout<<nt1<<"\n"<<nt2;
      return 0;
}