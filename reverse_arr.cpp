#include <iostream>
using namespace std;
int main() {
int arr[5]={10,20,30,40,50};
int *ptr=arr+4;
cout << "Value of arr: "<< endl;
for(int i=0;i<5;i++){
    cout << *ptr << endl;
    ptr--;
}
}