const char* even_or_odd(int number)
{
  // return a statically allocated string,
  // for example a string literal
  char* res = (number % 2 == 0) ? "Even" : "Odd";
  return res;
}
​