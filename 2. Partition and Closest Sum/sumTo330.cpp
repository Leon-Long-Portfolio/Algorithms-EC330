#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int sumTo330(vector <int> nums)
{
    int temp, result = 2147483647;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++)
    {
        int second_number = i + 1;
        int third_number = nums.size() - 1;

        while (second_number < third_number)
        {
            temp = nums[i] + nums[second_number] + nums[third_number];

            if (temp == 330)
            {
                result = temp;

                return result;
            }

            if (abs(330 - temp) < abs(330 - result))
            {
                result = temp;
            }

            if (temp > 330)
            {
                third_number--;
            }
            else
            {
                second_number++;
            }

            if (abs(330 - temp) == abs(330 - result))
            {
                if (result - temp > 0)
                {
                    result = temp;
                }
            }
        }
    }

    return result;
}

int main() {
    vector<vector<int>> testCases = {
        {1, 2, 3, 4, 5, 6},
        {100, 120, 110, 80, 70},
        {330, 0, -330, 165, -165},
        {25, 305, 5, 45, 250, 20}
    };

    for (const auto& testCase : testCases) {
        cout << "Input: ";
        for (int num : testCase) cout << num << " ";
        cout << "\nClosest sum to 330: " << sumTo330(testCase) << "\n\n";
    }

    return 0;
}