

Minimum Insertions/Deletions to Convert String





int lcs(string &s, string &t){
   int n=s.size();
   int m=t.size();
    vector<int>prev(m+1,0),cur(m+1,0);
	for(int i=1;i<=n;i++){
	   for(int j=1;j<=m;j++){
	      if(s[i-1]==t[j-1]) cur[j] =1 +prev[j-1];
	      else cur[j]=max(prev[j],cur[j-1]);
	   }
           prev=cur;
	}
    return prev[m];		 
   }


int canYouMake(string &s1, string &s2){
    int Number_of_Deletion  = s1.size()-lcs(s1,s2);
    int  Number_of_Insertion = s2.size()-lcs(s1,s2);
    int Number_of_Operation=Number_of_Deletion+Number_of_Insertion;
    return Number_of_Operation;


}

