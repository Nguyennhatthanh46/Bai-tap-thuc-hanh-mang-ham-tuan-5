#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	fgets(s,MAX,stdin);
	fgets(s1,MAX,stdin);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{

ChenChuoiTaiVitriK(s,s1,k);
    }
    return 0;
}
int myStrlen(char s[], int k)
{
    k = 0;
    while (s[k] != '\0')
    {
        if (s[k] == '\n')
            break;
        k++;
    }
    return k;
}

void ChenChuoiTaiVitriK(char s[], char s1[], int k){

    int chieudai_s=myStrlen(s,0);
    int chieudai_s1=myStrlen(s1,0);

    char b[MAX];
    int x=0;
    for(int i=0;i<k;i++){
        b[x]=s[i];
        x++;
    }
    for(int i=0;i<chieudai_s1;i++){
        b[x]=s1[i];
        x++;
    }
    for(int i=k;i<chieudai_s;i++){
        b[x]=s[i];
        x++;
    }
    b[x]='\0';
    cout<<b;
}
