#include <iostream>
using namespace std;
int main(){
    int a1=100;
    int b1=50;
    int *ptr1=&a1;
    int *ptr2=&b1;
    int sum=(*ptr1)+(*ptr2);
    cout << "SUM : " << sum << endl;
}