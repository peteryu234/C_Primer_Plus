//
//  main.c
//  practice6_5
//
//  Created by 余言 on 2017/1/19.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char input;
    printf("please input a upper character.\n");
    scanf("%c",&input);
    
    int loop,line_length;
    loop = input - 'A' + 1;
    line_length = 2 * (input - 'A' + 1) - 1;
    
    
    for (int i=1;i<=loop;i++){
        int char_count,space_count;
        char_count = i * 2 - 1;
        space_count = line_length - char_count;
        for (int j=1;j<=space_count/2;j++){
            printf(" ");
        }
        for (int k=0;k<i;k++){
            printf("%c",'A'+k);
        }
        for (int k=1;k<=i-1;k++){
            printf("%c",'A'+i-1-k);
        }
        for (int j=1;j<=space_count/2;j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
