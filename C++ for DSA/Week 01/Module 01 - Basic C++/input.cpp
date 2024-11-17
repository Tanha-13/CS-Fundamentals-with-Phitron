#include<iostream>
using namespace std;
int main(){
    int x;
    char ch;
    double d;
    // scanf("%d",&x);
    // std:: cin >> x;
    // std:: cout << x << std::endl;
    cin >> x >> ch >> d;
    cout << x << endl << ch << endl <<d << endl;

    //finding the ascii value of any character
    char c = 'A';
    // using an integer variable.
    int ascii = c;
    cout << ascii << endl;

    // using typecasting
    cout << (int)c << endl;
    
    // value to character
    int y = 65;
    cout << (char)y << endl;
    return 0;
}