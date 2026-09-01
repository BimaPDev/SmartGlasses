/* FUN_1013ce5a @ 0x1013ce5a */

uint FUN_1013ce5a(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1;
  if (param_2 != -1 || param_1 != 0xffffffff) {
    if (param_1 == 0 && param_2 == 0) {
      uVar1 = FUN_10115958();
      return uVar1;
    }
    uVar1 = -param_1 - 2;
    if ((int)((-1 - param_2) - (uint)(0xfffffffe < param_1)) < 0) {
      iVar2 = FUN_10115958();
      if (param_2 < (int)(uint)(param_1 == 0)) {
        param_1 = 1;
      }
      uVar1 = param_1 + iVar2;
    }
  }
  return uVar1;
}

