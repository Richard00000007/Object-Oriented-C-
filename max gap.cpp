#include<iostream>
using namespace std;
typedef long long int lli;
class Solution {
   public:
   int maximumGap(vector<int>& nums) {
      lli minVal = INT_MAX;
      lli maxVal = INT_MIN;
      int n = nums.size();
      if(n < 2) return 0;
      for(int i = 0; i < n; i++){
         minVal = min((lli)nums[i], minVal);
         maxVal = max((lli)nums[i], maxVal);
      }
      int gap = ceil((double)(maxVal - minVal) / (double)(n - 1));
      vector <int> bucketMax(n - 1, INT_MIN);
      vector <int> bucketMin(n - 1, INT_MAX);
      for(int i = 0; i < n; i++){
         int x = nums[i];
         if(x == minVal || x == maxVal) continue;
         int idx = (nums[i] - minVal) / gap;
         bucketMax[idx] = max(bucketMax[idx], nums[i]);
         bucketMin[idx] = min(bucketMin[idx], nums[i]);
      }
      lli ret = 0;
      lli prev = minVal;
      for(int i = 0; i < n - 1; i++){
         if(bucketMax[i] == INT_MIN && bucketMin[i] == INT_MAX) continue;
         ret = max(ret, bucketMin[i] - prev);
         prev = bucketMax[i];
      }
      return max(ret, maxVal - prev);
   }
};
main(){
   Solution ob;
   vector<int> v = {12,3,9,1,17};
   cout << (ob.maximumGap(v));
}
