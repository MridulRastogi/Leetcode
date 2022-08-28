class Solution 
{
    public:    
    int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int posM=0, posP=0, posG=0, pos, finalResult;
        bool metalFound=false, paperFound=false, glassFound=false;
        vector<int> travelTime(3,0), collectionTime(3,0);      
        
        for(int i=garbage.size()-1; i>=0; i--)
        {
            if(garbage[i].find("M") != std::string::npos and metalFound==false)
            {
                posM = i;
                metalFound = true;
            }
            if(garbage[i].find("P") != std::string::npos and paperFound==false)
            {
                posP = i;
                paperFound = true;
            }
            if(garbage[i].find("G") != std::string::npos and glassFound==false)
            {
                posG = i;
                glassFound = true;
            }                
        }
        
        pos = max(posM, max(posG, posP));
        for(int i=0; i<=pos; i++)
        {
            if(i<posM)  
                travelTime[0] += travel[i];
            if(i<=posM)
                for(char ch : garbage[i])
                    if(ch=='M')
                        collectionTime[0]++;
            
            if(i<posP)  
                travelTime[1] += travel[i];
            if(i<=posP)
                for(char ch : garbage[i])
                    if(ch=='P')
                        collectionTime[1]++;
            
            if(i<posG)  
                travelTime[1] += travel[i];
            if(i<=posG)
                for(char ch : garbage[i])
                    if(ch=='G')
                        collectionTime[1]++;
        }
         
        finalResult = accumulate(travelTime.begin(), travelTime.end(), 0) + accumulate(collectionTime.begin(), collectionTime.end(), 0);
        return finalResult;
    }
};