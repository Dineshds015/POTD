// 2410. Maximum Matching of Players With Trainers

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count=0;
        int i=players.size()-1;
        int j=trainers.size()-1;
        while(i>=0 &&j>=0)
        {
            if(players[i]<=trainers[j])
            {
                j--;
                count++;
            }
            if(i==0)
                return count;
            i--;
        }
        return count;
    }
};
