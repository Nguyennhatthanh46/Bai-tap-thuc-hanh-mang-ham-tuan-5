#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);
int Fibo(int x)
{
int a = 0;
int b = 1;
int c = 1;
for (int i = 2; i<x;i++){
    a = b;
    b = c;
    c= a+b;
}return c;
}
void Nhapmang(int a[][MAX], int &n){
cin>>n;
for(int i = 0; i<n; i++){
    for(int j = 0; j <n; j++){
        a[i][j]=Fibo(i+j+1);
    }
}
}
void Xuatmang(int a[][MAX], int n){
for(int i = 0; i<n; i++){
    for(int j = 0; j <n; j++){
            cout<<a[i][j]<<" ";
    }cout<<endl;
}
}
int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	
    return 0;
}
