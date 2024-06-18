#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

// void factorial(int num){
//     int i;
//     int result = 1;
//     for(i = 2; i<= num; i++){
//          result *= i;
//     }
//     cout<<result<<endl;                                
// }

// int main(){
//     int a = 5;                                       // factorial
//     factorial(a);
// }
///////////////////////////////////////////////////////////////////////////
// bool isPrime(int num){
//     int i;
//     for(i = 2; i< num ; i++){
//         if(num % i == 0){
//             return false;
//         }
//     }
//     return true;                                         // prime numbers between two numbers
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i = a; i <= b; i++){
//         if(isPrime(i)==true){
//             cout<<i<<endl;
//         }
//     }
// }
///////////////////////////////////////////////////////////////////////////////

// void fibonacci(int num){
//     int i;
//     int t1 = 0;
//     int t2 = 1;
//     int next;
//     for(i = 1; i<= num; i++){
//          cout<<t1<<"\t";
//         next = t2 + t1;
//         t1 = t2;
//         t2 = next;
//     }                                            // fibonacci sequence
// }

// int main(){
//     int a;
//     cin>>a;
//     fibonacci(a);
// }
///////////////////////////////////////////////////////////////////////////////
// int factorial(int num){
//     int i;
//     int result = 1;
//     for(i = 2; i<= num; i++){
//          result *= i;
//     }
//     return result;                               
// }

// int main(){
//     int n,r,k;                                           // NCR function
//     k = n-r;
//     cin>>n>>r;
//     int num = factorial(n);
//     int denom = factorial(r)*factorial(k);
//     float result = num/denom;
//     cout<<result;
// }
///////////////////////////////////////////////////////////////////////////////

// int factorial(int num){
//     int i;
//     int result = 1;
//     for(i = 2; i<= num; i++){
//          result *= i;
//     }
//     return result;                               
// }
// double ncr(int num1, int num2){
//     int k = num1 - num2;                                     // pascals triangle
//     int numerator = factorial(num1);
//     int denominator = factorial(num2)*factorial(k);
//     double result = numerator/denominator;
//     return result;
// }

// int main(){
//     int row;
//     cin>>row;
//     for(int i = 0; i <= row; i++){
//             cout<<endl;
//         for(int j = 0; j<= i; j++){
//             cout<<ncr(i,j)<<" ";
//         }
//     }
// }
///////////////////////////////////////////////////////////////////////////////

// int sum_of_first_n_natural_numbers(int num){
//     int sum = 0;
//     for(int i = 1; i<= num; i++){   
//         sum = sum + i;
//     }
//     return sum;
// }
                                                            // sum till n
// int main(){
//     int a;
//     cin>>a;
//     cout<<sum_of_first_n_natural_numbers(a);
// }
///////////////////////////////////////////////////////////////////////////////

