#include <iostream>
#define MAX 101
using namespace std;

bool dk(char s[]) {
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        sum += (s[i] - '0');
    }
    if (sum % 3 == 0) return true;
    return false;
}
int kc(char s1 [], char s2[]) {
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0') {
if (s1[i] != s2[i]) {
return (s1[i] - s2[i]);
}
i++;
}
if (s1[i] == '\0' && s2[i] == '\0') {
return 0;
}

return (s1[i] - s2[i]);

}
void SaoChepMang(char s1[], char s2[]) {
    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0'; 
}

int main() {
    char n[MAX];
    char ketqua[MAX] = ""; 
    cin >> n;
    for (int i = 0; n[i] != '\0'; i++) {
        char gan = n[i]; 
for (char chuso = '0'; chuso <= '9'; chuso++) {
            if (chuso == gan) continue; 
n[i] = chuso; 
            if (dk(n)) { 
   if (kc(ketqua, "") == 0 || kc(n, ketqua) > 0) {
                    SaoChepMang(ketqua, n);
                }
            }
        }

        n[i] = gan; 
    }

    cout << ketqua << endl; 
    return 0;
}
