//https://www.interviewbit.com/problems/diffk/#status[]=unsolved&topics[]=two-pointers

int Solution::diffPossible(vector<int> &A, int B) {
    int l= 0, r= 1;
    while (l< A.size() && r< A.size()) {
        if (l== r) {
            r++;
            continue;
        }
        int d = A[r] - A[l];
        if (d == B) {
            return 1;
        } else if (d < B) {
            r++;
        } else {
            l++;
        }
    }
    return 0;
}
 