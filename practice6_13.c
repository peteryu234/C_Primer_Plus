//
//  main.c
//  practice6_13
//
//  Created by 余言 on 2017/2/2.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[8];
    array[0]=2;
    for (int i=1;i<8;i++){
        array[i]=array[i-1]*2;
    }
    
    int j = 0;
    printf("the result is \n");
    do {
        printf("%d ",array[j]);
        j++;
    } while (j<8);
    printf("\n");
    return 0;
}
