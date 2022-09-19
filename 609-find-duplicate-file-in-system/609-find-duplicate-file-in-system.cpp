class Solution 
{
    public:
    vector<vector<string>> findDuplicate(vector<string>& paths)
    {
        unordered_map<string, vector<string>> mp;
        for (auto it = paths.begin(); it!=paths.end(); it++)
        {
            stringstream s(*it);
            string root, file_name, data, file_path;    
            int start, end;
            getline(s, root, ' ');                  // fetching the input from s until there is a space to obtain the path in "root"
            while(getline(s, file_name, ' '))       // fetching the input from s until there is a space to obtain the file name 
            {
                start     = file_name.find('(');
                end       = file_name.find(')');
                data      = file_name.substr(start+1 , end-start-1);
                file_path = root + '/' + file_name.substr(0, start);
                mp[data].push_back(file_path);
            }
        }
        vector<vector<string>> res;
        for (auto it = mp.begin(); it != mp.end(); it++)
            if ((it->second).size() > 1)
                res.push_back(it->second);
        return res;
    }
};