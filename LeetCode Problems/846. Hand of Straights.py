class Solution:
    def isNStraightHand(self, hand: list[int], groupSize: int) -> bool:

        hand.sort()
        dt = {}

        for i in hand:
            dt[i] = dt.get(i, 0) + 1

        while(dt):
            gs = groupSize - 1
            ele = next(iter(dt))
            # print('curr',ele)
            dt[ele] -= 1
            if dt[ele] == 0:
                dt.pop(ele)

            while(gs > 0):
                ele += 1
                # print(gs, ele)
                if ele in dt:
                    gs -= 1
                    dt[ele] -= 1
                    if dt[ele] == 0:
                        dt.pop(ele)
                else:
                    return False
                

        return True