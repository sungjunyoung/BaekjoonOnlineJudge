#include <iostream>

using namespace std;
char result_arr[7000][14000];

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 * N - 1; j++)
            result_arr[i][j] = ' ';
    }

    result_arr[0][N - 1] = '*';
    result_arr[1][N - 2] = '*';
    result_arr[1][N] = '*';
    for (int i = 0; i < 5; i++)
        result_arr[2][N - 3 + i] = '*';

    if (N >= 6) {
        int cnt = 1;
        for (int i = 6; i <= N; i *= 2) {
            for (int j = 0; j < i / 2; j++) {
                for (int k = N - 1 - i / 2; k < N + i / 2; k++) {
                    result_arr[i / 2 + j][k - i / 2] = result_arr[j][k];
                    result_arr[i / 2 + j][k + i / 2] = result_arr[j][k];
                }
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 * N - 1; j++)
            cout << result_arr[i][j];
        if (i < N - 1)
            cout << " ";
        cout << endl;
    }
    return 0;
}

// TODO 한번더보기