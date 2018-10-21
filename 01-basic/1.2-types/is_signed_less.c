bool is_negative(unsigned a) {
  unsigned const int_max=UINT_MAX/2;
  return a>int_max;
}
bool is_signed_less(unsigned a, unsigned b) {
  if (is_negative(b) && !is_negative(a)) return false;
  else return a<b;
}
