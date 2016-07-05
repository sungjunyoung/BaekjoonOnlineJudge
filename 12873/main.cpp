#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> people;
    for (int i = 1; i <= n; i++) {
        people.push_back(i);
    }

    int k = 1;
    long long jump;
    int eraseIndex = 0;
    int size = 0;
    while (people.size() != 1) {
        size = (int) people.size();
        jump =  (k * k * k-1)%size;
        eraseIndex = (int) ((eraseIndex + jump) % size);
        people.erase(people.begin() + eraseIndex);
        k += 1;
    }


    cout << people[0] << endl;

    return 0;
}