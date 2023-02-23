class TimeMap:

    def __init__(self):
        self.struct = {}

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key not in self.struct:
            self.struct[key] = []
        self.struct[key].append([value, timestamp])
            

        # print(self.struct[key])

    def get(self, key: str, timestamp: int) -> str:
    

        res = ""
        valSet = self.struct.get(key, [])
        lo = 0
        hi = len(valSet) - 1

        while lo <= hi:

            mid = (lo + hi) // 2

            if valSet[mid][1] <= timestamp:
                res =  valSet[mid][0]
                lo = mid + 1
            else:
                hi = mid - 1

        return res


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)