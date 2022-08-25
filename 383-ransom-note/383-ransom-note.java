class Solution {
    public boolean canConstruct(String ransomNote, String magazine) 
    {
        int[] r = new int[26];
        int[] m = new int[26];
        
        int rl = ransomNote.length();
        int ml = magazine.length();
        int maxi = Math.max(ransomNote.length(), magazine.length());
        for(int i=0; i<maxi; i++)
        {
            if(i<rl)
                r[ransomNote.charAt(i)-'0'-49]++;
            if(i<ml)
                m[magazine.charAt(i)-'0'-49]++;    
        }
        for(int i=0; i<26; i++)
            if(m[i]<r[i])
                return false;
        return true;
    }
}