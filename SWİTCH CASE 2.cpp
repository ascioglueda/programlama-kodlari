#include <iostream>
using namespace std;
int main(){
    int haftaninGunu;
    cout<<"haftanin hangi gununu ogrenmek istiyorsunuz"<<endl;
    cin>>haftaninGunu;

    switch(haftaninGunu){
        case 1:
        cout<<"pazartesi";
        break;
        case 2:
        cout<<"sali";
        break;
        case 3:
        cout<<"carsamba";
        break;
        case 4:
        cout<<"persembe";
        break;
        case 5:
        cout<<"cuma";
        break;
        case 6:
        cout<<"cumartesi";
        break;
        case 7:
        cout<<"pazar";
        default:
          cout<<"Lutfen 1-7 arasinda bir deger giriniz...";
    }
    return 0;
}