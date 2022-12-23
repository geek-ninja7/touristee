#include <bits/stdc++.h>
using namespace std;
// int isvalid(vector<int> &vec, int k)
// {
//     int sum = 0;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         sum += max(0, vec[i] - k);
//     }
//     return sum;
// }
int main()
{
    int input1;
    cin >> input1;
    vector<vector<int>>vec(input1,vector<int>(2,0));
    for(int i=0;i<input1;i++){
        for(int j=0;j<2;j++){
            vec[i][j]= input2[i][j];
        }
    }
    for (int i = 0; i < input1; i++)
    {
        int c, d;
        cin >> c >> d;
        input2.push_back({c, d});
    }
    sort(vec.begin(), vec.end());
    vector<vector<int>> m;
    vector<int> p = vec[0];

    for (int i = 1; i < vec.size(); i++)
    {
        if (p[1] >= vec[i][0])
        {
            if (p[1] < vec[i][1])
            {
                p[1] = vec[i][1];
            }
        }
        else
        {
            m.push_back(p);
            p = vec[i];
        }
    }
    int ans = 0;
    m.push_back(p);
    for (int i = 0; i < m.size(); i++)
    {
        ans += abs(m[i][0] - m[i][1]);
    }
    cout << ans << endl;
    return 0;
    // int l= a[0][0],r= a[0][1];
    // for(int i=1;i<a.size();i++){
    //     if(a[i][0] <= l)

    // }
}