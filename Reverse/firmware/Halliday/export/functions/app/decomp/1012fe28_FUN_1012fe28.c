/* FUN_1012fe28 @ 0x1012fe28 */

undefined4 FUN_1012fe28(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 4) {
    *(char *)(param_1 + 0xc9) = (char)param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

