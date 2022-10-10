class Solution 
{
    public int heightChecker(int[] heights) 
    {
        int []ar = heights.clone();
        Arrays.sort(ar);
        int counter=0;
        for(int i=0; i<heights.length; i++)
            if(heights[i] != ar[i])
                counter++;
        return counter;
    }
}