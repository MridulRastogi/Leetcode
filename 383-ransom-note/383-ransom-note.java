class Solution {
    public boolean canConstruct(String ransomNote, String magazine) 
    {
        int[] r = new int[26];
        int[] m = new int[26];
        Arrays.fill(r, 0);
        Arrays.fill(m, 0);
        for(int i=0; i<ransomNote.length(); i++)
            r[ransomNote.charAt(i)-'0'-49]++;
        for(int i=0; i<magazine.length(); i++)
            m[magazine.charAt(i)-'0'-49]++;
        for(int i=0; i<26; i++)
            if(m[i]<r[i] && r[i]>0)
                return false;
        return true;
    }
}