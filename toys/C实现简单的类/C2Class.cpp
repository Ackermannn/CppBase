#include <stdio.h>
#include <stdlib.h>

// 属性定义
struct Person
{
	int age;
	char name[20];
	void (*speak)(Person* p);

};
// 方法定义
void speak(Person* p) {
	printf("My name is %s, age is %d", p->name, p->age);
}
// 构造方法
Person* new_Person(int age, char name[20]) {
	Person* p = (Person*)malloc(sizeof(Person));
	p->age = age;
	for (int i = 0; i < 20; i++) {
		p->name[i] = name[i];
	}
	p->speak = speak;
	return p;
}


int main() {
	char name[20] = "Tom\0";
	Person* p = new_Person(23, name); // new 一个类
	p->speak(p); // 调用方法
	delete p;
	return 0;

}
