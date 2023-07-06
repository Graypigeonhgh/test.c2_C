#pragma once

struct StudentData {
    long long studentID;
    string name;
    int count;
};


void bubbleSort(StudentData arr[], int size);
int ReadBasicData(string path);
void ReadKaoQinData(string path);
int FindByStudentID(long long targetID);
int FindByName(string name);
void ShowStudent(StudentData stu);