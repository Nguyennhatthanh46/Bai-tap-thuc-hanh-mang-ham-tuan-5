#include <iostream>
using namespace std;
#define MAXR 100
#define MAXC 100

bool matrancheo(double a[MAXR][MAXC], int m, int n){
for(int i = 0; i<m; i++){
    for(int j = 0; j<n; j++){
        if(i!=j&&a[i][j]!=0){
            return false;
        }
    }
}
 return true;
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
    if(matrancheo(a,m,n)) cout<<"Yes";
    else cout<<"No";
}
