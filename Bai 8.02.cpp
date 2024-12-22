#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];

	fflush(stdin);
	fgets(s,MAX,stdin);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}
void myStrcpy(char s[], int vt, char s1[], int k) {
    int i = 0;
    while (s1[k] != '\0') {
        s[vt + i] = s1[k];
        i++;
        k++;
    }
    s[vt + i] = '\0';
}


void Chuanhoa(char s[]) {
    char s1[MAX];
    int dem = 0;
    int i = 0;
    while (s[i] == ' ') i++;
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            if (dem > 0 && s1[dem - 1] != ' ') {
                s1[dem++] = ' ';
            }
        } else if (s[i] == '.') {
            if (dem > 0 && s1[dem - 1] == ' ') dem--;
            s1[dem++] = '.';
            while(s[i + 1] == ' ') i++;
            if (s[i + 1] != '\0') {
                s1[dem++] = ' ';
            }
        } else {
            s1[dem++] = s[i];
        }
        i++;
    }
    if (dem > 0 && s1[dem - 1] == ' ') dem--;
    s1[dem] = '\0';
    myStrcpy(s, 0, s1, 0);
}
