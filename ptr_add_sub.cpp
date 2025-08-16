/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;
int main(){
    int a1=100;
    int b1=50;
    int *ptr1=&a1;
    int *ptr2=&b1;
    int sum=(*ptr1)+(*ptr2);
    int diff=(*ptr1)-(*ptr2);
    cout << "SUM : " << sum << endl;
    cout << "DIFFERENCE: " << diff << endl;
}
/*
Output:-
SUM : 150
DIFFERENCE : 50
*/
