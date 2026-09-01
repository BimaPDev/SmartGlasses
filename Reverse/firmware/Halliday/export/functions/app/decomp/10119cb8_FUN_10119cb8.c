/* FUN_10119cb8 @ 0x10119cb8 */

undefined4 FUN_10119cb8(uint param_1,char *param_2)

{
  char cVar1;
  
  if (param_1 < 10) {
    cVar1 = (char)param_1 + '0';
  }
  else {
    if (0xf < param_1) {
      return 0xffffffea;
    }
    cVar1 = (char)param_1 + 'W';
  }
  *param_2 = cVar1;
  return 0;
}

