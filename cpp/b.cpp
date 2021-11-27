#include <boost/lambda/lambda.hpp>
#include <iterator>
#include <algorithm>
#include <iostream>

using namespace boost::lambda;
typedef std::istream_iterator<int> in;

int main(int argc, char *argv[])
{
std::for_each (
	in(std::cin), in(),
	std::cout << (_1 * 3) << " ");

return 0;
}
