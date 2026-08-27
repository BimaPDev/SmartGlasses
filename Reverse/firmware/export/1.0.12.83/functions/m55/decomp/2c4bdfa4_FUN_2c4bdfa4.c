/* FUN_2c4bdfa4 @ 0x2c4bdfa4 */

int FUN_2c4bdfa4(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (7 < param_1) {
    return 0;
  }
  if (((int)(uint)*DAT_2c4bdfe0 >> (param_1 & 0xff)) << 0x1f < 0) {
    iVar1 = FUN_2c673c88();
    do {
      iVar2 = FUN_2c4bdf08(param_1,param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_2c673c88();
    } while ((uint)(iVar2 - iVar1) < 0x20);
  }
  return 0;
}

