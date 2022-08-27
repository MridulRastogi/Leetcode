class Solution {
public:
    int getSum(int a, int b) {
        vector<int> vec;
        vec.push_back(a);
        vec.push_back(b);
        return accumulate(vec.begin(), vec.end(), 0);
    }
};