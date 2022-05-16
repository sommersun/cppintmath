int UnsignedBitCount(cpp_int number){
  int len = 0;
  while (number != 0) {
      number = number>>1;
      len++;
  }
  return len;
}

cpp_int UnsignedBitCountCpp(cpp_int number){
  cpp_int len = 0;
  while (number != 0) {
      number = number>>1;
      len++;
  }
  return len;
}
