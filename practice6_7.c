//
//  main.c
//  practice6_7
//
//  Created by 余言 on 2017/1/23.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char word[40];
    printf("input a word.\n");
    scanf("%s",word);
    
    printf("the input word is ");
    for (int i=strlen(word);i>=0;i--)
        printf("%c",word[i]);
    printf("\n");
    return 0;
}
