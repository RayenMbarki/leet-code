#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
        int a;
        for (auto x:mp) {
            if (x.second==1) {a=x.first;
            break;}
        }
        return a;




    }





};
