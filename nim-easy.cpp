//Game of Nim. EASY.
/*There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. 
The one who removes the last stone will be the winner.*/

class Solution {
public:
    bool canWinNim(int n) {
        if(n==1)
        return 1;
        else if !(n%4)
        return 0;
        else
        return 1;
    }
};
