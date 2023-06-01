#include <iostream>
using namespace std;
int main(){
    string isimler[3];
    int yas[3];

     for(int i=0;i<3;i++){
        cout<<i+1<<". elemaninin ismini ve yasini giriniz"<<endl;
        cin>>isimler[i]>>yas[i];
     }
     
     for(int i=0;i<3;i++){
        cout<<i+1<<". elamaninin ismi: "<<isimler[i]<<" ve yasi: "<<yas[i]<<endl;
     }


    return 0;
}