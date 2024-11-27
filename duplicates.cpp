#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ifstream inputFile("numbers.txt");

    if (!inputFile)
    {
        cout << "Unable to open file" << endl;
        return 1;
    }

    vector<int> numbers;
    int number;
    while (inputFile >> number)
    {
        numbers.push_back(number);
    }
    inputFile.close();
    if (numbers.empty())
    {
        cout << "The file is empty." << endl;
        return 1;
    }
    sort(numbers.begin(), numbers.end());
    int duplicatesCount = 0;
    int mostFrequent = numbers[0];
    int maxFrequency = 1;
    int currentFrequency = 1;

    for (size_t i = 1; i < numbers.size(); ++i)
    {
        if (numbers[i] == numbers[i - 1])
        {
            currentFrequency++;
            if (currentFrequency == 2)
            {
                duplicatesCount++;
            }
        }
        else
        {
            if (currentFrequency > maxFrequency)
            {
                maxFrequency = currentFrequency;
                mostFrequent = numbers[i - 1];
            }
            currentFrequency = 1;
        }
    }
    if (currentFrequency > maxFrequency)
    {
        maxFrequency = currentFrequency;
        mostFrequent = numbers[numbers.size() - 1];
    }
    cout << "Number of duplicates: " << duplicatesCount << endl;
    cout << "Most frequently occurred element: " << mostFrequent << endl;

    return 0;
}
