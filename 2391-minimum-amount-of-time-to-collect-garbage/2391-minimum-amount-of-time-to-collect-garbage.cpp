class Solution 
{
    public:
    int getTime(vector<string>& garbage, vector<int>& travel, char toFind, int pos)
    {
        int travelTime=0, collectionTime=0;
        for(int i=0; i<=pos; i++)
        {
            if(i!=pos)  
                travelTime += travel[i];
            for(char ch : garbage[i])
                if(ch==toFind)
                    collectionTime++;
        }
        return (travelTime + collectionTime);
    }
    
    int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int posM, posP, posG, metalCollect, paperCollect, glassCollect;
        bool metalFound=false, paperFound=false, glassFound=false;
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
        
        metalCollect = (metalFound==true ? getTime(garbage, travel, 'M', posM) : 0);
        paperCollect = (paperFound==true ? getTime(garbage, travel, 'P', posP) : 0);
        glassCollect = (glassFound==true ? getTime(garbage, travel, 'G', posG) : 0);
        
        int finalResult = metalCollect + paperCollect + glassCollect;
        return finalResult;
    }
};