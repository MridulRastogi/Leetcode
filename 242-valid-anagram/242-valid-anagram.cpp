class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int ls = s.length(), lt = t.length();
        if(ls==lt)
        {
            char sch[ls+1], tch[lt+1];
            strcpy(sch, s.c_str());
            strcpy(tch, t.c_str());
            sort(sch, sch+ls+1);
            sort(tch, tch+lt+1);
            for(int i=0; i<ls+1; i++)
                if(sch[i] != tch[i])
                    return false;
            return true;
        }
        else 
            return false;
    }
};