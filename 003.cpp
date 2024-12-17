// 003.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class lwh {
private:
	double l[3];
	double w[3];
	double h[3];
public:
	void input_num() {
		for (int i = 0; i < 3; i++) {
			cout << "输入第"<<(i+1)<<"个长方体的长:";
			cin >> l[i];
			cout << "输入第" << (i + 1) << "个长方体的宽:";
			cin >> w[i];
			cout << "输入第" << (i + 1) << "个长方体的高:";
			cin >> h[i];
		}


	}
	void out_result() {
		for (int i = 0; i < 3; i++) {
			double V = (l[i] * w[i] * h[i]);
			cout << "第" << (i + 1) << "个长方体的体积是：" << V << endl;

		}


	}

};
int main()
{
	lwh set1;
	set1.input_num();
	set1.out_result();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
