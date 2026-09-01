/* FUN_10119c88 @ 0x10119c88 */

undefined4 FUN_10119c88(int param_1,char *param_2)

{
  char cVar1;
  
  if ((param_1 - 0x30U & 0xff) < 10) {
    *param_2 = (char)(param_1 - 0x30U);
  }
  else {
    if (param_1 - 0x61U < 6) {
      cVar1 = (char)param_1 + -0x57;
    }
    else {
      if (5 < param_1 - 0x41U) {
        return 0xffffffea;
      }
      cVar1 = (char)param_1 + -0x37;
    }
    *param_2 = cVar1;
  }
  return 0;
}

