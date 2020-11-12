#include <string>
#include <iostream>

using namespace std;
void print(const int *v) {

	cout << *v << endl;
}
void testConstructor(const string&s,const int&end ){

	auto str = string(s.begin(),s.begin()+end);

	cout << str <<endl;

}

void testFind(const string& s) {

	auto it = s.find('?');

	auto str = string(s.begin(),s.begin()+it);

	cout << str <<endl;
}

void testrFind(const string& s) {

	auto it = s.rfind('?');

	auto str = string(s.begin()+it,s.end());

	cout << str <<endl;
}

void testStringFind() {
	string s = "aa/bb/cc";
	int i = s.find("/",3);


	print(&i);
	i = s.rfind("/");
	print(&i);
//	s.replace(s.begin(), s.end(), "a");
    /**
     *  @brief  Replace characters with multiple characters.
     *  @param __pos  Index of first character to replace.
     *  @param __n1  Number of characters to be replaced.
     *  @param __n2  Number of characters to insert.
     *  @param __c  Character to insert.
     *  @return  Reference to this string.
     *  @throw  std::out_of_range  If @a __pos > size().
     *  @throw  std::length_error  If new length exceeds @c max_size().
     *
     *  Removes the characters in the range [pos,pos + n1) from this
     *  string.  In place, @a __n2 copies of @a __c are inserted.
     *  If @a __pos is beyond end of string, out_of_range is thrown.
     *  If the length of result exceeds max_size(), length_error is
     *  thrown.  The value of the string doesn't change if an error
     *  is thrown.
    */
	auto n = s.replace(3, 0, 2, '1');
	cout <<n<<endl;
	string ns = "dd";
	n.insert(2,ns);
	cout <<s<<endl;
	cout <<n<<endl;
}

int main() {
	testFind("11?22");
	testrFind("11?22");
	testConstructor("11?22",3);

	testStringFind();
	string s = string(3,'1');
	cout <<s<<endl;;
	const char *cc = "aaaaaaaaaaaaaal";
	auto s2 = string(cc);
	cout << s2 << endl;
	cout << s2.max_size() << endl;
	cout << s2.size() << endl;
	cout << s2.length() << endl;
	s2.resize(25,'1');
	cout << s2 << endl;
	cout << s2.data() << endl;
	cout << s2.c_str() << endl;
	cout << s2[26] << endl;
//	cout << s2.at(26) << endl;


	return 0;
}
