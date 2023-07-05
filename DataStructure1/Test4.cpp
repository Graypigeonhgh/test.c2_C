#include <iostream>
#include <iomanip>
#include <fstream>
#include<string.h>
using namespace std;

/*
通过txt文件读入双列数据（姓名+成绩），将数据放入两个一维数组或一个二维数组或一个结构体；
根据分数找出最大值，输出分值最大的学生姓名和分数。
*/

int main() {
    double sum = 0; 
    double x;
    double max;
    double a[5];
    char b[5][10];
    int i=0;
    int j,k;
    int num;
    ifstream inFile;
    
    inFile.open("StudentScore_DoubleRaw.txt");//默认的就是程序存储的当前文件夹路径
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    inFile>>num;//读取待检测的任务数
     while(num--) //执行次数 
    {
        inFile>>b[i];//读取第1列  人名 
        inFile>>a[i];//读取第2列  分数 
        cout << setiosflags(ios_base::left) << setw(5) << b[i] << a[i] << endl;//指定宽度和对齐方式
        i++;
    }

    max=a[0];
	for(j=0;j<i;j++)    //查找最大值
	{
		if(a[j]>max){
            max=a[j];
        }
	}
	for(k=0;k<i;k++)    //查找最大值索引
	{
		if(a[k]==max) 
            break;
	}

    inFile.close();
    cout << "最大值="<< max<<endl;
    cout << "姓名+分数:" << b[k] << "  " << a[k] <<endl;

    return 0;
}