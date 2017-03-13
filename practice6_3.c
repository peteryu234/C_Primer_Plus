//
//  main.c
//  practice6_3
//
//  Created by 余言 on 2017/1/18.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for(int i=1;i<7;i++){
        char first='F';
        for(int j=1;j<=i;j++){
            printf("%c",first);
            first--;
        }
        printf("\n");
    }
    return 0;
}
