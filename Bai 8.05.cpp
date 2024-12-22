#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

int myStrlen(char s[], int k)
{
    int len = 0;
    for (int i = k; s[i] != '\0'; i++){
            len ++;
    }
    return len;
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

void DemTieng(char s1[]) {
if (s1[myStrlen(s1, 0) - 1] == '\n') {
        s1[myStrlen(s1, 0)  - 1] = '\0';
}
 if (myStrcmp(s1, "") == 0) {
        cout << "Chuoi rong." << endl;
        return;
    }

    bool dem[MAX] = {false};

    for (int i = 0; s1[i]!='\0'; i++) {
        if ((i == 0 || s1[i - 1] == ' ') && s1[i] != ' ') {

            char b[MAX];
            int j = 0;
            while (s1[i] != ' ' && s1[i] != '\0') {
                b[j++] = s1[i++];
            }
            b[j] = '\0';


            if (dem[i - j]) {
                continue;
            }


            int x = 1;
            for (int k = i; s1[k]!='\0'; k++) {
                if ((k == 0 || s1[k - 1] == ' ') && s1[k] != ' ') {
                    char a[MAX];
                    int l = 0;
                    while (s1[k] != ' ' && s1[k] != '\0') {
                        a[l++] = s1[k++];
                    }
                    a[l] = '\0';

                    if (myStrcmp(b, a) == 0) {
                        x++;
                        dem[k - l] = true;
                    }
                }
            }
            cout << b << ": " << x << endl;
        }
    }
}
