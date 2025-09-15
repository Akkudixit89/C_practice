#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char text[100],str[100];
	fp=fopen("bullu.txt","w");
	printf("enter string=");
	gets(str);
	fputs(str,fp);
	fclose(fp);
	fp=fopen("bullu.txt","r");
	while(!feof(fp))
	{
		fgets(text,15,fp);
		printf("%s\n",text);
	}
	fclose(fp);
	
}
