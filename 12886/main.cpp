#include <iostream>
#include <cstring>

using namespace std;

int a, b, c;
int D[501][501][501];

int go(int x, int y, int z) {
    if (x == a && y == b && z == c) {
        return 1;
    }
    if(x+y+z != a+b+c){
        return 0;
    }

    if (x < 0 || y < 0 || z < 0) {
        return 0;
    }


    int &ans = D[x][y][z];
    if (ans != -1) return ans;
    ans = 0;

    if (go(x / 2, y + a, z)) ans = go(x / 2, y + a, z);
    if (go(x + b, y / 2, z)) ans = go(x + b, y / 2, z);
    if (go(x / 2, y, z + a)) ans = go(x / 2, y, z + a);
    if (go(x + c, y, z / 2)) ans = go(x + c, y, z / 2);
    if (go(x, y / 2, z + b)) ans = go(x, y / 2, z + b);
    if (go(x, y + c, z / 2)) ans = go(x, y + c, z / 2);

    return ans;
}

int main() {
    cin >> a >> b >> c;

    memset(D, -1, sizeof(D));
    int mid = (a + b + c)/3;
    cout << go(mid, mid, mid) << endl;

    return 0;
}