#include<stdio.h>
#include<string.h>
#define size 20
int main()
{
	//1.
	char arr[size]={'h','e','l','l','o',' ','w','o','r','l','d','!'};
	for(int i;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
	}
	//2.´óÐ¡Ð´×ª»» 
	char str[]="hello world!";
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]<'z' && str[i]>'a')
			{
				str[i]=str[i]-32;
			}
	}
	printf("\nlen=%d\n",strlen(str));
	printf("%s",str);
	return 0;
}
