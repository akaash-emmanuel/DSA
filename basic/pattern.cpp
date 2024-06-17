#include <iostream>
using namespace std;

// int main(){
//     int i, rows, cols, j;
//     cin>>rows>>cols;
//     for(i=1; i<=rows; i++){
//         cout<<"\n";                                 // first for loop is for rows
//             for(j=1; j<=cols; j++){
//                 cout<<"*\t";                        // second for loop is for cols
//         }   

//     }
// }                                                   // this prints a rectangle 


// int main() {
//     int i, rows, cols, j;
//     cin>>rows>>cols;
//     for(i = 1; i<=rows; i++){
//         cout<<"\n";
//         for(j = 1; j<=cols; j++){
//            if(j==1 || j == cols){
//             cout<<"*\t";
//            }
//            else if(i == 1 || i == rows){
//             cout<<"*\t";
//            }
//            else{
//             cout<<"\t";                                 // this prints a hollow rectangle
//            }
//         }
//     }
// }   

// int main() {
//     int i, j, n;
//     cin>>n;

//     for(i = n; i>=1; i--){
//         cout<<"\n";
//         for(j=1; j<=i; j++){                               // this prints an inverted half triangle
//             cout<<"*";
//         }
//     }

// }


// int main() {
//     int i, j, n;
//     cin>>n;
    
//     for (i = 0; i<= n; i++){
//         cout<<"\n";
//         for (j = i; j >=0; j-- ){                              // this prints a half triangle
//             cout<<"*";
//         }
//     }
// }


// int main() {
//     int i, j, n;
//     cin>>n;

//     for(i = 1; i<=n; i++){
//         cout<<"\n";
//         for(j=1; j<=i;j++){
//             cout<<i;                                            // triangle with values  the same as row number
//         }
//     }
// }


// int main() {
//     int i, j, n, count;
//     count = 0;
//     cin>>n;

//     for(i = 1; i<= n; i++){
//             cout<<endl;
//         for(j = 1; j <= i; j++){
//             count++;
//             cout<<count<<" ";                                      // floyds triangle
//         }
//     }
// }

int main() {
    int i, j, n, gap;
    cin>>n;
    gap = 2*n - 2*i;
    for(i = 1; i<=n; i++){
        cout<<endl;
        for(j = 1; j<= i; j++){
            cout<<"*"<<gap<<"*";
        }
        for(j = 1; j<= gap; j++){
            cout<<" ";
        }
    }
}