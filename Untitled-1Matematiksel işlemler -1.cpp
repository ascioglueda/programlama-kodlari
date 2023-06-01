#include <iostream>
using namespace std;
int main(){
    float sayi1;
    float sayi2;
    float toplama=0,cikarma=0,carpma=0;
    float bolme=0;

      cout<<"Lutfen 2 sayi giriniz:"<<endl;
      cin>>sayi1;
      cin>>sayi2;

      toplama=sayi1+sayi2;
      cout<<toplama<<endl;

      cikarma=sayi1-sayi2;
      cout<<cikarma<<endl;

      carpma=sayi1*sayi2;
      cout<<carpma<<endl;

      bolme=sayi1/sayi2;
      cout<<bolme<<endl;
    return 0;
}