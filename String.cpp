#include"String.h"
#include <iostream>
using namespace std;

const int String::MAX_SIZE_=100;

//Constructors
/*Constructeur à partir d'un char**/
String::String (const char* chstr) {
	int i=0;
	while (chstr[i]!='\0') {//On cherche à savoir la taille de la string pour allouer de la mémoire
		i++;
	}
	char* cstring=new char[i+1];
	for (int j=0; j<=i; j++){
		cstring[j]=chstr[j];
	}
	cstring[i+1]='\0';
	str_=cstring;
	size_string_=i;
	size_array_=i+1;
}

/*Constructeur par copie**/
String::String(const String& str){
  
}


//Getters
//pointeur vers la String
char* String::str() {
    return str_;
}

//taille de la chaine de caractère; taille de la String
int String::length() const noexcept{
	return size_string_;
}

//taille maximale de la mémoire qui peut être allouée pour une String
int String::max_size() const noexcept{
	return MAX_SIZE_;
}

//Taille du tableau alloué pour la String
int String::capacity() const noexcept{
	return size_array_;
}

//Methodes
/*Coupe la String
Précondition : n doit être compris entre 0 et size_string_
Procédure donc ne renvoie pas de résultat mais modifie l'objet courant */
void String::resize (int n) {
  if (n>size_string_) {
    std::cout<<"L'entier n est plus grand que la taille de la string. S'il vous plait, entrer un entier inférieur ou égale à "<<size_string_<<endl;
  }
  else if (n<0) {
    std::cout<<"L'entier n n'est doit pas être inférieur à 0"<<endl;
  }
  else {
    int i=0;
	  while (i<n){
	    ++i;
	  }
	  str_[i]='\0';
	  size_string_=i;
  }
}

/*Allonge la String et ajoute dans les cases mémoires ajoutée le caractère entré en paramètre.
Précondition : n doit être un entier compris entre size_string_+1 et max_size
Procédure donc ne renvoie pas de résultat mais modifie l'objet courant*/
void String::resize (int n, char c) {
  if (n>size_array_-1){
    if (n>=MAX_SIZE_){
      std::cout<<"L'entier n est plus grand que le maximum de mémoire qui peut être alloué pour une String. S'il vous plait, entrer un entier inférieur strictement à "<<MAX_SIZE_<<endl;
    }
    else {
	    char* cstring=new char[n+1];
	    for (int j=0; j<=size_string_; ++j){
		    cstring[j]=str_[j];
	    }
	    for (int j=size_string_; j<=n; ++j){
	      cstring[j]=c;
	    }
	  cstring[n+1]='\0';
	  delete str_;
	  str_=cstring;
	  size_string_=n;
	  size_array_=n+1;
	  }
  }
  else {
    if (n<0) {
      std::cout<<"L'entier n n'est doit pas être inférieur à 0"<<endl;
    }
    else if (n<=size_string_) {
      std::cout<<"L'entier n est plus petit que la taille de la string. S'il vous plait, entrer un entier supérieur à "<<size_string_<<endl;
    }
    else{
       int i=size_string_;
       while (i<n) {
        str_[i]=c;
        ++i;
       }
      str_[i]='\0';
	    size_string_=i;
    }
  }
}

//Operators
//opérateur = entre une String et un char
void String::operator= (char c){
  char* cstring=new char[2];
  cstring[0]=c;
  cstring[1]='\0';
  delete str_;
  str_=cstring;
  size_string_=1;
  size_array_=2;
}

//opérateur + entre une String et un char* à droite
String operator + (const String s, char* pt_c){
    String s1(s.str_);
    int i=0;
    while (pt_c[i]!='\0'){
        ++i;
    }
    char* cstring=new char[s1.size_array_+i];
    for (int i=0; i<=s1.size_string_; ++i){
        cstring[i]=s1.str_[i];
    }
    for (int j=s1.size_string_; j<s1.size_string_+i; ++j){
        cstring[j]=pt_c[j-s1.size_string_];
    }
    cstring[s1.size_array_+i]='\0';
    delete s1.str_;
    s1.str_=cstring;
    s1.size_string_+=i;
    s1.size_array_+=i;
    return(s1);
}


//Destructor
/*String::~String(){
  delete str_;
}*/



