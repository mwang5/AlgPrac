#include <stdio.h>
	
main(){
	int i, a[5] = {3,99,4,5,1};
	bubblesort(a, 5);
	for(i = 0; i < 5; i++)
		printf("%d,", *(a + i));
}

bubblesort(p, n)
int *p, n;	
{
	int i, t ,*pj;
	for(i = 1; i < n; i++)
		for(pj = p + n -1; pj > p + i - 1; pj--)
			if(*(pj - 1) > *pj){
				t = *pj;
				*pj = *(pj - 1);
				*(pj - 1) = t;
			}
}
