#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
typedef unordered_map<int , int> hMap;
/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
    hMap hm;  // creating a hashmap here
    int cnt = 0;
    for(auto e: ar)
    {
        try {
        hm.at(e) += 1; // if key exists, increment the value
        } catch (const out_of_range &er) {
            hm[e] = 1;  // if key does not exist, allocate memory and make value 1 
        }
    }
    for(auto e: ar)
    {
        if(hm.at(e))  // if value is nonzero, iterate
        {
            cnt += hm[e] % 2 ? hm[e]/2 : (hm[e]+1)/2;  // if value is even, then divide value by 2; if value is odd, then divide by 2 and take ceiling
            hm[e] = 0;  // make value 0
        }
    }
        return cnt;
}

int main()
{
    vector<int> ar = {4, 5, 5, 5 ,6, 6, 4, 1, 4, 4, 3 ,6, 6 ,3, 6, 1 ,4 ,5, 5, 5};
    cout << sockMerchant(20, ar);
    return 0;
}