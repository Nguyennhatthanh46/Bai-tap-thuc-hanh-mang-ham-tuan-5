#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	//gets(s);	//Nhap chuoi s	
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}
void DemKyTu(char s[]) {
    int mangdem[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        mangdem[(int)s[i]]++;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (mangdem[(int)s[i]] != 0) {
            cout << s[i] << ": " << mangdem[(int)s[i]] << endl;
          mangdem[(int)s[i]]=0;
        }
    }
}

int myStrcmp(char s1[MAX], char s2[MAX]) {
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
