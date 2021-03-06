#include <iostream>

using namespace std;
const int MAX = 10000000;

int main() {
    int v;
    cin >> v;
    int table[401][401];
    for (int i = 1; i <= v; i++) {
        for (int j = 1; j <= v; j++) {
            cin >> table[i][j];
        }
    }

    for (int k = 1; k <= v; k++) {
        for (int i = 1; i <= v; i++) {
            for (int j = 1; j <= v; j++) {
                if (table[i][k] + table[k][j] < table[i][j])
                    table[i][j] = table[i][k] + table[k][j];
            }
        }
    }

    int min = 10000001;
    for (int i = 1; i <= v; i++) {
        if (table[i][i] < min) {
            min = table[i][i];
        }
    }

    if(min == 10000000){
        cout << -1;
    } else{
        cout << min;
    }

    return 0;
}