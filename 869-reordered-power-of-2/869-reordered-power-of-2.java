class Solution 
{
    public void frequency(HashMap<Character, Integer> m, String s)
    {
       for(char ch : s.toCharArray()) 
            m.put(ch, (m.containsKey(ch) ? m.get(ch)+1 : 1));
    }
    public boolean reorderedPowerOf2(int n) 
    {
        ArrayList<String> vec = new ArrayList<String>();
        String s = Integer.toString(n);
        int res=1, c=1, maxi = (int)Math.pow(10, s.length());
        
        while(res <= maxi)
        {
            vec.add(Integer.toString(res));  
            res = (int)Math.pow(2, c++);
        }
        
        HashMap<Character, Integer> sm = new HashMap<Character, Integer>();
        frequency(sm, s);
        
        for(String str : vec)
        {
            if(s.length() == str.length())
            {
                HashMap<Character, Integer> vm = new HashMap<Character, Integer>();
                frequency(vm, str); 
                if(vm.equals(sm))
                    return true;
            }
        }
        return false;  
    }
}