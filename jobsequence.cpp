#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Job {
    char id;
    int deadline;
    int profit;
};
bool compareJobs(const Job& a, const Job& b) {
    return (a.profit > b.profit);
}
int findMaxDeadline(const vector<Job>& jobs) {
    int maxDeadline = 0;
    for (const Job& job : jobs) {
        if (job.deadline > maxDeadline) {
            maxDeadline = job.deadline;
        }
    }
    return maxDeadline;
}
void jobSequencing(vector<Job>& jobs) {
    sort(jobs.begin(), jobs.end(), compareJobs);
    int maxDeadline = findMaxDeadline(jobs);
    vector<char> result(maxDeadline, ' ');
    for (const Job& job : jobs) {
        for (int j = job.deadline - 1; j >= 0; j--) {
            if (result[j] == ' ') {
                result[j] = job.id;
                break;
            }
        }
    }
    int totalProfit = 0;
    cout << "Scheduled jobs: ";
    for (int i = 0; i < maxDeadline; i++) {
        if (result[i] != ' ') {
            cout << result[i] << " ";
            for (const Job& job : jobs) {
                if (job.id == result[i]) {
                    totalProfit += job.profit;
                    break;
                }
            }
        }
    }
    cout << "\nTotal profit: " << totalProfit << endl;
}
int main() {
    int n;
    cout << "Enter the number of jobs: ";
    cin >> n;
    vector<Job> jobs(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter job ID, deadline, and profit for job " << i + 1 << ": ";
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    }
    jobSequencing(jobs);
    return 0;
}
