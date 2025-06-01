#include <iostream>
using namespace std;

// int factorial(int n){
//     int f=1;
//     for (int i=1;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }
// int main(){
//     cout<<factorial(9)<<endl;
//     return 0;
// }




// int sumofdigits(int n){
//     int s=0;
    
    
//     while(n> 0 ){
//         int r = n%10;
//         n/=10;
//         s += r;
//     }
//     return s;
// }
// int main(){
//     cout<<sumofdigits(123)<<endl;
//     return 0 ;
// }


// bool prime(int n){
//     if (n<=1) return false;
//     for (int i=2; i*i<=n;i++){
//         if(n%i == 0 ) return false;
//     }
//     return true;
// }
// int main(){
//     cout<<prime(7)<<endl;
//     return 0;
// }

bool prime(int n){
    if (n<=1) return false;
    for (int i=2; i*i<=n;i++){
        if(n%i == 0 ) return false;
    }
    return true;
}


int main(){
    int n=9;
     for(int i=1;i<=n;i++){
        if(prime(i)==true){
            cout<<i<<endl;
        }
    }
    return 0;
}
