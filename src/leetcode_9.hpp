/******************************************************************************

  Copyright (C), ysf002@gmail.com 1-22 2020
  leetcode 9

 ******************************************************************************/

#ifndef _LEETCODE_9_
#define _LEETCODE_9_

#include <vector>
#include <string>
#include <iostream>

#include "gtest/gtest.h"

using namespace std;

namespace LEETCODE9 {
	class Solution {
	public:
		bool isPalindrome(int x) {
			if (x < 0)
				return false;
			
			if ( x < 10 && x >= 0)
				return true;
			
			vector<int> nums;
			while (x != 0) {
				auto left = x % 10;
				nums.push_back(left);
				
			    x = x / 10;
			}

			int begin = 0;
			int end = nums.size() - 1;

			while (begin <= end) {
			    if (nums[begin] != nums[end]) {
					return false;
			    }

				begin++;
				end--;
			    	
			}

			return true;
		}
	};

}



TEST(MyTest, Leetcode_9)
{
    LEETCODE9::Solution s;
	EXPECT_TRUE(s.isPalindrome(212));
	EXPECT_TRUE(s.isPalindrome(2112));
	EXPECT_TRUE(s.isPalindrome(9));
	EXPECT_FALSE(s.isPalindrome(10));
	EXPECT_FALSE(s.isPalindrome(1010));
	EXPECT_FALSE(s.isPalindrome(-121));
}



#endif


