class Solution 
{
    public int minimumRounds(int[] tasks) 
    {
        int result = 0;
        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();

        for(int i=0; i<tasks.length; i++)
        {
            if(mp.containsKey(tasks[i]) == false)
                mp.put(tasks[i], 1);
            else
                mp.put(tasks[i], mp.get(tasks[i])+1);
        }
        
        for(int first : mp.keySet())
        {
            int second = mp.get(first);
            if(second == 1)
                return -1;
            else if(second%3==0)
                result += second/3;
            else 
                result += (second/3) + 1;
        }
        return result;
    }
}

// mp.putIfAbsent(tasks[i], 1);