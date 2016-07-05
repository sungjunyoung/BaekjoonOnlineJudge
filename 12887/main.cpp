#include <iostream>
#include <map>

using namespace std;



int main() {
    char arr[51][51];

    int n;
    cin >> n;
    for(int i=1; i <= n;i++){
        cin >> arr[i][1];
    }
    for(int i=1;i<=n;i++){
        cin >> arr[i][2];
    }

    int start =0;
    bool flag = true;
    for(int i=1; i<=n ;i++){
        if(arr[i][1] == arr[i][2] && arr[i][1] == '.'){
            start = i;
            break;
        }
        if(i==n) flag = false;
    }

    if(flag == false){
        cout << 0 << endl;
        return 0;
    }

    int count = 0;
    for(int i=start;i<=n;i++){
        if(arr[i][1]!=arr[i][2]){
            break;
        }
        count ++;
    }

    cout << count << endl;
    return 0;
}