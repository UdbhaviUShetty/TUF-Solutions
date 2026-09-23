class Solution{	
	public:		
		bool palindromeCheck(string& s){
			string dup=s;
            for(int i=0;i<s.length();i++)
            {
                s[(s.length()-1)-i]=dup[i];
            }
            if(s==dup)
                return true;
            else
                return false;
		}
};