class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) 
    {
        if(arr.size()==1)
            return 1;
        int coe = 1, max_score = 0;
        bool odd = true, even = false;
        
        for(int i=0; i<arr.size()-1; i++)
        {
            if     (i%2==0 and arr[i]<arr[i+1] and odd==true  and even==false)
            {
                coe++;
                even = true;
                odd = false;
            }
            else if(i%2==1 and arr[i]>arr[i+1] and odd==false and even==true)
            {
                coe++;
                even = false;
                odd = true;
            }
            else
            {
                odd  = (i+1)%2==0 ? true : false;
                even = odd==true ? false : true;
                max_score = max(max_score, coe);
                coe = 1;
            }
            max_score = max(max_score, coe);
        }
        
        odd = true;
        even = false;
        coe = 1;
        
        for(int i=0; i<arr.size()-1; i++)
        {
            if     (i%2==0 and arr[i]>arr[i+1] and odd==true  and even==false)
            {
                coe++;
                even = true;
                odd  = false;
            }
            else if(i%2==1 and arr[i]<arr[i+1] and odd==false and even==true)
            {
                coe++;
                even = false;
                odd  = true;
            }
            else
            {
                odd  = (i+1)%2==0 ? true : false;
                even = odd==true ? false : true;
                max_score = max(max_score, coe);
                coe = 1;
            }
            max_score = max(max_score, coe);
        }
        
        return max_score;
    }
};