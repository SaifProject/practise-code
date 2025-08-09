#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int runs[6000];  // max size 6*n, n max 1000, so 6000 size ঠিক আছে

    for (int i = 0; i < 6 * n; ++i)
        cin >> runs[i];

    int tamim = 0, shakib = 0;
    int striker = 0; // 0 = Tamim, 1 = Shakib

    for (int i = 0; i < 6 * n; ++i) {
        int run = runs[i];

        if (striker == 0)
            tamim += run;
        else
            shakib += run;

        if (run % 2 == 1)
            striker ^= 1; // strike change

        if ((i + 1) % 6 == 0) // over finished
            striker ^= 1; // strike change
    }

    if (shakib >= tamim)
        cout << "Happy :)" << endl;
    else
        cout << "Sad :(" << endl;

    cout << tamim << " " << shakib << endl;

    return 0;
}