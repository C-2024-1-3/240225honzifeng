// 004.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Student {
	friend Student Max(Student* stuarr);
public:
	Student(int a, int b) :id(a), mark(b) {};
	void getInformation() {
		cout << id << "号学生取得" << mark << "分的最高分" << endl;
	}
private:
	int id;
	int mark;
};
Student Max(Student* stuarr) {
	Student s_Max(0, -1);
	for (int i = 0; i < 5; i++)
	{
		if (stuarr[i].mark > s_Max.mark)
		{
			s_Max.mark = stuarr[i].mark;
			s_Max.id = stuarr[i].id;
		}
	}
	return s_Max;
 }

int main()
{
	Student stuarr[5] = {							//定义student类的数组
		  {1,20},{2,40},{3,23},{4,100},{5,96}
	};
	Student s_max = Max(stuarr);
	s_max.getInformation();
	return 0;
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
