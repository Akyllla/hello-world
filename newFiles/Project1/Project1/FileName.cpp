#include<iostream>
#include <stdio.h>
#include <time.h>
unsigned long long factorial(int n) {
    if (n <= 1) return 1; // ��������� 0 � 1 ����� 1
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i; // �������� �� ������� �����
    }
    return result;
}
int main() {
time_t start, end;
	time(&start);
    std::cout << "hdgfvzjsh" << std::endl;
    int a, b, c;
    a = 1;
    b = 2;
    c = 0;
    for (int i = 0; i < 10; i++) {
        a++;
        b *= 2;
        c = a + b;
    }
    const int limit = 20; // ������ ��� ���������� �����������

    std::cout << "���������� ����� �� 1 �� " << limit << ":" << std::endl;

    // ������� ���� ��� ���������� �����������
    for (int num = 1; num <= limit; ++num) {
        std::cout << num << "! = " << factorial(num) << std::endl;
    }
    time(&end);
   
    double seconds = difftime(end, start);
    printf("The time: %f seconds\n", seconds);

}
//dfghszkjg
//jdztb kiuf/xzdkjbrhsu
//dfjxbthy uzshfkjzhkx,j
    
