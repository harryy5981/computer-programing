/* [�򰡰��� 1] : ���� ����

��ǻ�� ���α׷��� �򰡰��� (���� 25��)
�а� : ��ǻ�Ͱ��к�
�й� : 202200976
�̸� : ������

���� ���� : �ڷγ� ����� ������ �˷��� �� ���� ��� ������ ���� �¾Ҵ� �� �Է��Ѵ�. �� �� ���� ����� ���� ������ �Ǵ��� �˷��ִ� ���α׷��� �����ϰ��� �Ѵ�. 
*/


#include <stdio.h>
int monthplus(int m);

typedef struct {		// [���׸� 5] : ����ü ���
	char* vname;		// [���׸� 4] : ������ ���
	int days;
}VACCINE;

int collection[4] = { 0, 0, 0, 0 };		

VACCINE vaccine[4];		// [���׸� 3] : �迭 ��� (��ü ��� ������ �迭�� ����־���)

void initVac();

int main(void)
{
	int v;
	int m;
	int d;

	printf("------�ڷγ� ��� ����------\n\n");
	printf(vaccine[0].vname = "ȭ����\n");
	printf(vaccine[1].vname = "�����\n");
	printf(vaccine[2].vname = "�Ἶ\n");
	printf(vaccine[3].vname = "�ƽ�Ʈ������ī");

	printf("\n����� ���� �¾Ҵ� �� �Է��ϼ��� : \n");
	scanf_s("%d", &v);
	printf("����� ���� �¾Ҵ� �� �Է��ϼ���(0��0���� ���ڷθ� ����): \n");
	scanf_s("%d %d", &m, &d);
	printf("\n\n----���� ��� ���� ��Ȳ----\n\n");
	printf("%d���� %d�� %d�Ͽ� ���� �Ϸ��Ͽ����ϴ�.", v, m, d);
	if (v == 1)
	{
		printf("\n\n%d���� %d�� %d�Ͽ� �����ϼ���\n\n", v + 1, monthplus(m), d);
	}
	else if (v == 2)
	{
		monthplus(m + 2);
		printf("\n\n%d���� %d�� %d�Ͽ� �����ϼ���\n\n", v + 1, monthplus(m+2), d);
	}
	else
	{
		printf("\n\n���̻� ������ ����� �����ϴ�.\n\n");
	}
	
	return 0;
	
}

void initVac()
{
	vaccine[0].vname = "ȭ����";
	
	vaccine[1].vname = "�����";

	vaccine[2].vname = "�Ἶ";

	vaccine[3].vname = "�ƽ�Ʈ������ī";

}

int monthplus(int m)		// [���׸� 2] : �Լ� ��� 
{
	m += 2;
	if (m >= 11)
	{
		m -= 12;
	}
	return m;
}

