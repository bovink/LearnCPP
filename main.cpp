#include <string>
#include <iostream>

using namespace std;
void print(const int *v) {

	cout << *v << endl;
}
void testStringFind() {
	string s = "aa/bb/cc";
	int i = s.find("/");

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

	testStringFind();
	return 0;
}
