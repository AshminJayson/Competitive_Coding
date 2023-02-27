class Node:
    def __init__(self, key = 0, val = 0, prev = None, next = None):
        self.key = key
        self.val = val
        self.prev = prev
        self.next = next



class LRUCache:

    def __init__(self, capacity: int):
        self.head = Node()
        self.tail = Node()

        self.head.next = self.tail
        self.tail.prev = self.head

        self.dic = {}
        self.capacity = capacity

        

    def get(self, key: int) -> int:
        ps = self.dic.get(key, -1)
    

        # ptr = self.head
        # # print('div')
        # while ptr:
        #     print(ptr.val)
        #     ptr = ptr.next

        # print('done')

        if ps == -1:
            return -1
        else:

            self.dic[key].prev.next = self.dic[key].next
            self.dic[key].next.prev = self.dic[key].prev

            self.dic[key].next = self.head.next
            self.dic[key].prev = self.head
            self.head.next.prev = self.dic[key]
            self.head.next = self.dic[key]

            return self.dic[key].val

        

    def put(self, key: int, value: int) -> None:

        pres = self.dic.get(key, -1)

        if pres == -1:
            if self.capacity <= 0:
                self.dic.pop(self.tail.prev.key)

                
                self.tail.prev.prev.next = self.tail
                self.tail.prev = self.tail.prev.prev

            else:
                self.capacity -= 1

            temp = Node(key, value)

            self.dic[key] = temp
            temp.next = self.head.next
            self.head.next.prev = temp
            temp.prev = self.head
            self.head.next = temp

        else:

            self.dic[key].val = value

            self.dic[key].prev.next = self.dic[key].next
            self.dic[key].next.prev = self.dic[key].prev

            self.dic[key].next = self.head.next
            self.dic[key].prev = self.head
            self.head.next.prev = self.dic[key]
            self.head.next = self.dic[key]

        # itr = self.tail
        # # while itr:
        # #     print(itr.val)
        # #     itr = itr.prev
        # ptr = self.head
        # # print('div')
        # while ptr:
        #     print(ptr.val)
        #     ptr = ptr.next

        # print('done', self.capacity)




            

# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)