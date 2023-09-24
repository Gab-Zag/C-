#include <iostream>
#include <cmath>

using namespace std;

int hash_aux(int k, int m){
    return (k % m) + (k < 0 ? m : 0);
}

int hash1(int k, int i, int m){
    return (hash_aux(k, m) + i) % m;
}

int main(int argc, const char * argv[]) {
    int k, m;

    cin >> k >> m;

    for(int i = 0; i < m; i++) cout << hash1(k, i, m) << " ";

    cout << endl;

    return 0;
}
