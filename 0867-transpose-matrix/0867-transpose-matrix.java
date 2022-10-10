class Solution 
{
    public int[][] transpose(int[][] matrix) 
    {
        int ar[][] = new int[matrix[0].length][matrix.length];
        for(int i=0; i<matrix.length; i++)
            for(int j=0; j<matrix[i].length; j++)
                ar[j][i] = matrix[i][j];
        return ar;
    }
}