#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0;i<4;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    for(int i=0;i<4;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"smallest : "<<smallest<<endl;
    cout<<"largest : "<<largest<<endl;
    return 0;
}