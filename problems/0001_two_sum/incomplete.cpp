#include <iostream>
#include <vector>
#include <unordered_set>  // hash table O(1)

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    //
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    for (int x : s)
    {
      cout << x << " ";
    }
  }


};


int main()
{
  Solution s1;
  vector<int> nums = {2,7,11,15};
  int target = 9;
  s1.twoSum(nums, target);
  return 0;
}



