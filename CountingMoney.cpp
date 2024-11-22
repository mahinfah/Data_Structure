#include <iostream>
using namespace std;

void findMinCoins(int V) {
    // Array of Bangladeshi currency denominations
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int n = sizeof(denominations) / sizeof(denominations[0]);

    cout << "Minimum coins/notes required for " << V << " Taka:\n";

    int count = 0;

    for (int i = 0; i < n; i++) {
        // Use as many of the current denomination as possible
        while (V >= denominations[i]) {
            V -= denominations[i];
            count++;
            cout << denominations[i] << " ";
        }
        // If value becomes 0, break out of the loop
        if (V == 0) break;
    }

    cout << "\nTotal coins/notes used: " << count << endl;
}

int main() {
    int V;

    cout << "Enter the amount (Taka): ";
    cin >> V;

    findMinCoins(V);

    return 0;
}
