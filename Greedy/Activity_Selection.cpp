#include<iostream>
using namespace std;

// Structure to hold activity details
struct Activity {
    int startTime, finishTime;
};

// Function to swap two Activity elements
void SWAP(struct Activity *p, struct Activity *q) {
    struct Activity t;
    t = *p;
    *p = *q;
    *q = t;
}

// Bubble sort to sort activities by finish time
void bubbleSort(struct Activity a[], int n) {
    for (int pass = 1; pass < n; pass++) {
        for (int i = 0; i < n - pass; i++) {
            if (a[i].finishTime > a[i + 1].finishTime) {
                SWAP(&a[i], &a[i + 1]);
            }
        }
    }
}

// Function to perform Activity Selection
void activitySelection(struct Activity a[], int n) {
    int i = 0;
    cout << a[0].startTime << " " << a[0].finishTime << endl;

    // Iterate through remaining activities
    for (int j = 1; j < n; j++) {
        if (a[j].startTime >= a[i].finishTime) {
            cout << a[j].startTime << " " << a[j].finishTime << endl;
            i = j;
        }
    }
}

// Main function
int main() {
    int n;

    cout << "Enter Number of Activities: ";
    cin >> n;

    struct Activity act[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter start time: ";
        cin >> act[i].startTime;
        cout << "Enter finish time: ";
        cin >> act[i].finishTime;
    }

    // Sort activities by their finish time
    bubbleSort(act, n);

    cout << "Selected Activities: " << endl;
    activitySelection(act, n);

    return 0;
}
