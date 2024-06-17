#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void factorial(int num){
    int i;
    int result = 1;
    for(i = 2; i<= num; i++){
         result *= i;
    }
    cout<<result<<endl;
}

int main(){
    int a = 5;
    factorial(a);
}

