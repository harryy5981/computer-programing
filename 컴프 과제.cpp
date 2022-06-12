/* [평가과목 1] : 과제 설명

컴퓨터 프로그래밍 평가과제 (배점 25점)
학과 : 컴퓨터공학부
학번 : 202200976
이름 : 김지원

과제 주제 : 코로나 백신의 종류는 알려준 후 현재 백신 몇차를 언제 맞았는 지 입력한다. 그 후 다음 백신을 언제 맞으면 되는지 알려주는 프로그램을 구현하고자 한다. 
*/


#include <stdio.h>
int monthplus(int m);

typedef struct {		// [평가항목 5] : 구조체 사용
	char* vname;		// [평가항목 4] : 포인터 사용
	int days;
}VACCINE;
	

VACCINE vaccine[4];		// [평가항목 3] : 배열 사용 (전체 백신 정보를 배열에 집어넣었음)

void initVac();

int main(void)
{
	int v;
	int m;
	int d;

	printf("------코로나 백신 종류------\n\n");
	printf(vaccine[0].vname = "화이자\n");
	printf(vaccine[1].vname = "모더나\n");
	printf(vaccine[2].vname = "얀센\n");
	printf(vaccine[3].vname = "아스트라제네카");

	printf("\n백신을 몇차 맞았는 지 입력하세요 : \n");
	scanf_s("%d", &v);
	printf("백신을 언제 맞았는 지 입력하세요(0월0일을 숫자로만 기입): \n");
	scanf_s("%d %d", &m, &d);
	printf("\n\n----현재 백신 접종 현황----\n\n");
	printf("%d차를 %d월 %d일에 접종 완료하였습니다.", v, m, d);
	if (v == 1)
	{
		printf("\n\n%d차를 %d월 %d일에 접종하세요\n\n", v + 1, monthplus(m), d);
	}
	else if (v == 2)
	{
		monthplus(m + 2);
		printf("\n\n%d차를 %d월 %d일에 접종하세요\n\n", v + 1, monthplus(m+2), d);
	}
	else
	{
		printf("\n\n더이상 접종할 백신이 없습니다.\n\n");
	}
	
	return 0;
	
}

void initVac()
{
	vaccine[0].vname = "화이자";
	
	vaccine[1].vname = "모더나";

	vaccine[2].vname = "얀센";

	vaccine[3].vname = "아스트라제네카";

}

int monthplus(int m)		// [평가항목 2] : 함수 사용 
{
	m += 2;
	if (m >= 11)
	{
		m -= 12;
	}
	return m;
}

