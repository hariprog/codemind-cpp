#include <iostream>
using namespace std;
int main() {
    int N,ans=0;
    cin >> N;
    int count = 0;
    if(N%2==0) {
    ans = N*(N/2);
    }
    if(N%2!=0) {
        ans = N*(N/2) + ((N-1)/2);
    }
    cout << ans;

}