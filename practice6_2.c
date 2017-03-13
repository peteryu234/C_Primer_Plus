//
//  main.c
//  practice6_2
//
//  Created by 余言 on 2017/1/18.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for(int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
