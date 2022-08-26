class Solution {
    public boolean reorderedPowerOf2(int n) 
    {
        ArrayList<String> vec = new ArrayList<String>();
        String s = Integer.toString(n);
        int res=1, c=1;
        int maxi = (int)Math.pow(10, s.length());
        
        while(res <= maxi)
        {
            vec.add(Integer.toString(res));  
            res = (int)Math.pow(2, c);
            c++;
        }
        
        HashMap<Character, Integer> sm = new HashMap<Character, Integer>();
        for(int i=0; i<s.length(); i++) 
        {
            if(sm.containsKey(s.charAt(i)))
                sm.put(s.charAt(i), sm.get(s.charAt(i)) + 1);
            else
                sm.put(s.charAt(i), 1);
        }
        
        for(int i=0; i<vec.size(); i++)
        {
            String str = vec.get(i);
            HashMap<Character, Integer> vm = new HashMap<Character, Integer>();
            for(int j=0; j<str.length(); j++) 
            {
                if(vm.containsKey(str.charAt(j)))
                    vm.put(str.charAt(j), vm.get(str.charAt(j)) + 1);
                else
                    vm.put(str.charAt(j), 1);
            }   
            if(s.length() == str.length())
            {
                if(vm.equals(sm))
                {
                    return true;
                }
            }
        }
        return false;  
    }
}