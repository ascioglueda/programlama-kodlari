#include <iostream>
using namespace std;

int toplama(int sayi1,int sayi2){
    return sayi1+sayi2;
}
int main(){
    int x=5;
    int y=6;
    cout<<x<<"+"<<y<<"="<<toplama(x,y);
    return 0;
}