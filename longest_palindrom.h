#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==0) return "";
        string str="";
        int count=INT_MIN;
        printf("The int min was set to %d\n", INT_MIN);

        bool dp[n][n];
	int dp_backup[n][n];

        for(int i=0;i<n;i++) {
            dp[i][i]=true;
	    dp_backup[i][i]=1;
            str = s.substr(i,1);
        }
        
        for(int j=1;j<n;j++) {
            for(int i=0;i<j;i++) {
                if(s[i]==s[j]&&j-i<=2) {
                    dp[i][j] = true;
		    dp_backup[i][j] = 1;
                    if(count<j-i+1) {
                        str=s.substr(i,j-i+1);
                        count=j-i+1;
                    }
                }
                else if(s[i]==s[j]&&j-i>2) {
                    if(dp[i+1][j-1]) {
                        dp[i][j]=true;
			dp_backup[i][j]=1;
                        if(count<j-i+1) {
                        str=s.substr(i,j-i+1);
                        count=j-i+1;
                    }
                    }
                    else {
                        dp[i][j]=false;
			dp_backup[i][j]=0;
                    }
                }
                else dp[i][j]=false, dp_backup[i][j]=0;
            }
        }
        for(int (*p)[n] = dp_backup[0]; p != dp_backup+n; ++p){//注意是!=而不是<
        for(int *q=*p;q != *p+n; ++q){
           cout<<*q<<' ';
        }
        cout<<endl;
        }        

        return str;
    }
};



