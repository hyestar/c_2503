#include <stdio.h>
#include <stdio.h>

int main(void) {
	int a;
	a = 20;

	int b = 40;

	// ������������ ����
	int c;
	c = b;
	b = a;
	a = c;

	// ������������ ��

	printf("== �������� ==\n");

	printf("a : %d\n", a);
	// ��� => a : 40
	printf("b : %d\n", b);
	// ��� => b : 20

	return 0;
}
// �ڷ��� �����̸�;
// ���� : �����͸� ������ �� �ִ� �ϳ��� ����
//������ Ư¡
//1. ������ ����(����)�Ǿ�߸� ��� ����
//2. ������ ����Ǳ� ���� ������ Ÿ���� ����ؾ߸� ���� ������ ����
//3. �������� ��õ� Ÿ���� �����͸� �Ҵ��� �� �ִ�.
//4. ������ �ߺ������� �Ұ����ϴ�.
//5. ������ ��Ȱ�� �����ϴ�.
//6. ������ ���� �ϳ��� ���� ���� �� �ִ�.
//7. ������ ���Կ�����(=)�� �������� ������ �������� ����, ������ ������ ���̴�.



//����Ÿ�� �Լ���(�Ű�����) {
//	return ���ϰ�;
//}
