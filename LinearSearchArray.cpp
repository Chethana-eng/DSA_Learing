#include <iostream>
using namespace std;

int LinearSearch(int arr[],int n){
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            cout<<i<<endl;
        }
    }
}
int main(){
    int arr[5] = {2,6,0,9,8};
    int n;

    cin>>n;
    LinearSearch(arr,n);
    return 0;
}