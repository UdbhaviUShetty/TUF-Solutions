class Solution{	
	public:		
		bool palindromeCheck(string& s){
			
            string dup=s;
            for(int i=0;i<s.size();i++)
            {
                s[(s.size()-1)-i]=dup[i];
            }
        
            if(s==dup)
                return true;
            else
                return false;
		}
};