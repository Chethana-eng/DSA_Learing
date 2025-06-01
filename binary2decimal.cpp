#include <iostream>
using namespace std;

// string binary(int n){
//     string s;
//     if (n==0) return "0";
//     while(n>0){
//         int r=n%2;
//         n/=2;
//         s +=(r+'0');
//     }
    
//     string reversed;
//     for(int i = s.length()-1;i>=0;i--){
//         reversed+=s[i];
//     }
//     return reversed;
// }
// int main(){
//     cout<<binary(78)<<endl;
//     return 0;
// }

 
int decimal(string n){
    int s=0;
    int power=0;
    for(int i =n.length()-1; i>=0;i--){
            s+=(n[i]-'0') * (1<<power);
            power++;
    }
    return s;
}
int main(){
    cout<< decimal("1001110")<<endl;
    return 0;
}