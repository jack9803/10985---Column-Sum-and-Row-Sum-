#include<stdio.h>
#include<stdlib.h>
int M,N;
long int row_sum[100050]={0};
long int col_sum[100050]={0};
long int ans_row=0;
long int ans_col=0;
int main(){
	int i,j;
	int tmp;
while(scanf("%d %d",&M,&N)!=EOF){
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&tmp);
			row_sum[i] =row_sum[i]+tmp;
			col_sum[j] =col_sum[j]+tmp;
		}
	}
	ans_col = col_sum[0];
	ans_row = row_sum[0];
	for(i=0;i<M;i++){
		if(ans_row>=row_sum[i]){
			ans_row =row_sum[i];
		}
	}
	for(i=0;i<N;i++){
		if(ans_col>=col_sum[i]){
			ans_col =col_sum[i];
		}
	}
	printf("%ld %ld\n",ans_col,ans_row);
	for(i=0;i<100050;i++){
		row_sum[i]=0;
	}
	for(i=0;i<100050;i++){
		col_sum[i]=0;
	}
}
	return 0 ;
}