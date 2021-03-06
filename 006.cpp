/*Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).
Example Input
Input 1:

[1, 2, 3]


Example Output
Output 1:

[1, 2, 4]
*/


vector<int> Solution::plusOne(vector<int> &A) {
    
    int i;

    i = A.size() - 1;

    if(A[i] < 9){
        A[i]++;
    }
    else{
        A[i] = 0;
        if(i == 0){
            A.insert(A.begin(), 1);
        }
        else{
            A[i-1]++;
        }
        i--;
        while(A[i] >= 10){
            A[i] = 0;
            if(i == 0){
                A.insert(A.begin(), 1);
                break;
            }
            else{
                A[i-1]++;
            }
            i--;
        }
    }

    while(*A.begin() == 0){
        A.erase(A.begin());
    }

    return A;
}
