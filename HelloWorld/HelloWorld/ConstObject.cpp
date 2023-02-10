#include <iostream>
using  namespace std;

class  SoSimple
{
private:
	int num;


public:
	SoSimple(int n) : num(n){}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	
	void ShowData() const 
	{
		cout << "num: " << num << endl;
	}
};

// 객체에 const선언이 붙게되면 const 멤버함수만 호출이 가능하다. = > 객체의 데이터변경을 허용하지 않을것!
int main(void)
{
	const SoSimple obj(7);
	//obj.AddNum(20); const가 붙지 않기때문에 호출 불가능
	obj.ShowData(); // const가 붙기때문에 호출가능
	return 0;
}
