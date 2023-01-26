// 1876. Substrings of Size Three with Distinct Characters

class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=0,count=0;
        string temp;
        while(j<s.length())
        {
            temp+=s[j];
            if(j-i+1==3)
            {
                if(temp[0]!=temp[1] && temp[1]!=temp[2] && temp[0]!=temp[2])
                    count++;
                temp.erase(temp.begin());
                i++;
            }
            j++;
        }
        return count;
    }
};
