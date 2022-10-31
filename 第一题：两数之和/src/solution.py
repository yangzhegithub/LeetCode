# 两数之和

class Solution_1:
    def twoSum(self, nums: list, target: int) -> list:
        n = len(nums)
        for i in range(n):
            for j in range(i + 1, n):
                if nums[i] + nums[j] == target:
                    return [i, j]
        
        return []


class Solution_2:
    def twoSum(self, nums: list, target: int) -> list:
        hashtable = dict()
        for i, num in enumerate(nums):
            if target - num in hashtable:
                return [hashtable[target - num], i]
            hashtable[nums[i]] = i
        return []


if __name__=='__main__':
    nums = [2, 7, 11, 15]
    target = 9
    
    solution_1 = Solution_1()
    solution_2 = Solution_2()
    mm_1 = solution_1.twoSum(nums, target)
    mm_2 = solution_2.twoSum(nums, target)
    
    print(mm_1)
    
    print(mm_2)