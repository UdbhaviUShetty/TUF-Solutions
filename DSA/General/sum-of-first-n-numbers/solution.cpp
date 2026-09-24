class Solution{	
	public:
		int NnumbersSum(int N){

            if(N==1)
                return 1;
            else
                return N+NnumbersSum(N-1);

		}
};