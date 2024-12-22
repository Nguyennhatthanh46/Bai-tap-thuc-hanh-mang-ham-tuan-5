#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	bool kt = myStrcat(s1, s2);

int lens1=myStrlen(s1);
int lens2=myStrlen(s2);
if(kt==false){
        cout<<"Khong noi duoc. Khong du bo nho."<<endl;
    }
    else{
for (int i = 0; i <= lens2; i++)
s1 [lens1 + i] = s2[i];
cout<<s1;
return 0;
}
}
int myStrlen(char s[]){
    int k = 0;
    while (s[k] != '\0')
    {
        if (s[k] == '\n')
            break;
        k++;
    }
    return k;
}
bool myStrcat(char s1[], char s2[]){
    int lens1=myStrlen(s1);
    int lens2=myStrlen(s2);
    if((lens1+lens2+1)>MAX){
        return false;
    }
    return true;
}
