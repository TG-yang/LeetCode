#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Twitter {
private:
    unordered_map<int,unordered_set<int>>followers;
    unordered_map<int,vector<pair<int,int>>>postTweets;
public:
    /** Initialize your data structure here. */
    Twitter() {

    }

    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {

       unordered_set<int>::iterator it = followers[userId].begin();
       while(it != followers[userId].end()){
           postTweets[*it].push_back(pair<int,int>(userId,tweetId));
       }
    }

    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        vector<int> result;
        int len = postTweets[userId].size();

        for(int i = len - 1, j = 0; j < 10; ++j,--i)
            result.push_back(postTweets[userId][i].second);

        reverse(result.begin(),result.end());

        return result;

    }

    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        followers[followeeId].insert(followeeId);
    }

    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        followers[followeeId].erase(followerId);
        int len = postTweets[followerId].size();
        for(int i = len - 1, j = 0;j < 10;){
            if(postTweets[followerId][i].first == followeeId){
                postTweets[followerId].erase(postTweets[followerId].begin() + i);
            }else
                --i,++j;
        }
    }
};

class Twitter {
public:
    /** Initialize your data structure here. */
    Twitter() {
        index = 0;
    }

    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        post[userId].push_back(make_pair(index++, tweetId));
    }

    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        vector<pair<int,int> > allNews;
        for (auto p : post[userId]) allNews.push_back(p);
        for (auto f : follows[userId]) {
            for (auto p : post[f]) allNews.push_back(p);
        }
        sort(allNews.rbegin(), allNews.rend());
        vector<int> res;
        for (int i = 0; i < allNews.size() && i < 10; i++) res.push_back(allNews[i].second);
        return res;
    }

    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        if (!follows[followerId].count(followeeId) && followerId != followeeId) follows[followerId].insert(followeeId);
    }

    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        if (follows[followerId].count(followeeId) && followerId != followeeId) follows[followerId].erase(followeeId);
    }

private:
    unordered_map<int, vector<pair<int,int> > > post;//first int is userId secont int is a time third int is tweetId
    unordered_map<int, unordered_set<int> > follows;//first int is followerId second int is followeeId
    int index;
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter obj = new Twitter();
 * obj.postTweet(userId,tweetId);
 * vector<int> param_2 = obj.getNewsFeed(userId);
 * obj.follow(followerId,followeeId);
 * obj.unfollow(followerId,followeeId);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}