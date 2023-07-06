#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>

using namespace std;
const int n = 200;

struct Student{     //学生考勤数据类

    struct Classes{     //课的节次类
        char name[20];  //姓名
        long long num;  //学号
    }classes1,classes2,classes3,classes4;
};

struct StudentList{ //学生名单数据类
    char name[20];  //姓名
    long long num;  //学号
    int count = 0;  //学生考勤次数
};

/**
 * 统计学生考勤次数
*/
void attendanceCount(StudentList stuList[],Student student[]){
    for(int i = 0; i <93; i++){
        for(int j = 0; j < 93; j++){    //比较字符串是否相等
            if(strcmp(student[j].classes1.name , stuList[i].name)==0 || strcmp(student[j].classes2.name , stuList[i].name)==0 || 
            strcmp(student[j].classes3.name , stuList[i].name)==0 || strcmp(student[j].classes4.name , stuList[i].name)==0){
                stuList[i].count++;
            }
        }
    }
}

/**
 * 将学生信息按考勤次数由高到低排序
*/
void bubbleSort(StudentList stuList[],int len){
    int i,j;
    for(i = 0; i < len - 1; i++){
        for(j = 0; j < len - 1 -i; j++){
            if(stuList[j+1].count > stuList[j].count){
                StudentList temp = stuList[j];
                stuList[j]  = stuList[j+1];
                stuList[j+1]  = temp;
            }
        }
    }
}

/**
 * 读取4次上机考勤数据函数
*/
void readAttendance(Student student[]){ 
    int i = 0;
    int len1 = 0,len2= 0,len3 = 0 ,len4 = 0,len5 = 0;

     ifstream inFile1,inFile2,inFile3,inFile4,inFile5;  //文件输入流
    inFile1.open("Attendance1.txt");     //默认的就是程序存储的当前文件夹路径
    inFile2.open("Attendance2.txt");
    inFile3.open("Attendance3.txt");
    inFile4.open("Attendance4.txt");
    inFile5.open("Attendance4.txt");

    if (!inFile1 && !inFile2 && !inFile3 && !inFile4) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    //读取第一次考勤数据
    while (!inFile1.eof()){   //eof：文件结束标志
        inFile1 >>student[i].classes1.name >> student[i].classes1.num;
        i++;
        len1++;
    }
    inFile1.close();

    //读取第二次考勤数据
    i = 0;
    while (!inFile2.eof()){   //eof：文件结束标志
        inFile2 >>student[i].classes2.name >> student[i].classes2.num;
        i++;
        len2++;
    }
    inFile2.close();

    //读取第三次考勤数据
    i = 0;
    while (!inFile3.eof()){   //eof：文件结束标志
        inFile3 >>student[i].classes3.name >> student[i].classes3.num;
        i++;
        len3++;
    }
    inFile3.close();

    //读取第四次考勤数据
    i = 0;
    while (!inFile4.eof()){   //eof：文件结束标志
        inFile4 >>student[i].classes4.name >> student[i].classes4.num;
        i++;
        len4++;
    }
    inFile4.close();

    //读取第五次考勤数据
    i = 0;
    while (!inFile4.eof()){   //eof：文件结束标志
        inFile4 >>student[i].classes4.name >> student[i].classes4.num;
        i++;
        len5++;
    }
    inFile5.close();

}

/**
 * 读取班级点名册名单数据函数
*/
void readStudentList(StudentList stuList[]){
    int i = 0;
    int len = 0;
    ifstream inFile;  //文件输入流
    inFile.open("StudentList.txt");     //默认的就是程序存储的当前文件夹路径

    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    //读取点名册名单数据
    while (!inFile.eof()){   //eof：文件结束标志
        inFile >>stuList[i].name >> stuList[i].num;
        i++;
        len++;
    }

    inFile.close();
}

/**
 * 将点名册名单数据中的姓名,学号和考勤次数输出到TXT文件
*/
void writeStuList(StudentList stuList[]){
    ofstream outf;         //用文件输出流类定义对象
    outf.open("AttendanceData.txt");   
    for(int i =0; i < 11; i++){
        if(stuList[i].name){       //输出前判断数组是否为空
            outf << stuList[i].name << "\t" << stuList[i].num << "\t" << stuList[i].count << endl;
        }
    }
    outf.close();
}

/**
 * 查找学生姓名
*/
void search(StudentList stuList[],int len){
    int i;
    char name[100];
    long long num;
    cout << "请输入学生学号：";
    cin >> num; 
    
    for(i = 0; i < len ; i++){
        if(num ==stuList[i].num){  
            cout << stuList[i].name << "\t" << stuList[i].num << "\t" << stuList[i].count <<endl;
            break;
        }
    }
    if(i == len){
        cout <<"查询不到该学生的数据" << endl;
    }

}

int main(){
    Student student[n];
    StudentList stuList[n];
    bool flag = true;
    int len = 11;
    int c;

    while(flag){
        cout << "      ——学生上机考勤数据统计系统——  " << endl;
        cout << "        1.读取学生上机考勤数据         " << endl;
        cout << "        2.读取班级点名册名单数据       " << endl;
        cout << "        3.考勤统计                    " << endl;
        cout << "        4.考勤数据查找                " << endl;
        cout << "        5.考勤数据一键排序并输出       " << endl;
        cout << "        6.退出                       " << endl;
        cout <<"请选择菜单序号(1-6): ";
        cin >> c;
        switch (c){
        case 1:
            cout << "读取学生上机考勤数据" << endl;
            readAttendance(student);
            cout << "上机考勤数据读取成功" << endl;
            cout << "****************************************" << endl;
            break;
        case 2:
            cout << "读取班级点名册名单数据" << endl;
            readStudentList(stuList);
            cout << "读取点名册名单数据成功" << endl;
            cout << "****************************************" << endl;
            break;
        case 3:
            cout << "考勤统计" << endl;
            attendanceCount(stuList,student);  //统计学生考勤次数
            writeStuList(stuList);
            cout << "统计完成" << endl;
            cout << "****************************************" << endl;
            break;
        case 4:
            cout << "考勤数据查找" <<endl;
            search(stuList,len);
            cout << "****************************************" << endl;
            break;
        case 5:
            cout << "考勤数据一键排序并输出" << endl;
            bubbleSort(stuList,len);
            writeStuList(stuList);
            cout << "考勤数据排序并输出完成" << endl;
            cout << "****************************************" << endl;
            break;
        case 6:
            //flag = false;
            cout << "已退出" << endl;
            exit(0);    //正常运行程序并退出程序
            break; 
        default:
            cout << "输入错误，请重新输入" << endl;
            break;
        }
    }
    return 0;
}
