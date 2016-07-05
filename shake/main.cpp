#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


int main() {
    int s, p, i, j;
    cin >> s >> p;
    string inputString;
    vector<int> minVec;
    vector<int> countVec;
    int resultCount = 0;

    cin >> inputString;
    for (i = 1; i <= 4; i++) {
        int temp;
        cin >> temp;
        minVec.push_back(temp);
        countVec.push_back(0);
    }

    int first = 0;
    int last = p-1;
    while (last != inputString.size()) {

        for (i = 0; i < 4; i++) {
            countVec[i] = 0;
        }
        string partString = "";
        partString = inputString.substr(first, last);
        for (i = 0; i < partString.size(); i++) {
            if (partString[i] == 'A')
                countVec[0] = countVec[0] + 1;
            else if (partString[i] == 'C')
                countVec[1] = countVec[1] + 1;
            else if (partString[i] == 'G')
                countVec[2] = countVec[2] + 1;
            else
                countVec[3] = countVec[3] + 1;
        }

        bool flag = true;
        for (i = 0; i < 4; i++) {
            if(minVec[i] > countVec[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            resultCount +=1;
        }

        first += 1;
        last += 1;
    }


    cout << resultCount;
    return 0;
}