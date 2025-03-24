#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("10+10 : %d\n", 10 + 10);
	printf("20-15 : %d\n", 20 - 15);
	printf("20*10 : %d\n", 20 * 10);
	printf("10/3 : %d\n", 10 / 3);
	printf("10%%3 : %d\n", 10 % 3);
	printf("10/3.0 : %f\n", 10 / 3.0);
	// %d 10�� ������ ���� �� �ִ� ����������
	// %f �Ǽ� ���� ����������
	printf("%d\n", 10 == 5);
	// ���� 1�� ��, ���� 0�� ����
	//printf("%d\n", 10 = 5);x
	printf("%d\n", 10 != 5);
	printf("%d\n", 10 > 3);
	printf("%d\n", 10 > 3 && 10 == 5);
	printf("%d\n", 10 > 3 || 10 == 5);
	printf("===============================\n");

	// 128�� 235�� ���� ���� ������ּ���.
	printf("%d\n", 128+235);
	// 512���� 227�� �� ���� ������ּ���.
	printf("%d\n", 512-227);
	// 1200�� 15�� ���� ���� ������ּ���.
	printf("%d\n", 1200/15);
	// 128�� 32 ���� ���� ������ּ���.
	printf("%d\n", 128 *32);
	// 10�� 3���� ���� �������� ������ּ���.
	printf("%d\n", 10 % 3);
	printf("===============================\n");
	// ��������
	int a = 10;

	// a�� 10�� ����.
	printf("%d\n", a == 10);
	// a�� 10�� ���� �ʴ�.
	printf("%d\n", a != 10);
	// a�� 10���� ũ��.
	printf("%d\n", a > 10);
	// a�� 10���� ũ�ų� ����.
	printf("%d\n", a >= 10);

	int b = 10;

	// a�� b�� ����.
	printf("%d\n", a == b);
	// a�� b�� ���� �ʴ�.
	printf("%d\n", a != b);
	int c = 0;
	int d = 1;

	// c�� d�� ����.
	printf("%d\n", c == d);
	printf("======���ǹ� ����=======\n");
	int age;
	age = 25;
	if (age >= 20) {
		printf("�����Դϴ�.\n");
	}
	else{
		printf("�̼����Դϴ�.\n"); // �� �� �ϳ��� ���;� �մϴ�.
	}
	int a3 = 1;
	if (a3 == 1) {
		printf("����\n");
	}else if (a3 == 2) {
		printf("�帲\n");
	}else if (a3 == 3) {
		printf("��\n");
	}else{
		printf("��\n");
	}
	printf("====================\n");
	switch (3) {
	case 1:
		printf("1�Դϴ�.\n");
		break;
	case 2:
		printf("2�Դϴ�.\n");
		break;
	default:
		printf("1�� 2�� �ƴմϴ�.\n");
		break;
	}

	printf("================================\n");
	//ù��° ���ڰ� ũ�� first, �ι�° ���� ũ�� second �� ���, ������ equal �� ���
	int num1 = 30;
	int num2 = 20;

	if (num1 > num2) {
		printf("first");
	}else if (num1 < num2) {
		printf("second");
	}else{
		printf("equal");
	}

	if (num1 > num2) {
		printf("first");
	}else {
		if (num1 < num2) {
			printf("second");
		}
		else {
			printf("equal");
		}
	}
	// ���� ������
	num1 > num2 ? printf("first") : num1 < num2 ? printf("second"): printf("equal");

	printf("====================\n");
	int num3 = 50;
	int num4 = 40;
	if (num3>num4) {
		printf("%d\n", num3 - num4);
	}
	else if (num3 == num4) {
		printf("%d\n", num3-num4);
	}
	else{
		printf("%d\n", num4 - num3);
	}
	// num5�� Ȧ������ ¦������ �Ǻ����ּ���.
	// Ȧ���̸� Ȧ���Դϴ�. ���
	// ¦���̸� ¦���Դϴ�. ���
	// ��Ʈ : 2�� ������ �������� ¦��
	// �������� �켱����
	// ��Ģ������>�񱳿�����>���������
	int num5 = 6;
	printf("%d\n", num5 % 2);
	if (num5%2==0) {
		printf("¦���Դϴ�.\n");
	}else {
		printf("Ȧ���Դϴ�.\n");
	}
	if (num5 % 2 != 0) {
		printf("Ȧ���Դϴ�.\n");
	}
	else {
		printf("¦���Դϴ�.\n");
	}
	if (num5 % 2 == 1) {
		printf("Ȧ���Դϴ�.\n");
	}
	else {
		printf("¦���Դϴ�.\n");
	}
	if (num5 % 2 != 1 ) {
		printf("¦���Դϴ�.\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");
	}
	//scanf(����������, �ּ�);
//#define _CRT_SECURE_NO_WARNINGS
	printf("====================\n");
	scanf("%d", &age);
	printf("���� ��� �Դϴ�. : %d\n", age);
	if (age <= 19) {
		printf("���δ���Դϴ�.");
	}
	else if (age >= 60) {
		printf("���δ���Դϴ�.");
	}
	else {
		printf("���δ���� �ƴմϴ�.");
	}
	if (age <= 19 || age >= 60) {
		printf("���δ���Դϴ�.");
	}
	else{
		printf("���δ���� �ƴմϴ�.");
	}
	if (age <= 19) {
		printf("���δ���Դϴ�.");
	}if (age >= 60) {
		printf("���δ���Դϴ�.");
	}if (age > 19) {
		if (age < 60) {
			printf("���δ���� �ƴմϴ�.");
		}
	}

	return 0;

}





