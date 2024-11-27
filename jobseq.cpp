#include <iostream>
#include <vector>
#include <algorithm>

struct Job
{
    int id;
    int deadline;
    int profit;
};
bool compareJobs(Job a, Job b)
{
    return a.profit > b.profit;
}

void jobSequencing(std::vector<Job> &jobs, int numJobs)
{
    std::sort(jobs.begin(), jobs.end(), compareJobs);
    int maxDeadline = 0;
    for (int i = 0; i < numJobs; i++)
    {
        if (jobs[i].deadline > maxDeadline)
        {
            maxDeadline = jobs[i].deadline;
        }
    }
    std::vector<int> result(maxDeadline, -1);
    int maxProfit = 0;
    for (int i = 0; i < numJobs; i++)
    {
        for (int j = std::min(maxDeadline, jobs[i].deadline) - 1; j >= 0; j--)
        {
            if (result[j] == -1)
            {
                result[j] = i;
                maxProfit += jobs[i].profit;
                break;
            }
        }
    }
    std::cout << "Scheduled jobs for maximum profit:\n";
    for (int i = 0; i < maxDeadline; i++)
    {
        if (result[i] != -1)
        {
            std::cout << "Job ID: " << jobs[result[i]].id << " (Profit: " << jobs[result[i]].profit << ")\n";
        }
    }
    std::cout << "Total Profit: " << maxProfit << "\n";
}

int main()
{
    int numJobs;
    std::cout << "Enter the number of jobs: ";
    std::cin >> numJobs;

    std::vector<Job> jobs(numJobs);
    for (int i = 0; i < numJobs; i++)
    {
        std::cout << "Enter Job ID, Deadline, and Profit for job " << i + 1 << ": ";
        std::cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    }

    jobSequencing(jobs, numJobs);
    return 0;
}
