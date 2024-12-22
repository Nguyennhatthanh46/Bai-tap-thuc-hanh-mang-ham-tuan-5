#include <iostream>
using namespace std;
#define MAX 100
void nhapMaTran(float a[MAX][MAX], int &m, int &n) {
cin>>m>>n;
for(int i = 0; i < m; i++) {
for(int j = 0; j < n; j++)
cin>>a[i][j];
}
}

void chuyenVi(float a[MAX][MAX], int m, int n) {
for(int j = 0; j < n; j++){
for(int i = 0; i < m; i++){
cout<<a[i][j]<<" ";
}cout<<endl;
}
}
int main() {
int m,n;
float a[MAX][MAX];
nhapMaTran(a, m, n);
chuyenVi(a, m, n);
return 0;
}
