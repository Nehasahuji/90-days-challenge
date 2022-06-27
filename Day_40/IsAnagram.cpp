//Time Complexity O(nlogn)
//Space Complexity O(1) 
 bool isAnagram(string s, string t) {
       
       sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s==t)
            return true;
        else
            return false;
         
       
     
    }
	

//Time Complexity O(n)
//Space Complexity O(n) 
 bool isAnagram(string s, string t) {
       
       map<int,int> mp1;
        map<int,int> mp2;
        
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
        }  
    
        for(int i=0;i<t.size();i++)
        {
            mp2[t[i]]++;
        } 
        
        if(mp1==mp2)
            return true;
        else
            return false;
       
       
     
    }

//Time Complexity O(n)
//Space Complexity O(n) 	
	
   bool isAnagram(string s, string t) {
       
       map<int,int> mp1;
      
        if(s.length()!=t.length()) return false;
        
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
            mp1[t[i]]--;
        }  
    
        
       for (auto pr : mp1) 
       { 
                if(pr.second!=0)
                    return false;
       }
       
       return true;
     
    }