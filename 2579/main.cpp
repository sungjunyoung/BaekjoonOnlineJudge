#include <iostream>

using namespace std;

int a[301];
int d[301][3];

int main() {

    int n;
    cin >> n;

    for(int i=1; i<=n ; i++){
        cin >> a[i];
    }

    d[1][1] = d[1][2] = a[1];

}