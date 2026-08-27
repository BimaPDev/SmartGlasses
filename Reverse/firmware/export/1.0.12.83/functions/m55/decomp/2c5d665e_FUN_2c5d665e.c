/* FUN_2c5d665e @ 0x2c5d665e */

void FUN_2c5d665e(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char in_ZR;
  
  if (in_ZR == '\0') {
    if (param_1 == 0) {
      uVar1 = 2;
    }
    else if (param_1 == 5) {
      uVar1 = 3;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  iVar2 = func_0x2c63fc88(uVar1,param_2,param_3,param_4,param_4);
  if ((iVar2 != 0) && (iVar2 = thunk_FUN_2c489a64(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1ec,DAT_2c63b924,DAT_2c63b920,DAT_2c63b91c,1);
  }
  return;
}

