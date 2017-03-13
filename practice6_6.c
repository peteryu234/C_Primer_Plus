//
//  main.c
//  practice6_6
//
//  Created by 余言 on 2017/1/22.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int start, end;
    printf("please input the start int and end int.\n");
    scanf("%d,%d",&start,&end);
    
    for (int i=start;i<=end;i++){
        printf("%10d%10d%10d\n",i,i*i,i*i*i);
    }
    return 0;
}
