/*condition_multiple_false.c*/
#include <stdio.h>
main(){
	if("사과를 좋아하나요?")
		printf("사과를 좋아하는군요!"); 
	else if("사과를 좋아하나요?")
		printf("사과를 좋아하는군요!");
	else if("사과를 좋아하나요?")
		printf("사과를 좋아하는군요!");
	else if("사과를 좋아하나요?")
		printf("사과를 좋아하는군요!");
	else
		printf("당신은 아마도 과일을 좋아하지 않는 것 같군요");
	printf("좋아하는 과일 조사 끝"); 
}
