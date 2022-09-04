int maxArea(vector<int>& height) {
       int left=0;
       int right=height.size()-1;
       int maxWater=0;
       while(left<right){
          int minHeight=min(height[left],height[right]);
          maxWater=max(maxWater,minHeight*(right-left));
          if(height[left]<height[right]){
              left++;
          }else{
              right--;
          }
       }
        
        return maxWater;
    }