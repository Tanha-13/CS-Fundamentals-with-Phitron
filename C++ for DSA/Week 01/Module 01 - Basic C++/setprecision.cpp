#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double d = 23.456767;
    // printf("%.2lf",d);
    cout << fixed << setprecision(3) << d << endl;
}