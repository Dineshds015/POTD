// 2269. Find the K-Beauty of a Number

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int i=0,j=0,temp,count=0,digit=0;
        string q=to_string(num);
        string s="";
        while(j<q.length())
        {
            s+=q[j];
            if(j-i+1==k)
            {
                temp=stoi(s);
                if(temp!=0 && num%temp==0)
                    count++;
                s.erase(s.begin());
                i++;
            }
            j++;
        }
        return count;
    }
};
