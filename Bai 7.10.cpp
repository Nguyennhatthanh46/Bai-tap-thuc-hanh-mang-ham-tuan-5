#include <iostream>
using namespace std;
#define MAXR 100
#define MAXC 100

int main() {
    float a[MAXR][MAXC];
    float b[MAXR][MAXC];
    int m,n;
    cin>>m>>n;
    if ((m > MAXR || n > MAXC)&&(m > MAXR || n > MAXC)) {
        return 0;
    }
    for(int i = 0; i<m; i++){
    for(int j = 0; j <n; j++){
    cin>>a[i][j];
    }
    }
    int l,k;
    cin>>l>>k;
    if (n != l) {
        return 0;
    }
    for(int i = 0; i<l; i++){
    for(int j = 0; j <k; j++){
    cin>>b[i][j];
    }
    }
    float c[MAXR][MAXC];
    for(int i = 0; i<m; i++){
    for(int j = 0; j <k; j++){
        c[i][j]=0;
        for(int t=0;t<n;t++){
            c[i][j]+=a[i][t]*b[t][j];
        }
    }
    }
    for(int i = 0; i<m; i++){
    for(int j = 0; j <k; j++){
       cout<<c[i][j]<<" ";
    }cout<<endl;
    }
    return 0;
}
