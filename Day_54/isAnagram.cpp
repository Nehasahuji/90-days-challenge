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