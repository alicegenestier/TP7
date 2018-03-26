class String {
   
	private : 

	protected :

	//Attributs

	c-string str_;
	size_t size_string_;
	size_t size_array_;
	static size_t MAX_SIZE_;
	public :
	//Getters
	size_t size() const noexcept;
	size_t length() const noexcept;
	size_t max_size() const noexcept;
	size_t capacity() const noexcept;
	
	//Constructors 
	string (const string& str_);
	string (const c-string str_);
	//Destructor
	~string();
	//Operators
	string& operator= (const string& str_);
	string& operator= (char* c);
	string& operator= (char c);
	string operator+ (const string& lhs, const string& rhs);
	string operator+ (const string& lhs, char rhs);
	string operator+ (const string& lhs, char* rhs);
	//Methods 	
	void resize (size_t n);
	void resize (size_t n, char c);
	size_t capacity() const noexcept;
	void reserve (size_t n = 0);
	void clear() noexcept;
	bool empty() const noexcept;
	const char* c_str() const noexcept;
	
