#include <iostream>
using namespace std;

// // int main(){
// //     int i, rows, cols, j;
// //     cin>>rows>>cols;
// //     for(i=1; i<=rows; i++){
// //         cout<<"\n";                                 // first for loop is for rows
// //             for(j=1; j<=cols; j++){
// //                 cout<<"*\t";                        // second for loop is for cols
// //         }   

// //     }
// // }                                                   // this prints a rectangle 


// // int main() {
// //     int i, rows, cols, j;
// //     cin>>rows>>cols;
// //     for(i = 1; i<=rows; i++){
// //         cout<<"\n";
// //         for(j = 1; j<=cols; j++){
// //            if(j==1 || j == cols){
// //             cout<<"*\t";
// //            }
// //            else if(i == 1 || i == rows){
// //             cout<<"*\t";
// //            }
// //            else{
// //             cout<<"\t";                                 // this prints a hollow rectangle
// //            }
// //         }
// //     }
// // }   

// // int main() {
// //     int i, j, n;
// //     cin>>n;

// //     for(i = n; i>=1; i--){
// //         cout<<"\n";
// //         for(j=1; j<=i; j++){                               // this prints an inverted half triangle
// //             cout<<"*";
// //         }
// //     }

// // }


// // int main() {
// //     int i, j, n;
// //     cin>>n;
    
// //     for (i = 0; i<= n; i++){
// //         cout<<"\n";
// //         for (j = i; j >=0; j-- ){                              // this prints a half triangle
// //             cout<<"*";
// //         }
// //     }
// // }


// // int main() {
// //     int i, j, n;
// //     cin>>n;

// //     for(i = 1; i<=n; i++){
// //         cout<<"\n";
// //         for(j=1; j<=i;j++){
// //             cout<<i;                                            // triangle with values  the same as row number
// //         }
// //     }
// // }


// // int main() {
// //     int i, j, n, count;
// //     count = 0;
// //     cin>>n;

// //     for(i = 1; i<= n; i++){
// //             cout<<endl;
// //         for(j = 1; j <= i; j++){
// //             count++;
// //             cout<<count<<" ";                                      // floyds triangle
// //         }
// //     }
// // }

// int main() {
//     int i, j, n;
//     cin>>n;
//     for(i = 1; i<=n; i++){
//         cout<<endl;
//         for(j = 1; j<= i; j++){
//             cout<<"*";
//         }                                                           // to print upper half of butterfly
//         int gap = 2*n - 2*i;
//         for(j = 1; j<= gap; j++){
//             cout<<" ";
//         }
//         for(j = 1; j<=i; j++){
//             cout<<"*";
//         }
//     }
//     //
//     //

//     for(i = n; i>=1; i--){
//         cout<<endl;
//         for(j = 1; j<= i; j++){
//             cout<<"*";
//         }
//         int gap = 2*n - 2*i;
//         for(j = 1; j<= gap; j++){
//             cout<<" ";                                              // to print lower half of butterfly
//         }
//         for(j = 1; j<=i; j++){
//             cout<<"*";
//         }
//     }
// }


// int main() {
//     int i, j, n;
//     cin>>n;
//     int count;

//     for(i = n; i>=1; i--){
//         cout<<endl;
//         for(j = i; j>= 1; j--){
//             cout<<j<<" ";                                               // prints a number triangle
//         }
//     }
// }

// int main() {
//     int i, j, n;
//     cin>>n;
    
//     for(i = 1; i<=n; i++){
//         cout<<endl;
//         for(j = 1; j <= i; j++){
//             if((i+j)%2 == 0){
//                 cout<<"1"<<" ";
//             }
//             else {
//                 cout<<"0"<<" ";                                            // prints an alternate 1 0 pattern triangle
//             }
//         }
//     }
// }

// int main() {
//     int i, j, n;
//     int gap;
//     cin>>n;
//     for(i = 1; i<=n; i++){
//         cout<<endl;
//         gap = n - i;
//         for(j = 1; j<= gap; j++){
//             cout<<" ";
//         }
//         for(j = 1; j<=n; j++){                                              // prints a rhombus
//             cout<<"*";
//         }
//     }
// }


// int main() {
//     int i, j, n;
//     cin>>n;
//     int gap;
//     for(i = 1; i <= n; i++){
//         cout<<endl;
//             gap = n - i;
//         for(j = 1; j<=gap; j++){
//             cout<<" ";
//         }
//         for(j=1; j<=i; j++){                                                    // prints a triangle of numbers 
//             cout<<j<<" ";
//         }
//     }
// }

