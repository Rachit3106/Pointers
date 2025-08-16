/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;
int  main(){
    string str="Hello_world";
    char *ptr=&str[0];
    for(int i=0; i<str.length(); i++){
        cout << *ptr;
        ptr++;
    }
}
/*
Output:-
Hello_world
*/