class Solution 
{  
    public int findMinArrowShots(int[][] points) 
    {
        Arrays.sort(points, new Comparator<int[]>() {
                            public int compare(int[] x, int[] y) 
                            {
                                return (x[1] > y[1] ? 1 : -1);
                            }
                        });
        int val = points[0][1], result=1;
        for(int i=0; i<points.length; i++)
        {
            if(val < points[i][0])
            {
                result++;
                val = points[i][1];
            }
        }
        return result;
    }
}