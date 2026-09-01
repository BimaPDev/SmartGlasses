/* FUN_100bbd8c @ 0x100bbd8c */

undefined4 FUN_100bbd8c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_100a5b78((DAT_100bbe04 - DAT_100bbe00) * 0x20 & 0xff00U | 0x400032,DAT_100bbe0c,DAT_100bbe08,
               param_2,param_1,param_2,param_3);
  if (param_1 < 4) {
    FUN_100bbd70();
    *(int *)(DAT_100bbe10 + param_1 * 4) = param_2;
    if (param_1 == 2) {
      FUN_10136bf2(param_2);
    }
    else {
      FUN_10136bee();
    }
    FUN_100bbd80();
    if (param_1 == 0) {
      FUN_100bf278(param_2 != 0);
      uVar1 = 0;
    }
    else {
      if (param_1 == 2) {
        FUN_100bf298(param_2 != 0);
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

