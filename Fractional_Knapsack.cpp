#include <iostream>
using namespace std;

struct Item {
    char id[5];
    int weight;
    int value;
    float density;
};

void fractionalKnapsack(Item items[], int n, int W);

int main() {
    // List of items
    Item items[6] = {
        {"i1", 6, 6, 0},
        {"i2", 10, 2, 0},
        {"i3", 3, 1, 0},
        {"i4", 5, 8, 0},
        {"i5", 1, 3, 0},
        {"i6", 3, 5, 0}
    };

    int n = 6;      // Number of items
    int W = 16;     // Max weight limit of the knapsack

    // Compute density = value / weight
    for (int i = 0; i < n; i++) {
        items[i].density = float(items[i].value) / items[i].weight;
    }

    // Sort items by density in descending order using bubble sort
    Item temp;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (items[j + 1].density > items[j].density) {
                temp = items[j + 1];
                items[j + 1] = items[j];
                items[j] = temp;
            }
        }
    }

    // Solve the fractional knapsack problem
    fractionalKnapsack(items, n, W);

    return 0;
}

void fractionalKnapsack(Item items[], int n, int W) {
    float totalWeight = 0, totalBenefit = 0;

    for (int i = 0; i < n; i++) {
        if (items[i].weight + totalWeight <= W) {
            // Take the full item
            totalWeight += items[i].weight;
            totalBenefit += items[i].value;

            cout << "Selected Item: " << items[i].id
                 << "\tWeight: " << items[i].weight
                 << "\tValue: " << items[i].value
                 << "\tTotal Weight: " << totalWeight
                 << "\tTotal Benefit: " << totalBenefit << endl;
        } else {
            // Take a fraction of the item
            int wt = W - totalWeight;
            float value = wt * (float(items[i].value) / items[i].weight);
            totalWeight += wt;
            totalBenefit += value;

            cout << "Selected Item: " << items[i].id
                 << "\tWeight: " << wt
                 << "\tValue: " << value
                 << "\tTotal Weight: " << totalWeight
                 << "\tTotal Benefit: " << totalBenefit << endl;

            break; // Knapsack is full
        }
    }

    // Print final results
    cout << "Total Weight: " << totalWeight << endl;
    cout << "Total Benefit: " << totalBenefit << endl;
}
