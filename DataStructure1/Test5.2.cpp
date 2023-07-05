#include <iostream>
#include <iomanip>
#include <fstream>
#include<string.h>
using namespace std;

/*
完成数据txt文件输出，尝试实现一列一列的写到txt文件；
尝试实现一行一行的写到txt文件。
*/

int main(){     
	char a[10] = {'a','b','c','d','e','f','g','h','i'};
	int b[10] = {1,2,3,4,5,6,7,8,9};

	ofstream outf;    	//用文件输出流类定义对象
	outf.open("logger2.txt");  	//文件绝对路径（注意双斜杠取消转义）
	for(int i =0; i < 10; i++){
		if(a[i] || b[i]){	   	//s输出前判断数组是否为空
			outf<< a[i] << setw(3) << b[i] << endl;
		}
	}

	outf << endl;
	for(int i = 0; i < 10; i++){
		if(a[i]){	   	//s输出前判断数组是否为空
			outf << a[i] <<"  ";
		}
	}
	outf << endl;
	for(int i = 0; i < 10; i++){
		if(b[i]){	   	//s输出前判断数组是否为空
			outf << b[i] <<"  ";
		}
	}

	outf.close();
	return 0;
}