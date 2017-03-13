//
//  main.c
//  practice6_10
//
//  Created by 余言 on 2017/1/24.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int max, min;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d",&min,&max);
    
    while(min<max){
        int sum=0;
        for(int i=min;i<=max;i++){
            sum += i*i;
        }
        printf("The sums of the squares from %d to %d is %d\n",min*min,max*max,sum);
        printf("Enter next set of limits: ");
        scanf("%d %d",&min,&max);
    }
    printf("Done\n");
    return 0;
}
