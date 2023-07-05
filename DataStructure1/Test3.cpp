#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;    //释放C++提供的标准库的函数所在的命名空间（std)

/*
继续熟悉txt文件读入数据，通过txt文件读入单列数据，并找出最大数据输出屏幕
和txt输出，要把txt读入的数据放一个数组并求最大值。
*/

int main() {
    double sum = 0;
    double x;
    double max;
    double a[100];
    int i=0;
    int j;

    ifstream inFile;    //文件输入流
    inFile.open("StudentScore_SingleRaw.txt");//默认的就是程序存储的当前文件夹路径
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    while (inFile >> x) {   //读取并输出数据到数组
        sum += x;   //求和
        a[i]=x;     //数据放入数组 
        cout <<a[i]<<endl;  
        i++;
    }

    max=a[0];
	for(j=0;j<i;j++){
		if(a[j]>max){
            max=a[j];
        }
	}

    inFile.close();
    cout << "Sum = " << sum << endl; 
    cout << "最大值= "<< max;
    return 0;
}