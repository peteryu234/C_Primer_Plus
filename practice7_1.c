//
//  main.c
//  practice7_1
//
//  Created by 余言 on 2017/2/26.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char input;
    int space_count, line_count, other_count;
    
    printf("please input your statement.\n");
    while ((input=getchar()) != '#') {
        if (input == ' ')
            space_count++;
        else if (input == '\n')
            line_count++;
        else
            other_count++;
    }
    printf("the space is %d, line is %d, other is %d.\n", space_count, line_count, other_count);
    return 0;
}
