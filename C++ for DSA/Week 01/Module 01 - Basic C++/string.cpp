#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    cin.ignore(); // ignores the enter for a newline
    char str[100];
    // cin >> str; //problem:does not take spaces
    //fgets(str,100,stdin); // it can be used in c++
    cin.getline(str,100);
    // cout << x << endl << str << endl;

    //taking input using string data type
    string s;
    cin >> s;
    cout << s;
    return 0;
}