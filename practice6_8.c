//
//  main.c
//  practice6_8
//
//  Created by 余言 on 2017/1/23.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double input1,input2;
    printf("please input 2 float numbers.\n");
    
    while(scanf("%lf,%lf",&input1,&input2) == 2){
        printf("result is %lf\n",(input1-input2)/(input1*input2));
    }
    printf("bye.\n");
    return 0;
}
