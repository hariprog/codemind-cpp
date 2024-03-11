#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin >> str;
    int z = 0;
    int o = 0;
    for(int i = 0; str[i]; i++){
        if(str[i] == 'z')
        z++;
        else
        o++;
    }
    if(o== 2*z)
    printf("Yes");
    else
    printf("No");
}