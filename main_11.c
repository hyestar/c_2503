#include <stdio.h>
int main() {
	int age = 20;
	int* p = &age;
	char a = 5;
	char* pp = &a;
	// 자료형에 따라 읽는 크기가 달라지기 때문에
	// 주소만 알면 되는게 아니라 그 주소에 어떤 데이터가 얼마나 들어있는지
	// 알아야 제대로 값을 읽어올 수 있기 때문에 포인터에 자료형을 같이 써야함
	/*a번지에 있는 집 작은 원룸(1평)
	p번지에 있는 집 큰 아파트(4평)*/
	int num = 1025;
	int* ip = &num;
	char* cp = (char*)& num;
	//printf("%lu\n", sizeof(int));
	//printf("%lu\n", sizeof(long));
	printf("num의 주소 : %p\n", &num);
	printf("int형 포인터 ip가 가리키는 값 : %d\n", *ip);
	printf("char형 포인터 cp가 가리키는 값 : %d\n", *cp);
	// 시스템에 따라 long의 범위가 다름 32비트 시스템에서 long은 4바이트
	// 64비트 시스템에서 long은 8바이트
	unsigned int s = 2200000000;
	printf("s : %u\n", s);
	long long ss = 40000000000;
	printf("ss : %lld\n", ss);
	//int a = 10;
	//a = 20;
	//int* p = &a;
	//*p = 30;
	return 0;
}