#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

// :: => 범위지정연산자(Scope Resoution Operator)라고 한다. 이름공간을 지정할때 사용하는 연산자 이다.
int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수"<<std::endl;
}

void ProgComImpl::SimpleFunc()
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
