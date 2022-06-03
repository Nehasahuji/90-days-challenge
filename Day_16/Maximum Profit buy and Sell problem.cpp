//Method 1:
//Recursive Solution

 int maxProfit(vector<int>& prices,int start,int end){
        if(start>=end)
            return 0;
        int profit=0;
        for(int i=start;i<end;i++){
            int currProfit=0;
            for(int j=i+1;j<=end;j++){
                if(prices[j]>prices[i]){
                currProfit= prices[j]-prices[i]
                         +maxProfit(prices,start,i-1) //Recurisve call for left half
                         +maxProfit(prices,j+1,end); //recursive call for right half
                 profit=max(profit,currProfit);   
                }
            }
        }
        return profit;
    }
    int maxProfit(vector<int>& prices) {
      return maxProfit(prices,0,prices.size()-1);
    }

//Method 2:
//Iterative Solution


int maxProfit(vector<int>& prices) {
      int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]<prices[i]){
              profit+=prices[i]-prices[i-1];
            }
        }
        
        return profit;
    }
	
	
