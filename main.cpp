#include <iostream>
#include "cmath"
using namespace std;

float f(float y){
    float z;
    z = pow(y,2)*cos(y)+1;
    return z;
}

int main() {
    float a=0;
    float b=0;
    float err=0;
    float x=0;
    cout << "inserire estremi";
    cin >> a;
    cin >> b;
    if(f(a)*f(b) >=0){
        return 5;
    }else{
        a=(a+b)/2;
    }if(f(x)==0){
        cout << x;
        cout << f(x);
    }else{
        if(f(a)*f(b) < 0){
            b=x;
        }else{
            a=x;
        }
    }
    err = abs((b-a)/2);
    if(err >= 1e-6){
        return 11;
    }else{
        cout << x;
        cout << f(x);
    }

    return 0;
}
