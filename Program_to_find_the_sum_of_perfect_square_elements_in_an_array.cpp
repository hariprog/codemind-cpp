#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x,sum=0;
    cin >> x;
    int a[x];
    for(int i=0;i<x;i++) {
        cin >> a[i];
    }
    for(int i=0;i<x;i++) {
        float j = sqrt(a[i]);
        int k = sqrt(a[i]);
        float l = j/k;
        if(l==1.0000) sum+=a[i];
    }
    cout << sum;
}