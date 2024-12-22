#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
int main(){
char chuoikitu[MAX];
    cin.getline(chuoikitu,MAX);
for(int i=0;chuoikitu[i]!='\0';i++){
    if(chuoikitu[i]>='0'&&chuoikitu[i]<='9'){
        cout<<"CHUOI KHONG HOP LE."<<endl;
        return 0;
    }
}cout<<chuoikitu;
}
