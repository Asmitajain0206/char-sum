/* Consider All lowercase Alphabets of the English language. Here we consider each alphabet from a to z to have a certain weight. The weight of the alphabet a is considered to be 1, b to be 2, c to be 3 and so on until z has a weight of 26. In short, the weight of the alphabet a is 1, and the weight of all other alphabets is the weight of its previous alphabet + 1.

Now, you have been given a String S consisting of lowercase English characters. You need to find the summation of weight of each character in this String*/

#include <stdio.h>
#include<stdlib.h>
int main(){
	char s[100];
	int i,sum=0,len;

	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	sum+= (int)s[i] - 96;
    printf("%d",sum);
	return 0;
}
