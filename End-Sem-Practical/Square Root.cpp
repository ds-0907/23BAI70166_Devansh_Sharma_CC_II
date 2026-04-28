class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int low = 1;
        int high = n;
        int ans = 0;
        if (n == 0 || n == 1) return n;
        while (low <= high){
            int mid = low +(high-low) / 2;
            if (mid*mid == n) return mid;
            else if (mid*mid < n){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};
