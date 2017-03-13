//
//  main.c
//  practice6_1
//
//  Created by 余言 on 2017/1/18.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char chars[26];
    char ch = 'a';
    for(int i = 0; i < 26; i++){
        chars[i] = ch;
        ch++;
    }
    for(int j=0;j<26;j++){
        printf("%c\n",chars[j]);
    }
    return 0;
}
