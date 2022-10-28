class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int i = 0;
        
        if(n == 0)
            return true;
        
        if(flowerbed.size() == 1 && flowerbed[0] == 0)
            return true;
        
        else if(flowerbed.size() == 1 && flowerbed[0] == 1)
            return false;
        
        
        while(i < flowerbed.size())
        {
            if(i == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0)
            {
                if(n != 0)
                    n--;   
                i += 2;
            }
            
            else if(( i > 0 && flowerbed[i - 1] == 0) && flowerbed[i] == 0 && ((i == flowerbed.size() - 1 ) || flowerbed[i+1] == 0))
            {
                if(n != 0)
                    n--;   
                i += 2;
            }
            
            else
                i += 1;
            
            if(n == 0)
                return true;
        }
        
        return false;
    }
};