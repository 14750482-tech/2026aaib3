//week01-2.cpp SOIT106_ADVANCE_001
//c++版本 再多寫一些中文註解
#include <iostream>///使用io串流的外掛
using namespace std;///使用std命名空間
int main()
{
	int N;
	cin>>N;///console input 到右邊的N
	int b=N,ans=0;
	while(N>0){
		ans=ans*10+N%10;
		N=N/10;
	}
	///下面有一個錯的版本 三個正確的版本
	cout<<b<<ans<<b+ans;//錯!少了+=跳行
	cont<<b<<"+"<<ans<<"="<<b+ans<<"\n";///正確1
}
