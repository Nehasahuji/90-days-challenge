Aproch 1:
Brute Force
Time Comlexity O(n*n)
Space Complexity O(1)

int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if((prices[j]-prices[i])>maxProfit)
                {
                    maxProfit=prices[j]-prices[i];
                }
            }
        }
        
        return maxProfit;
    }


Approch 2: 
Efficient Solution
Time Comlexity O(n)
Space Complexity O(1)

int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minPrice=prices[0];
        for(int i=1;i<prices.size();i++){
            if((prices[i]-minPrice)>maxProfit)
            {
               maxProfit=prices[i]-minPrice;
            }
            
            if(prices[i]<minPrice)
                minPrice=prices[i];
        }
        
        return maxProfit;
    }

Approch 3: 
Efficient Solution
Time Comlexity O(n)
Space Complexity O(1)


    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int n=prices.size();
        int maxPrice=prices[n-1];
        
        for(int i=n-2;i>=0;i--){
            if(prices[i]>maxPrice){
              maxPrice = prices[i];
            }
            
            if(maxPrice-prices[i]>maxProfit){
                maxProfit=maxPrice-prices[i];
            }   
        }
        return maxProfit;
    }