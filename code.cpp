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


// max split 


  for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L') count--;
        else if (s[i] == 'R') count++;

        if (count == 0) {
            total++;
        }
    }
    cout << total << endl;

    count = 0;
    start = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L') count--;
        else if (s[i] == 'R') count++;

        if (count == 0) {
            for (int j = start; j <= i; j++) {
                cout << s[j];
            }
            cout << endl;
            start = i + 1;
        }
    }






//string that is equal to "EGYPT" with space.

     int n = s.length();

    for (int i = 0; i < n; ) {
     
        if ( s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T') {
            cout << " ";
            i=i + 5;
        } else {
            cout << s[i];
            i++;
        }
    }

    cout << endl;
    return 0;


    // Fast and efficient sort for any size
#include <algorithm>
sort(s.begin(), s.end());


// plndrm

/*
int main() {
    string s;
    cin >> s;

    bool isPalindrome = true;
    int n = s.length();

    for(int i = 0; i < n/2; i++) {
        if(s[i] != s[n-1- i]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}*/


// word upper lower 


for (int i = 0; i < s.size(); i++) {
        if (s[i] == ',') {
            s[i] = ' ';
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A'; 
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a'; 
        }
    }