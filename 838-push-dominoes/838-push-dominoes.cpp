class Solution 
{
    public:
    void ExecuteRL(string& dominoes, int left, int right)
    {
        if(right-left <= 1)
            return;
        while(left<right)
        {
            dominoes[left]  = 'R';
            dominoes[right] = 'L';
            left++;
            right--;
        }
    }

    void ExecuteLL(string& dominoes, int left, int right)
    {
        for(int i=right; i>=left; i--)
            dominoes[i] = 'L';
    }

    void ExecuteRR(string& dominoes, int left, int right)
    {
        for(int i=left; i<=right; i++)
            dominoes[i] = 'R';
    }

    string pushDominoes(string dominoes)
    {
        int l = dominoes.size();
        bool flag;
        if(l==1)
            return dominoes;

        flag = true;            
        for(int i=0; i<l; i++)              // LEFT TO RIGHT MOVEMENT FOR L
        {
            if(dominoes[i] == 'L')
            {
                for(int j=i; j>=0; j--)
                    dominoes[j] = 'L';
                flag = false;
            }
            else if(dominoes[i] == 'R' or flag == false)
                break;
        }

        flag = true;
        for(int i=l-1; i>=0 and flag==true; i--)    // RIGHT TO LEFT MOVEMENT FOR R
        {
            if(dominoes[i] == 'R')
            {
                for(int j=i; j<l; j++)
                    dominoes[j] = 'R';
                flag = false;
            }
            else if(dominoes[i] == 'L' or flag == false)
                break;
        }

        vector<pair<int, int>> v;
        int i=0, j;
        while(i<l-1)                    // FOR CONSECUTIVE LETTER'S INDEXES
        {
            if(dominoes[i] == '.')
                i++;
            else
            {
                j = i+1;
                while(j<l)
                {
                    if(dominoes[j]=='L' or dominoes[j]=='R')
                        break;
                    else
                        j++;
                }
                if(dominoes[j]=='L' or dominoes[j]=='R')
                    v.push_back(make_pair(i,j));
                i = j;
            }
        }

        for(int i=0; i<v.size(); i++)   
        {
            int left = v[i].first;
            int right= v[i].second;
            if(dominoes[left] == 'L' and dominoes[right] == 'R')
                continue;
            if(dominoes[left] == 'R' and dominoes[right] == 'L')
                ExecuteRL(dominoes, left, right);
            else if(dominoes[left] == 'L' and dominoes[right] == 'L')
                ExecuteLL(dominoes, left, right);
            else if(dominoes[left] == 'R' and dominoes[right] == 'R')
                ExecuteRR(dominoes, left, right);
        }

        return dominoes;
    }
};