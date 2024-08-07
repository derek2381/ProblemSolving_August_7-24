// problem link
// https://leetcode.com/problems/merge-intervals/description/


class Solution {
public:
    // static bool comp(vector<int> a, vector<int> b){
    //     return a[0] < b[0];
    // }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());

        int start = intervals[0][0];
        int end = intervals[0][1];
        int n = intervals.size();

        for(int i = 1;i < n;i++){
            if(intervals[i][0] <= end){
                end = max(intervals[i][1], end);
            }else{
                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);

                start = intervals[i][0];
                end = intervals[i][1];
                res.push_back(temp);
            }
        }

        vector<int> temp;
        temp.push_back(start);
        temp.push_back(end);

        res.push_back(temp);


        return res;
    }
};