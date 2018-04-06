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
	char* str();
	/*int size() const noexcept;*/
	int length() const noexcept;
	int max_size() const noexcept;
	int capacity() const noexcept;
	
	//Constructors 
	/*String (const String& str);*/
	String (const char* chstr);

	//Destructor
	//~String();

	//Operators
	/*String& operator= (const String& str_);
	String& operator= (char* c);*/
	void operator= (char c);
	/*String operator+ (const String& lhs, const String& rhs);
	String operator+ (const String& lhs, char rhs);*/
	//String operator+ (const String& lhs, char* rhs);

	//Methods 	
	void resize (int n);
	void resize (int n, char c);
	/*void reserve (size_t n = 0);
	void clear() noexcept;
	bool empty() const noexcept;
	const char* c_str() const noexcept;
	*/
};
