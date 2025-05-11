#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> adicaoSub;
    stack<int> dividMult;
    int n;
    cin >> n;

    string nums;
    getchar();
    getline(cin, nums);

    for (int i = 4; i < nums.size(); i += 6)
    {

        if (nums[i] == '*' || nums[i] == '/')
        {
            dividMult.push(i);
        }
        else
        {
            adicaoSub.push(i);
        }
    }

    int result = 0;
    vector<pair<int, int>> res;
    int num1, denom1, num2, denom2;
    int newNum, newDemun;
    while (!dividMult.empty())
    {
        int op = dividMult.top();

        num1 = nums[op - 4] - 48;
        denom1 = nums[op - 2] - 48;
        num2 = nums[op + 2] - 48;
        denom2 = nums[op + 4] - 48;
        if (nums[op] == '*')
        {
            newNum = num1 * num2;
            newDemun = denom1 * denom2;
        }
        else
        {
            newNum = num1 * denom2;
            newDemun = denom1 * num2;
        }
        nums.erase(op - 4, 6);
        nums.push_back(newNum + "+" + newDemun);
        dividMult.pop();
    }

    cout << nums << endl;
    int mmc;

    while (!adicaoSub.empty())
    {
        int op = dividMult.top();

        num1 = nums[op - 4] - 48;
        denom1 = nums[op - 2] - 48;
        num2 = nums[op + 2] - 48;
        denom2 = nums[op + 4] - 48;

        mmc = denom1 * denom2;
        newNum = (mmc / denom1) * num1;
        int newNum2 = (mmc / denom2) * num2;
        if (nums[op] == '+')
        {
            newNum += newNum2;
        }
        else
        {
            newNum -= newNum2;
        }
        newDemun = mmc;
        res.push_back({newDemun, newDemun});
        dividMult.pop();
    }
    cout << newNum << "/" << newDemun << endl;
}