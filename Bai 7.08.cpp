#include <iostream>
using namespace std;
#define MAXR 100
#define MAXC 100
bool matranB(double a[MAXR][MAXC], int m, int n){
int k = 0;
for(int i = 0; i<m; i++){
    for(int j = 0; j<n; j++){
        if (i == j){
 if(a[i][j]!=1)return false;
 }else if(i<j){
 if(a[i][j]!=0)return false;
 }
 else{
    if(a[i][j]!=0){
    if (k == 0) {
    k = j + 1;
    } else if (k != j + 1) {
    return false;
    }
    }
 }
}
}return true;
}
int main() {
    double a[MAXR][MAXC];
    int m,n;
    cin>>m>>n;
    for(int i = 0; i<m; i++){
    for(int j = 0; j <n; j++){
    cin>>a[i][j];
    }
    }
    if(matranB(a,m,n)) cout<<"Yes";
    else cout<<"No";
}
