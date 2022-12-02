#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//5、根据教材中的例题7-13，编写两个函数实现1)每个学生的平均成绩；2）求每门课的平均分，
//3）找出最高分对应的学生和课程（也就是行号和列号）
//自定义求学生平均分函数
void aver(int arr[3][3]) {
	int i = 0;
	int j = 0;
	float sum = 0;
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j <3; j++) {
			sum += arr[i][j];
		}
		float a = sum / 3.0;
		printf("第%d个同学的平均成绩为:%f\n", i + 1, a);
	}
}

//自定义求学生每门课程平均分函数
void aver1(int arr[3][3]) {
	int i = 0;
	int j = 0;
	float sum = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum += arr[j][i];
		}
		float a = sum / 3.0;
		printf("第%d门课程的平均分为:%2.2f\n", i + 1, a);
	}
}

//自定义求最高分的学生和课程
void max(int arr[3][3]) {
	int i = 0;
	int j = 0;
	int max1 = arr[0][0];
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 3; j++) {
			if (max1 < arr[i][j]) {
				max1 = arr[i][j];
			}
		}
	}
	printf("最高分%d的学生为：%d,对应的课程为：%d\n", max1, i , j );

}

int main() {
	int arr[3][3];
	printf("请输入3个学生3科的成绩\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	aver(arr);
	aver1(arr);
	max(arr);

	return 0;
}