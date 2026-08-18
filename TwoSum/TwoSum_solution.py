# Example (standard)
arr1 = [2,7,11,15]
t1 = 9

# Example (custom)
arr2 = [3,46,4,2,12,2,32]
t2 = 50

#standard leetcode formatted Answer

class solution:
    def twosum(self, nums, target):
        saw = {}
        for i, each in enumerate(nums):
            comple = target - each
            if each in saw:
                return [saw[each], i]
            saw[comple] = i 
        return []



# Result 
solved = solution()
print(solved.twosum(arr1,t1))
print(solved.twosum(arr2,t2))