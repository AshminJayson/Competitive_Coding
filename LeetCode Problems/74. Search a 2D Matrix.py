class Solution:
    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:
        
        lo = 0
        hi = len(matrix)

        row = -1

        while lo < hi:

            mid = (lo + hi) // 2

            if target >= matrix[mid][0]:
                if mid < len(matrix) - 1:
                    if matrix[mid + 1][0] > target:
                        row = mid   
                        break
                    else:
                        lo = mid + 1  
                else:
                    row = mid
                    break
            else:
                hi = mid


        if row == -1:
            return False
        
        lo, hi = 0, len(matrix[mid])

        while lo < hi:
            
            mid = (lo + hi) // 2

            if matrix[row][mid] == target:
                return True
            elif matrix[row][mid] < target:
                lo = mid + 1
            else:
                hi = mid

        return False
                


ob = Solution()
print(ob.searchMatrix([[1,3,5,7],[10,11,16,20],[23,30,34,60]], 13))
print(ob.searchMatrix([[1,3,5,7],[10,11,16,20],[23,30,34,60]], 3))