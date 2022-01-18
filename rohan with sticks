#include <stdio.h>

int rohanWithsticks(){
    int n,m;
    scanf("%d%d",&n,&m);
    int points = n*m,temp=1;
    while(points > 0){
        points = points - (n+(m-1));
        n--;
        m--;
        if(temp==1) temp=0;
        else temp=1;
    }
    return temp;
}

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    if(rohanWithsticks()==1) printf("Kshitij");
	    else printf("Rohan");
	    printf("\n");
	}
	return 0;
}
