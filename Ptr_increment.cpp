#include <iostream>
using namespace std;
int main(){
    int x1=10;
    int *ptr1=&x1;
    float x2=20.5;
    float *ptr2=&x2;
    bool x3=1;
    bool *ptr3=&x3;
    double x4=30.75;
    double *ptr4=&x4;
    cout << "Value of x1: " << x1 << endl;
    cout << "Address of x1: " << &x1 << endl;
    cout << "Value of ptr1: " << ptr1 << endl;
    cout << "Value pointed to by ptr1: " << *ptr1 << endl;
    ptr1++;
    cout << "Value of ptr1 after increment: " << ptr2 << endl;
    cout << "Value of x2: " << x2 << endl;
    cout << "Address of x2: " << &x2 << endl;
    cout << "Value of ptr2: " << ptr2 << endl;
    cout << "Value pointed to by ptr2: " << *ptr2 << endl;
    ptr2++;
    cout << "Value of ptr2 after increment: " << ptr3 << endl;
    cout << "Value of x3: " << x3 << endl;
    cout << "Address of x3: " << &x3 << endl;
    cout << "Value of ptr3: " << ptr3 << endl;
    cout << "Value pointed to by ptr3: " << *ptr3 << endl;
    ptr3++;
    cout << "Value of ptr3 after increment: " << ptr3 << endl;
    cout << "Value of x4: " << x4 << endl;
    cout << "Address of x4: " << &x4 << endl;
    cout << "Value of ptr4: " << ptr4 << endl;
    cout << "Value pointed to by ptr4: " << *ptr4 << endl;
    ptr4++;
    cout << "Value of ptr4 after increment: " << ptr4 << endl;
}