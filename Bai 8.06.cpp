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
 int vt = 0; int dau = 0;
 while(st[vt]!='\0'){
    if(st[vt] ==' '||st[vt]=='\n'){
        for(int i = dau, j = vt - 1; i < j ;i++,j--){
        char tam = st[i];
        st[i]= st[j];
        st[j]= tam;
        }
    dau = vt + 1;
    }
    vt++;
 }
    for(int i = dau , j = vt - 1; i < j ;i++,j--){
        char tam = st[i];
        st[i]= st[j];
        st[j]= tam;
        }
}
