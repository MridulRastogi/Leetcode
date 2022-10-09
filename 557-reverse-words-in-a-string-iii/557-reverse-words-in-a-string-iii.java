class Solution 
{
    public String reverseWords(String s) 
    {
        String str[] = s.split(" ");
        String s2 = "";
        for(int i=0; i<str.length; i++)
        {
            StringBuilder input = new StringBuilder(str[i]);
            input.reverse();
            s2 += (i!=str.length-1 ? (input+" ") : input);            
        }
        return s2;
    }
}