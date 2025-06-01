#include <iostream>
using namespace std;
/*class Pen{
    bool operator==(Pen pp){
        thid
    }
}
int main(){*/
    /*int a;
    cin >> a;
    cout << "output: " << a*5 << endl;
    return 0;
    string s;
    cin >> s;
    cout << s << endl;
    return 0;
    string s;
    getline(cin , s);
    cout <<s;
    return 0;
    int age;
    cin >>age;
    if (age>=18){
        cout<<"Eligible to vote!"<<endl;
    }
    else{
        cout<<"not eligible to vote"<< endl;
    }
    return 0;*/
// recursion
    /*int sumOfDigits(int n){
        if(n==0) return 0;
        return(n%10) + sumOfDigits(n/10);
    }
    int main(){
        int num ;
        cout<<"Enter a number: ";
        cin >> num;

        int result = sumOfDigits(num);
        cout<<"sum of digits of "<<num<<" is : "<< result<< endl;
        return 0;
    }*/

    int exponent(int n, int x){
        if(x==0) return 1;
        return n*exponent(n,x-1);
    }
    int main(){
        int base;
        cout << "Enter the base (x): ";
        cin >> base;
        int exp;
        cout << "Enter the exponent (n): ";
        cin >> exp;
        int result  = exponent(base,exp);
        cout << base<<"^"<<exp << " = "<<result<<endl;
    }
//}