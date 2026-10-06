#include<stdio.h>
int main(){ 
printf("请输入8个文本:");
int s[9999]={0};int i,ii,z,shou;
     for(shou=0;shou<8;shou++)    {
	     scanf("%d",&s[shou]);}
//printf("%d",s[0]); 
for(i=0;i<=8888;i++){for(ii=0;ii<8888;ii++){if(s[ii]<s[ii+1]){z=s[ii];s[ii]=s[ii+1];s[ii+1]=z;}
}
}

printf("排序结果：");

      for(i=0;i<8888;i++){if (s[i]!=0){printf("%d ",s[i]);
}
}

return 0;}
