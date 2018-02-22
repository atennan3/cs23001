//

#include <iostream>

int fibonacci(unsigned int n) {
  if (n == 0 || n == 1)
    return n;

  return (fibonacci(n-1) + fibonacci(n-2));
}

int fibonacciTr(unsigned int n, unsigned int left, unsigned int right) {
  if (n == 0)
    return left;

  if (n == 1)
    return right;

  return fibonacciTr(n-1, right, left+right);
}




int main(){
  
  unsigned int n = 0;
  std::cout << "Enter a number: ";
  std::cin >> n;

  std::cout << "NORMAL RECURSIVE VERSION\n";
  for (unsigned int i = 0; i <= n; ++i){
    std::cout << fibonacci(i) << std::endl;
  }

  std::cout << "TAIL RECURSIVE VERSION\n";
  for (unsigned int i = 0; i <= n; ++i){
    std::cout << fibonacciTr(i, 0, 1) << std::endl;
  }
  
  return 0;
}
