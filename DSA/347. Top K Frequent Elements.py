from collections import Counter
from random import randint

# class Solution:
#     def topKFrequent(self, nums: list[int], k: int) -> list[int]:
#         ht = defaultdict(lambda : 0)
#         for i in nums:
#             ht[i] += 1

        #or just use Counter()
        
        #This would allow me to hold the counts of all elements in O(n)
        #However finding the top k would require a sort which takes a min tc of O(n log n) which would result in a TLE
        #Therefore I must either change the overall approach or think of finding a way to hold the order 🤔

        #Think ma bwoi think.

        #Lemme try breaking this into two parts : The counting is already done, now it's just items with a count and I have to find the 
        #k items with the highest count in O(n) tc

        #Approach 1 : Divide the total testcases as k < n and k = n
        #for k < n sorting can be done in O(k log k) which is < O(n log n) and if k = n return it as is.

        # if k == len(nums):
        #     return nums

        # sht = dict(sorted(ht.items(), key=lambda item: item[1], reverse=True))
        # return list(sht.keys())[:k]

        #Sometimes I wonder why don't I just mess around and work out a solution cause this f*ing worked 🤣
        #Well everyday is a learning experience 


        #Approach 2 : Quickselect (Hoare's selection algorithm)

        #This has a pretty steep learning curve and so I'll probably settle for one question today
        #There ain't no point half assing this

        #This trench keeps getting deeper, now there's this dude called Lamuto and his paritioning scheme
        

        #Lomuto's Paritioning
        #Pick the last element as the pivot index
        #Set the first as the the store_index and if list[i>store_index] < list[pivot] swap list[i] and list[store_index] and increment store index


class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        ht = Counter(nums)
        sl = list(ht.keys())
        n = len(sl)
        
        def lamutopartition(left, right, pivot_index):


            sl[right], sl[pivot_index] = sl[pivot_index], sl[right]
            store_index = left
            for i in range(left, right):
                if ht[sl[i]] < ht[sl[right]]:
                    sl[store_index], sl[i] = sl[i], sl[store_index]
                    store_index += 1

            sl[right], sl[store_index] = sl[store_index], sl[right]

            return store_index

        def Quickselect(left : int, right : int, kcount : int):


            if left == right:
                return

            pivot_index = randint(left, right)

            kindex = lamutopartition(left, right, pivot_index)

            if kindex == kcount:
                return
            elif kcount < kindex:
                Quickselect(left, kindex - 1, kcount)
            else:
                Quickselect(kindex  + 1, right, kcount)

        
        Quickselect(0, n - 1, n-k)
        return sl[n-k:]


ob = Solution()
print(ob.topKFrequent([1,1,1,2,2,3], 2))
print(ob.topKFrequent([-1,-1], 1))
print(ob.topKFrequent([1,2], 2))