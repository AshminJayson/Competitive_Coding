from heapq import heappush, heappop

class Twitter:

    def __init__(self):
        self.users = {}
        self.tweets = []
        self.twc = 0
        

    def postTweet(self, userId: int, tweetId: int) -> None:
        self.twc += 1

        heappush(self.tweets, [-self.twc, userId, tweetId])
        print(self.tweets)

    def getNewsFeed(self, userId: int) -> List[int]:
        st = []
        kt = []

        while len(st) != 10 and self.tweets:
            x = heappop(self.tweets)
            kt.append(x)
            if x[1] == userId or (userId in self.users and x[1] in self.users[userId]) :
                st.append(x[2])

        while kt:
            heappush(self.tweets, kt.pop()) 

        return st


    def follow(self, followerId: int, followeeId: int) -> None:

        if followerId not in self.users:
            self.users[followerId] = set()

        self.users[followerId].add(followeeId)
        

    def unfollow(self, followerId: int, followeeId: int) -> None:
        if followerId in self.users:
            self.users[followerId].remove(followeeId)


# Your Twitter object will be instantiated and called as such:
# obj = Twitter()
# obj.postTweet(userId,tweetId)
# param_2 = obj.getNewsFeed(userId)
# obj.follow(followerId,followeeId)
# obj.unfollow(followerId,followeeId)