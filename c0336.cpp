#include <iostream>

using namespace std;

// call by value 이용한 포인터 참고 연산
void Swap(int* PA, int* PB)
{
	int Temp = *PA;
	*PA = *PB;
	*PB = Temp;
}

// call by reference
void Swap(int &PA, int &PB)
{
	int Temp = PA;
	PA = PB;
	PB = Temp;
}
// Swap(A, B)

class Actor
{

};

int main()
{
	int A = 10;
	int B = 20;
	int Temp = 0;

	Swap(&A, &B);

	int* PA = nullptr;
	// 주소값을 저장하는 PA 만들기
	
	PA = &A;
	// A의 주소값을 PA에 넣어라

	// 포인터형 변수 *PA = A의 주소로 찾아가서 A의 값을 가져와라
	// PA -> 값 = A의 주소값
	cout << PA << endl;
	// 출력 : A의 주소값
	cout << *PA << endl;
	// 출력 : 10
	cout << &A << endl;
	// 출력 : A의 주소값
	
	cout << *PA << endl;
	// 출력 : PA의 메모리 사이즈, 64비트이기에 8바이트


	Actor* PActor;

	float F = 1.0f;

	float* PF = &F;
	// PActor PF 모두 주소는 무조건 8바이트

	PA = new int();
	// 사라지지 않음 , 그러나 계속 쌓임

	
	

	cout << A << endl;
	cout << B << endl;

	return 0;
}