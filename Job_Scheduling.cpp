#include <iostream>
using namespace std;

// Structure to represent a job
struct Job {
    int id;       // Job ID
    int deadline; // Deadline for the job
    int profit;   // Profit if the job is completed
};

// Function to sort jobs in descending order of profit using Bubble Sort
void sortJobs(Job jobs[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (jobs[j].profit < jobs[j + 1].profit) {
                // Swap jobs[j] and jobs[j + 1]
                Job temp = jobs[j];
                jobs[j] = jobs[j + 1];
                jobs[j + 1] = temp;
            }
        }
    }
}

// Function to find the maximum deadline in the jobs array
int findMaxDeadline(Job jobs[], int n) {
    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        if (jobs[i].deadline > maxDeadline) {
            maxDeadline = jobs[i].deadline;
        }
    }
    return maxDeadline;
}

// Function to schedule jobs to maximize profit
void jobScheduling(Job jobs[], int n) {
    // Step 1: Sort jobs by profit in descending order
    sortJobs(jobs, n);

    // Step 2: Find the maximum deadline
    int maxDeadline = findMaxDeadline(jobs, n);

    // Step 3: Create a schedule array to keep track of free time slots
    int schedule[maxDeadline]; // 0 means the slot is free
    for (int i = 0; i < maxDeadline; i++) {
        schedule[i] = -1; // -1 indicates the slot is empty
    }

    int totalProfit = 0; // Total profit
    int jobsCompleted = 0; // Count of jobs completed

    // Step 4: Assign jobs to available slots
    for (int i = 0; i < n; i++) {
        // Try to find a free slot for this job (starting from its deadline)
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            if (schedule[j] == -1) {
                schedule[j] = jobs[i].id; // Assign job to this slot
                totalProfit += jobs[i].profit; // Add profit
                jobsCompleted++; // Increment job count
                break; // Move to the next job
            }
        }
    }

    // Step 5: Print the scheduled jobs and total profit
    cout << "Scheduled Jobs: ";
    for (int i = 0; i < maxDeadline; i++) {
        if (schedule[i] != -1) {
            cout << "J" << schedule[i] << " ";
        }
    }
    cout << endl;
    cout << "Total Profit: " << totalProfit << endl;
}

int main() {
    int n;

    cout << "Enter the number of jobs: ";
    cin >> n;

    Job jobs[n];
    cout << "Enter job details (ID, Deadline, Profit):\n";
    for (int i = 0; i < n; i++) {
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    }

    jobScheduling(jobs, n);

    return 0;
}
