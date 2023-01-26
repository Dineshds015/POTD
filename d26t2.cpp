// 2379. Minimum Recolors to Get K Consecutive Black Blocks

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0,j=0,max=0,count=0;
        while(j<blocks.length())
        {
            if(blocks[j]=='B')
                count++;
            if(j-i+1==k)
            {
                if(count>max)
                    max=count;
                if(blocks[i]=='B')
                    count--;
                i++;
            }
            j++;
        }
        return k-max;
    }
};
