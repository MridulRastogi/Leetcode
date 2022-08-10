class Solution {
    public String replaceWords(List<String> dictionary, String sentence) 
    {
        Collections.sort(dictionary, Collections.reverseOrder());
        String []sen = sentence.split("\\s+");
        String s = "", str="";
        for(int i=0; i<sen.length; i++)
        {
            str = sen[i];
            for(String dict:dictionary)
                if(dict.length() <= sen[i].length())
                    if(sen[i].substring(0, dict.length()).equals(dict))
                        str = dict;
            s += str + " ";
        }
        return s.substring(0, s.length()-1);
    }
}
