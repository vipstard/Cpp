#include <iostream>

inline int SQUARE(int x)
{
	return x * x;
}

// 매크로를 이용한 함수의 인라인화는 전처리기에 의해 처리,
// 키워드 inline을 이용한 함수의 인라인화는 컴파일러에 의해 처리가 된다. 따라서 컴파일러는
// 함수의 인라인화가 오히려 성능에 해가된다고 판단할경우 키워드를 무시함
int main(void)
{
	std::cout << SQUARE(5)<<std::endl;
	std::cout << SQUARE(12)<<std::endl;
	return 0;
}