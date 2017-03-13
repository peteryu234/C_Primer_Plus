//
//  main.c
//  practice6_4
//
//  Created by 余言 on 2017/1/18.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char first='A';
    for(int i=1;i<7;i++){
        for(int j=1;j<=i;j++){
            printf("%c",first);
            first++;
        }
        printf("\n");
    }
    return 0;
}
