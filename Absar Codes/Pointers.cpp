#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    a = 11;
    cout<<*ptr;
}