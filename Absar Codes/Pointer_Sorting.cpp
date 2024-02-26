#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int temp;
    int *ptr = new int[10];
    for(int i = 0; i<10;i++){
        *(ptr+i) = rand()%100;
    }
    for(int i = 0; i<10;i++){
        cout<<*(ptr+i)<<"\t";
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(ptr[j+1]>ptr[j]){
                temp = ptr[j+1];
                ptr[j+1] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    cout<<endl;
    for(int i = 0; i<10;i++){
        cout<<*(ptr+i)<<"\t";
    }
}