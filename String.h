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
	String (const String& str_);
	String (const c-string str_);

	//Destructor
	~String();

	//Operators
	String& operator= (const String& str_);
	String& operator= (char* c);
	String& operator= (char c);
	String operator+ (const String& lhs, const String& rhs);
	String operator+ (const String& lhs, char rhs);
	String operator+ (const String& lhs, char* rhs);

	//Methods 	
	void resize (size_t n);
	void resize (size_t n, char c);
	size_t capacity() const noexcept;
	void reserve (size_t n = 0);
	void clear() noexcept;
	bool empty() const noexcept;
	const char* c_str() const noexcept;
	
