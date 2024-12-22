
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt. 
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s	
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}


void Chuanhoa(char s[]){
int j = 0;
int i = 0;
bool kiem = false;
while (s[i] == ' ') i++;
while (s[i] != '\0') {
if(s[i]!=' '){
if (i == 0 || s[i - 1] == ' ') {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[j++] = s[i] - 'a' + 'A';
            } else {
                s[j++] = s[i];
            }
        }
else {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[j++] = s[i] - 'A' + 'a';
            } else {
                s[j++] = s[i];
            }
        }
        kiem = true;
    }
    else if (kiem) {
            s[j++] = ' ';
            kiem = false;
        }
        i++;
    }
     if (j > 0 && s[j - 1] == ' ') j--;
    s[j] = '\0';
}
