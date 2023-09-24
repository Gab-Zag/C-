#include <iostream>
#include <cmath>

using namespace std;

int hash_aux(int k, int m){
    return (k < 0 ? (k % m) + m : (k % m));
}

int main(int argc, const char * argv[]) {
    int k, m;

    cin >> k >> m;

    while(k != 0 && m != 0){
        cout << hash_aux(k, m) << endl;
        cin >> k >> m;
    }

    return 0;
}
