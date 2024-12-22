#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
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

void StringReverse(char st[]){
    char mang[MAX][MAX];
    int dem = 0;
    int gan = 0;

    for (int i = 0; st[i]!='\0'; i++) {
        if (st[i] == ' ' || st[i] == '\0') {
            mang[dem][gan] = '\0';
            dem++;
            gan = 0;
        } else {
            mang[dem][gan++] = st[i];
        }
    }
    if (gan > 0) {
        mang[dem][gan] = '\0';
        dem++;
    }

    int pos = 0;
    for (int i = dem - 1; i >= 0; i--) {
        for (int j = 0; mang[i][j] != '\0'; j++) {
            st[pos++] = mang[i][j];
        }
        if (i > 0) st[pos++] = ' ';
    }
    st[pos] = '\0';
}
