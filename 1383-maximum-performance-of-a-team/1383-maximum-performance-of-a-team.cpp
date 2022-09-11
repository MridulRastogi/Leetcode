class Solution 
{
    public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) 
    {
        long long result = INT_MIN, finalResult, sumOfSpeeds=0;
        vector<pair<int, int>> vec;
        priority_queue<int, vector<int>, greater<int>> minHeap;     // creating a minHeap to store minium element at the top
        
        for(int i=0; i<n; i++)
            vec.push_back(make_pair(efficiency[i], speed[i]));      // pair of vectors to store the efficiency
        sort(vec.rbegin(), vec.rend());                             // sorted vec in descending order with respect to the first element
        
        for(int i=0; i<n; i++)  
        {
            sumOfSpeeds += vec[i].second;                           // 
            minHeap.push(vec[i].second);
            
            if(k < minHeap.size())
            {
                sumOfSpeeds -= minHeap.top();
                minHeap.pop();
            }
            finalResult = sumOfSpeeds*vec[i].first;
            result = max(result, finalResult);
        }
        return result%1000000007;
    }
};

/*
2 10 3 1 5 8
5 4  3 9 7 2

1 2 3 5 8 10
9 5 3 7 2 4

*/