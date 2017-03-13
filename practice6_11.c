//
//  main.c
//  practice6_11
//
//  Created by 余言 on 2017/1/28.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[8];
    printf("please input 8 integer\n");
    for(int i=0;i<8;i++)
        scanf("%d",&array[i]);
    printf("the input array is reversed as below.\n");
    
    for(int i=7;i>=0;i--){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
