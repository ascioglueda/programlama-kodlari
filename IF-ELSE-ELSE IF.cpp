#include <iostream>
using namespace std;
int main(){

string eMail;
string parola;
string kontrolEmail="admin@admin.com";
string kontrolParola="admin";
    cout<<"Lutfen kullanici adinizi ve sifrenizi giriniz:"<<endl;
    cin>>eMail>>parola;

    if(kontrolEmail==eMail&&kontrolParola==parola){
        cout<<"Basarili giris yaptiniz.";
    }
    else if(kontrolEmail==eMail||kontrolParola==parola){
        cout<<"Bir bilgiyi yanlis girdiniz!";
    }
    else{
        cout<<"Butun bilgileri yanlis girdiniz!";
    }


    return 0;
}