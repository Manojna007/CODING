/*
You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array [Basically you have to sort the array]. Traverse array only once. 

Problem Constraints
1<=|A|<=1e6

Input Format
First argument is array of integers consisting of 0's and 1's only.

Output Format
Return a sorted array.

Example Input
Input 1:
a=[0 1 0]
Example Output
Ouput 1:
[0 0 1]

*/

vector<int> Solution::solve(vector<int> &A) {
    int i=-1,j=0;
 while(j<A.size())
{
  if(A[j]==0)
  {
    i++;
    swap(A[j],A[i]);
  }
 j++;
}
return A;
}
