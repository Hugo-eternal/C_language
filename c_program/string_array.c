#include<stdio.h>
#include<stdlib.h>

//取得字串長度運算
int Strlen(const char *Str){
	int len = 0;
	while(Str[len] !='\0')
		len++;
		return len;
}
//複製字串
char *Strcpy(char *dest, const char *src){
	
	int i = 0;
	dest = (char *)malloc(sizeof(char)*(Strlen(src)+1));
	while(src[i]!='\0'){
		*(dest+i) = *(src+i);
		i++;
	}
	dest[i]= '\0';
	return dest;
}
//字串連接
char *Strcat(char *dest,const char *src){
	int i=0,j=0;
	char *result = (char *)malloc(Strlen(src)+Strlen(dest)+1);
	while(dest[i]!='\0'){
		*(result+i) = *(dest+i);
		i++;
	}
	while(src[j]!='\0'){
		*(result+i) = *(src+j);
		i++;
		j++;
	}
	result[i] = '\0';
	dest = result;
	return dest;
}
//字串的比較
int Strcmp(const char *s1,const char *s2){
	int i;
	for(i=0;s1[i]==s2[i];i++){
		if(s1[i]=='\0')
			return 0;
	}
	if(s1[i]>s2[i])
		return 1;
	else 
		return -1;
}

int main(){
	
	char s1[] = "Taiwan";//唯獨指標,不能指向其他陣列
	char *s2 = "Welcome";
	char *s3 = NULL;
	
	char name[10];
	char name2[10];
	int same = 0;
	//char *s3 = (char *)malloc(sizeof(char));
	//指向字串起始位置,若指向單一字元,會造成記憶體錯誤,將尋找字串結尾字元
	
	printf("%s 長度為 %d\n",s1,Strlen(s1));
	
	printf("s2 : %s , s3: %s\n",s2,s3);
	s3 = Strcpy(s3,s2);
	printf("複製後 s2 : %s , s3 : %s \n",s2,s3);
	
	printf("%s 與 %s 兩字串結合 = %s \n",s2,s1,Strcat(s2,s1));
	
	printf("輸入第一個字串 : ");
	fgets(name,10,stdin);
	name[Strlen(name)-1]='\0';

	printf("輸入第二個字串 : ");
	fgets(name2,10,stdin);
	name2[Strlen(name2)-1]='\0';

	same = Strcmp(name,name2);
	switch(same){
		case 0:
			printf("%s 和 %s 是相同的\n",name,name2);
			break;
		case 1:
			printf("%s 和 %s 是不同的,且 %s 比 %s 大 \n",name,name2,name,name2);
			break;
		case -1:
			printf("%s 和 %s 是不同的,且 %s 比 %s 小 \n",name,name2,name,name2);
	}
	return 0;
}




