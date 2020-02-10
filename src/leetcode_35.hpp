/******************************************************************************

  Copyright (C), ysf002@gmail.com 1-24 2020
  leetcode 35
 ******************************************************************************/

#ifndef _LEETCODE_35_
#define _LEETCODE_35_
 
#include <vector>
// #include <string>
// #include <iostream>
 
#include "gtest/gtest.h"
 
using namespace std;
 
namespace LEETCODE35 {
	class Solution {
	public:
    int searchInsert(vector<int>& nums, int target) {
		int begin = 0;
		int end = nums.size() - 1;

		if (end < 0)
			return 0;

		while (begin < end) {
		    int mid = (begin + end) / 2;

			if (nums[mid] == target)
				return mid;

			if (nums[mid] < target) {
				if (begin == mid)
					begin = mid + 1;
				else
					begin = mid;
			}
			else {
				if (end == mid)
					end = mid - 1;
				else
			    	end = mid;
			}
				
		}

		if (begin == end) {
			if (nums[begin] == target)
				return begin;
			else if (nums[begin] < target)
				return begin + 1;
			else
				return begin;
		    
		}
			
		return 0;
			
        
    }
	
	};
 
 }
 
 
 
 TEST(MyTest, Leetcode_35)
 {
	 LEETCODE35::Solution s;

	 vector<int> testVec = {1,3,5,6};

	 auto result = s.searchInsert(testVec,5);
	 EXPECT_EQ(2, result);


	 result = s.searchInsert(testVec,2);
	 EXPECT_EQ(1, result);


	 result = s.searchInsert(testVec,7);
	 EXPECT_EQ(4, result);


	 result = s.searchInsert(testVec,0);
	 EXPECT_EQ(0, result);
	 
 }
 
 
 
#endif

 
