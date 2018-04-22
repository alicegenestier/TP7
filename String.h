class String {
   
	private : 

	protected :

	//Attributs

	char* str_;
	int size_string_;
	int size_array_;
	static const int MAX_SIZE_;
	public :
	//Getters
	char* str(); //appelé c-str dans l'énoncé du TP
	int size() const noexcept;
	int length() const noexcept;
	int max_size() const noexcept;
	int capacity() const noexcept;
	
	//Constructors 
	String (const String& str);
	String (const char* chstr);

	//Destructor
	//~String();

	//Operators
	//=
	String& operator= (const String& str);
	/*String& operator= (char* c);*/
	
	//opérateur = entre une String et un char
	void operator= (char c);
	
	//+
	//String operator+ (const String& lhs, const String& rhs);
	
	//opérateur + entre une String et un char* à droite
	//appelé en tant que friend donc la fonction est définie en dehors de la classe
	friend String operator + (const String s, char* pt_c);
	
  //opérateur + entre un String et char à droite
  friend String operator+ (const String& s, char c);


	//Test
	//bool empty();

	//Methods
	//coupe la String pour qu'elle ne fasse plus que la longueur n 	
	void resize (int n);
	//allonge la longueur de la String et ajoute le caractère c dans toutes les cases ajoutées
	void resize (int n, char c);
  void clear();
	/*void reserve (size_t n = 0);
	bool empty() const noexcept;*/
};

//définition de l'opérateur + d'une String par un char* à droite
String operator + (const String s, char* pt_c);
