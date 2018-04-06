#include <iostream>
#include "String.h"
using namespace std;

int main() {
    //Test Hello World!
	cout<<"Hello World!\0"<<endl;
	//création d'un tableau de caractères
    char test[3]={'a','b','\0'};
    cout<<test<<endl;
    //test du constructeur à partir d'un char*
	String s1(test);
	cout<<s1.str()<<endl;
	//taille de la chaine de caractère s1
	cout<<s1.length()<<endl;
	cout<<s1.max_size()<<endl;
	//test resize (int n)
	s1.resize(23);
	//taille mémoire allouée pour s1
	cout<<s1.capacity()<<endl;
	//création d'un second tableau de caractères
	char test1[6]={'a','l','i','c','e','\0'};
	//création d'une string à partir de ce tableau de caractères
	String s2(test1);
	//test resize (int n)
	s2.resize(4);
	cout<<s2.str()<<endl;
	cout<<s2.length()<<endl;
	cout<<s2.capacity()<<endl;
	//création d'un troisième tableau de caractères
	char test2[8]={'B','O','N','J','O','U','R','\0'};
	//création d'une string à partir de ce tableau de caractères
	String s3(test2);
	cout<<s3.str()<<endl;
	cout<<s3.capacity()<<endl;
	s3.resize(6);
	cout<<s3.str()<<endl;
	cout<<s3.capacity()<<endl;
	//tests de resize (int n, char c)
	s3.resize(10,'Y');
	cout<<s3.str()<<endl;
	cout<<s3.capacity()<<endl;
	s3.resize(-1,'R');
	cout<<s3.str()<<endl;
	cout<<s3.capacity()<<endl;
	s3.resize(3,'R');
	cout<<s3.str()<<endl;
	cout<<s3.capacity()<<endl;
	//test opérateur = pour un char
	char test3[6]={'H','e','l','l','o','\0'};
	String str1(test3);
    str1 = 'x';
    cout<<str1.str()<<endl;
    cout<<str1.length()<<endl;
    cout<<str1.capacity()<<endl;
	return 0;
} 







  
