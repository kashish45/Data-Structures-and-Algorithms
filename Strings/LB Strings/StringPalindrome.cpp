class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	   string Str=S;
	   int low=0;
	   int end=S.length()-1;
	   char temp;
	   
	   while(low<end){
	       temp=S[low];
	       S[low]=S[end];
	       S[end]=temp;
	       low++;
	       end--;
	       
	       
	   }
	   
	   if(Str==S){
	       return true;
	   } 
	   else{return false;}
	}

};