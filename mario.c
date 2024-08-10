#include <stdio.h>

int main() {
    int h=0, lv, sym=1, pyramidType=0, gap=0, validInput, maxHeightAllowed=8;
    do {
        printf("Enter desired pyramid height: ");
        validInput = scanf("%d", &h);
        while (getchar()!='\n');
    } while (validInput!=1 || h<=0 || h>8);
	do {
        printf("Enter pyramid type:\n");
        printf("1. Half Pyramid\n");
        printf("2. Full Pyramid\n");
        printf("3. Gapped Pyramid\n");
        validInput = scanf("%d", &pyramidType);
        while (getchar()!='\n');
    } while (validInput!=1 || pyramidType<=0 || pyramidType>=4);
	if (pyramidType==3) {
        do {
            printf("Enter desired gap: ");
            validInput = scanf("%d", &gap);
            while (getchar()!='\n');
        } while (validInput!=1 || gap<0);
    }
    printf("Printing a pyramid with a height of %d.\n", h);
    for(lv=h-1; lv>=0; lv--) {
        int ws, lsym, lgap;
        for (ws=lv; ws>0; ws--) {
            printf(" ");
        }
        for (lsym=sym;lsym>0;lsym--) {
            printf("#");
        }
        if (pyramidType==3) {
        		for (lgap=gap;lgap>0;lgap--) {
        			printf(" ");
				}
				for (lsym=sym;lsym>0;lsym--) {
           			printf("#");
      			 }
			}
        if (pyramidType==1 || pyramidType==3) {
        	sym+=1;
		} else if (pyramidType==2) {
			sym+=2;
		}
        printf("\n");
    }
    return 0;
}