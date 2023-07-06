#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "KaoQin(4).h"
using namespace std;

#define MAX_STUDENTS 100
StudentData students[MAX_STUDENTS];
int stuCount = 0;

int main() {
    
    stuCount = ReadBasicData("Student.txt");
    
    cout << "=============学生考勤查询系统=============" << endl;

    while (1) {
        cout << endl;
        cout << "1.加载考勤数据" << endl;
        cout << "2.显示考勤信息" << endl;
        cout << "3.根据学号查找信息" << endl;
        cout << "4.根据姓名查找信息" << endl << endl;
        cout << "请输入功能序号: ";

        int x = 0, i = 0;
        StudentData find;
        cin >> x;

        if (x == 1) {
            ReadKaoQinData("Student.txt");
        }
        else if (x == 2) {
            for (int i = 0; i < stuCount; i++) {
                ShowStudent(students[i]);
            }
        }
        else if (x == 3) {
            cout << "【查询信息】请输入学号: ";
            if (cin >> find.studentID) {
                i = FindByStudentID(find.studentID);
                if (i == -1) {
                    cout << "查无此人";
                }
                else {
                    ShowStudent(students[i]);
                }
            }

        }
        else if (x == 4) {
            cout << "【查询信息】请输入姓名: ";
            if (cin >> find.name) {
                i = FindByName(find.name);
                if (i == -1) {
                    cout << "查无此人";
                }
                else {
                    ShowStudent(students[i]);
                }
            }

        }
    }





    return 0;
}

void ShowStudent(StudentData stu) {
    cout << stu.studentID << std::setw(16) << std::right << stu.name << std::setw(5) << std::right << stu.count << endl;
}

int ReadBasicData(string path) {
    ifstream file;
    int count = 0;
    file.open(path);
    while (count < MAX_STUDENTS) {
        if (!(file >> students[count].name && file >> students[count].studentID)) {
            break;
        }
        count++;
    }
    file.close();

    //冒泡排序，为后期二分法查找服务
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].studentID > students[j + 1].studentID) {
                // 交换两个学生数据
                StudentData temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    return count;
}


void bubbleSort(StudentData arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].count < arr[j + 1].count) {
                StudentData temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ReadKaoQinData(string path) {
    ifstream file;
    int i = 0;
    file.open(path);
    StudentData stu;
    while (file >> stu.name && file >> stu.studentID) {
        i = FindByStudentID(stu.studentID);
        if (i != -1) {
            students[i].count++;
        }
    }
    file.close();
}

//二分法查找学号
int FindByStudentID(long long targetID) {
    int left = 0; 
    int right = stuCount;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (students[mid].studentID == targetID) {
            return mid;  // 找到目标学生ID，返回索引
        }
        else if (students[mid].studentID < targetID) {
            left = mid + 1;  // 目标学生ID在右半部分
        }
        else {
            right = mid - 1;  // 目标学生ID在左半部分
        }
    }
    return -1;  // 没有找到目标学生ID
}

//枚举法查找姓名
int FindByName(string name) {
    for (int i = 0; i < stuCount; i++) {
        if (students[i].name == name) {
            return i;
        }
    }

    return -1;  // 没有找到目标学生ID
}