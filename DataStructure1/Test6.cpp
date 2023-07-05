#include <iostream>
#include <iomanip>
#include <fstream>
#include<string.h>
using namespace std;

/*
1、熟悉txt文件单列数据的查找；
2、尝试实现txt文件多列数据的查找；
3、尝试实现txt文件单列和多列数据的排序。
*/

const int n = 100;

struct Datas{
    char letter;
    int num1;
    int num2;
};

//冒泡排序
void bubbleSort(Datas datas[], int len){
    for(int i = 0; i < len - 1; i++){    //i控制排序的轮数
        for(int j = 0; j < len - i - 1; j++){   //j控制每轮需要比较的次数
            if(datas[j + 1].letter < datas[j].letter){
                Datas temp = datas[j];
                datas[j] = datas[j+1];
                datas[j + 1] = temp;
            }
        }
    }
}

//数据查找
void research(Datas *datas,int len){
    char letter;
    cout << endl <<"请输入开头字母：";
    cin >> letter;

    for(int i = 0; i < len; i++){
        if(datas[i].letter ==letter){
             cout << datas[i].letter << "\t" << datas[i].num1 << "\t" << datas[i].num2 <<endl;
        }
    }
    
}

int main() {
    Datas datas[n];
    int i = 0;
    int j = 0;
    int len = 0;

    ifstream inFile;    //文件输入流
    inFile.open("Data6.txt");//默认的就是程序存储的当前文件夹路径
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    //从文件中读取数据到结构体数组
    while (!inFile.eof())
    {
        inFile >> datas[i].letter >> datas[i].num1 >> datas[i].num2;
        i++;
        len++;
    }
    
    inFile.close();

    //遍历结构体数组
    cout << "排序前：" << endl;
    for(i = 0; i < len; i++){
        cout << datas[i].letter << "\t" << datas[i].num1 << "\t" << datas[i].num2 <<endl;
    }

    //排序
    bubbleSort(datas,len);

    //遍历结构体数组
    cout << "排序后：" << endl;
    for(i = 0; i < len; i++){
        cout << datas[i].letter << "\t" << datas[i].num1 << "\t" << datas[i].num2 <<endl;
    }

    //查找
    research(datas,len);

    return 0;
}