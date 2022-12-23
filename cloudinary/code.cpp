#include <bits/stdc++.h>
using namespace std;
int isvalid(vector<int> &vec, int k)
{
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += max(0, vec[i] - k);
    }
    return sum;
}
int main()
{
    int input1;
    cin >> input1;
    vector<int> input2;
    for (int i = 0; i < input1; i++)
    {
        int c;
        cin >> c;
        input2.push_back(c);
    }
    int input3;
    cin >> input3;
    sort(input2.begin(), input2.end());
    int l = 0, r = input2.back();
    int ans = INT_MAX;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isvalid(input2, mid) <= input3)
        {
            r = mid - 1;
            ans = min(ans, mid);
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}