/* FUN_140dfe1a @ 0x140dfe1a */

char FUN_140dfe1a(int param_1)

{
  char cVar1;
  
  cVar1 = (char)param_1;
  if (param_1 - 0x30U < 10) {
    cVar1 = cVar1 + -0x20;
  }
  else if (param_1 - 0x61U < 6) {
    cVar1 = cVar1 + -0x47;
  }
  else {
    if (5 < param_1 - 0x41U) {
      return '\0';
    }
    cVar1 = cVar1 + -0x27;
  }
  return cVar1;
}

