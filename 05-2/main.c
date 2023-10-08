//
//  main.c
//  05-2
//
//  Created by MacBook Air on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input;
    
    printf("정수 하나를 입력하시오 :");
    scanf("%d", &input);
    
    if(input<0)
        input = -input;
    
    printf("절대값은 %d 입니다\n", input);
    return 0;
}
