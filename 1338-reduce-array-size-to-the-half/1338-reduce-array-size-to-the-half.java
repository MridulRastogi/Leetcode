class Solution 
{
    public int minSetSize(int[] arr) 
    {
        Arrays.sort(arr);
        ArrayList<Integer> freq = new ArrayList<Integer>();
        int l = arr.length, count=1, s=0;
        
        for(int i=0; i<l-1; i++)
        {
            if(arr[i] == arr[i+1])
                count++;
            else
            {
                freq.add(count);
                count = 1;
            }
        }
        if(arr[l-1] == arr[l-2])
            freq.add(count);
        else if(arr[l-1] != arr[l-2])
            freq.add(1);            
        
        Collections.sort(freq, Collections.reverseOrder());
        for(int i=0; i<freq.size(); i++)
        {
            s += freq.get(i);
            if(s >= (l/2))
                return i+1;
        }
        return 0;          
    }
}