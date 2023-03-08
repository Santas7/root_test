#include <iostream>
#include <string>
#include <limits>

std::string to_binary_string(int n)
{
    if (n == std::numeric_limits<int>::min())
        return "-1" + std::string(std::numeric_limits<int>::digits, '0');
    std::string buffer;
    buffer.reserve(std::numeric_limits<int>::digits + 1); 
    bool negative = (n < 0);
    if (negative) n = -n;
    do
    {
        buffer += char('0' + n % 2);
        n = n / 2;
    } while (n > 0);
    if (negative) buffer += '-';
    return std::string(buffer.crbegin(), buffer.crend());
}

int get_double_value(int x){
  return x*x;
}

void sqrt(int x){
  return sqrt(x);
}

int main(){
  std::cout << "Hello, world!" << std::endl;
  return 0;
}
