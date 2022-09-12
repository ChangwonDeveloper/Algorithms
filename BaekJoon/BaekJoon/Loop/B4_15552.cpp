#include <iostream>
#include <stdio.h>
// https://st-lab.tistory.com/232
int main(int argc, char const *argv[])
{
    int T;
    std::cin >> T;
    
    for(int i = 0; i < T; i++) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
}
    
    return 0;
}
