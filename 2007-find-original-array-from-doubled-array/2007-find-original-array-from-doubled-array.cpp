class Solution 
{
    public:
    
    bool exit = false;
    int noz=-1;
    
    void zeroes(vector<int>& changed)
    {
        int freq = count(changed.begin(), changed.end(), 0);
        if(freq%2==1)
            exit = true;
        else
            noz = freq/2;
        remove(changed.begin(), changed.end(), 0);
    }
    
    vector<int> findOriginalArray(vector<int>& changed) 
    {
        //zeroes(changed);
        int ol = changed.size();
        vector<int> vec;
        if(ol&1)
            return vec;
        unordered_map<int, int> m;
        sort(changed.begin(), changed.end());
        
        // if(exit == true)
        //     return vec;
        // else if(noz>0)
        // {
        //     while(noz--)
        //     {
        //         vec.push_back(0);
        //     }
        // }
        for(int i:changed)
            m[i]++;
        for(int i=0; i<changed.size(); i++)
        {
            if(m[changed[i]] == 0)
                continue;
            if(m[changed[i]*2] == 0)
            {
                vec.clear();
                return vec;
            }
            vec.push_back(changed[i]);
            m[changed[i]]--;
            m[changed[i]*2]--;
        }
        return vec;
    }
};

/*
1 2 3 4 6 8     1 2
3 4 6 8         3 6
4 8             4 8
*/