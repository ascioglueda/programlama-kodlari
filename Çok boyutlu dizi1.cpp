#include <iostream>
using namespace std;
int main(){

    int matris[4][4];

       for(int i=0;i<4;i++)//satır sayısı
       {
        for(int j=0;j<4;j++)//sütun sayısı
        {
           cin>>matris[i][j];
        }
       }
       
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<matris[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}