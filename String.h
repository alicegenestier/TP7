class String {
   
	private : 

	protected :

/*******************
      Attributs
********************/
  
	char* str_;
	int size_string_;
	int size_array_;
	static const int MAX_SIZE_;

	public :

/*******************
      Getters
********************/
  
	char* str();                      //appelé c-str dans l'énoncé du TP
	int size() const noexcept;
	int length() const noexcept;
	int max_size() const noexcept;
	int capacity() const noexcept;
	
	//Constructeurs 
	String (const String& str);
	String (const char* chstr);

	//Destructeur
	~String();


/*******************
      Méthodes
********************/

	//RESIZE :
  //coupe la String pour qu'elle ne fasse plus que la longueur n 	
	void resize (int n);
	//allonge la longueur de la String et ajoute le caractère c dans toutes les cases ajoutées
	void resize (int n, char c);

  //CLEAR : efface le contenu du string
  void clear();

  //RESERVE : demande d'augmenter la longueur du tableau (capacity)
  void reserve (int n );

  //EMPTY : teste si string vide
	bool empty() const noexcept;


/*******************
     Opérateurs
********************/

	//OPERATEURS =
  
  //Opérateur = entre une String et un char
	void operator= (char c);

  //Opérateur = entre deux String
	String& operator= (const String& str);
	
	//Opérateur = entre une String et un char*
  String& operator= (char* c);
	
	//OPERATEURS +
	//appelés en tant que friend donc la fonction est définie en dehors de la classe

  //Opérateur + entre un String et char à droite
  friend String operator+ (const String& s, char c);

	//Opérateur + entre deux String
  friend String operator+ (const String& lhs, const String& rhs);
	
	//Opérateur + entre une String et un char* à droite
	friend String operator + (const String s, char* pt_c);
	

};

//définitions des opérateurs +
String operator+ (const String& s, char c);
String operator+ (const String& lhs, const String& rhs);
String operator+ (const String s, char* pt_c);
