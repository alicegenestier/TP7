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
    
  //test opérateur + pour un char* à droite
  String str2(test3);
  char add1[7]={' ','W','o','r','l','d','\0'};
  char test4[7]={'a','\0'};
  String s4(test4);
  s4 = str2 + add1;
  cout<<s4.str()<<endl;


  //test constructeur par copie
  String s5(s1); //construteur par copie
	cout<<s5.str()<<endl; //affiche le string
	cout<<s5.capacity()<<endl; //taille mémoire allouée pour s5
	cout<<s5.size()<<endl;
  cout<<s5.size()<<endl;

  //test opérateur =(string)
  String s6 = s5;
  cout<<s6.str()<<endl; //affiche le string
	cout<<s6.capacity()<<endl; //taille mémoire allouée pour s5
	cout<<s6.size()<<endl;
  cout<<s6.size()<<endl;

  //test clear
  s5.clear();
  cout<<s5.str()<<endl;
	cout<<s5.capacity()<<endl;
  cout<<s5.size()<<endl;
  
  //test opérateur + string et char
  char legume[7]={'l','e','g','u','m','e','\0'};
  String s7(legume);
  char c = 's';
  String s8 = s7+c;
  cout<<s8.str()<<endl;


  //test empty
  char test11[9]={'p','a','s',' ','v','i','d','e','\0'};
  String s11(test11);
  cout<<s11.str()<<endl;
  if(s11.empty()){
    cout<<"string vide \n";
  }
  else {
    cout<<"string pas vide \n";
  }

    char test12[1]={'\0'};
    String s12(test12);
    cout<<s12.str()<<endl;
    if(s12.empty()){
      cout<<"string vide \n";
    }
    else {
      cout<<"string pas vide \n";
    }

   //test reserve
    char test13[17]={'p','a','s',' ','a','s','s','e','z',' ','d','e',' ','p','l','a','\0'};  
    String s13(test13);
    cout<<s13.str()<<endl;
         cout<<s13.capacity()<<endl;
    s13.reserve(19);
    cout<<s13.str()<<endl; //modifie pas le contenu du string
         cout<<s13.capacity()<<endl;   

   //test operateur =(char*)
   char egale[7]={'G','o','o','d','b','y','e'};
        char test14[6]={'H','e','l','l','o','\0'};
        String str14(test14);
   cout<<str14.str()<<endl;
   str14 = egale;
   cout<<str14.str()<<endl;

   //test operateur +(String)
   char cat[4]={'c','a','t','\0'};
   char dog[4]={'d','o','g','\0'};
        String str15(cat);
        String str16(dog);
   String str17 = str15 + str16;
   cout<<str17.str()<<endl;
   cout<<str17.length()<<endl;
   cout<<str17.capacity()<<endl;

	return 0;
} 







  
