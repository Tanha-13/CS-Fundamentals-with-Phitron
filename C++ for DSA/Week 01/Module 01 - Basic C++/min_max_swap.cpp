#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    // if(a < b){
    //     cout << a << endl;
    // }
    // else{
    //     cout << b << endl;
    // }

    // this functions can compare infinite numbers
    // cout << min(a,b) << endl;
    // cout << min({10,20,30,40,50}) << endl;
    // cout << max(a,b) << endl;


    //swapping two variables
    // manual way
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << a << " " << b;

    // using built in function
    swap(a,b);
    cout << a << " " << b << endl;

    return 0;
}