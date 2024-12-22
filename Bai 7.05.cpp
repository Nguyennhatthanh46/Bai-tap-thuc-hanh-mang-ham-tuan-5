#include <iostream>
using namespace std;
#define MAX 100


double chuyenVi(double a[MAX][MAX], int m, int n) {
double S = 0;
for(int i = 0; i < m; i++){
for(int j = 0; j < n; j++){
     if(i==j) {
        S+=1.0*a[i][j];
     }
}
} return 1.0*S;
}
int main() {
int m,n;
double a[MAX][MAX];
cin>>m>>n;
if(m!=n) return 0;
for(int i = 0; i < m; i++) {
for(int j = 0; j < n; j++)
cin>>a[i][j];
}
cout<<chuyenVi(a, m, n);
return 0;
}
