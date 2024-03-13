#include <bits/stdc++.h>
#include <queue>
using namespace std;

/*
 * @lc app=leetcode id=860 lang=cpp
 *
 * [860] Lemonade Change
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ls[25];

        for (auto bill : bills) {
            if (bill == 10) {
                if (ls[5] == 0) return false;
                else  ls[5] --;
            }
            else if (bill == 20) {
                if (ls[5] == 0) return false;
                else {
                    if (ls[10] != 0) { ls[5] --; ls[10] --; }
                    else if (ls[5] < 3) return false;
                    else ls[5] -= 3;
                }
            }

            ls[bill] ++;
        }

        return true;
    }
};
// @lc code=end

