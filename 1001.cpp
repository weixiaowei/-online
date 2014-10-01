// 这是不正确的版本

#include <iostream>
using namespace std;

int add(double arr, int ar);

int main(void)
{
    // 定义三个数组，一个整形数组， 另两个是双精度数组
	int ar[6];
	double arr[6];
  double sum[6];

	
	// 分别输入
	for (int i = 0; i < 6; i++)
	{
		cin>>arr[i] >>ar[i];
	}
	
	// 计算（用函数还是不用函数）
	for (i = 0; i < 6; i++)
	{
		sum[i] = add(arr[i], ar[i]);
		cout<<sum[i]<<endl;
	}


	return 0;
}

int add(double arr, int ar)
{
	int acount = 1;
	for (int j = 0; j < ar; j++)
	{
		acount = acount * arr;
	}

	return acount;
}
