/* FUN_2c606abc @ 0x2c606abc */

void FUN_2c606abc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  int local_14;
  
  local_14 = *DAT_2c606b68;
  iVar1 = FUN_2c607214();
  if ((int)(param_2 << 0x1b) < 0) {
    FUN_2c6052c8(param_1,auStack_24,auStack_1c);
    FUN_2c6078f0(param_1,auStack_24);
    FUN_2c6078f0(param_1,auStack_1c);
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & ~param_2;
  if ((int)(param_2 << 0x1f) < 0) {
    FUN_2c607df0(param_1);
    iVar2 = FUN_2c607214(param_1);
    if (iVar2 != 0) {
      FUN_2c6041d4(param_1);
      FUN_2c607248();
      FUN_2c607248(param_1);
    }
  }
  iVar2 = FUN_2c607214(param_1);
  if ((iVar2 == iVar1) && ((param_2 & 0x1800000) == 0)) {
    if (*DAT_2c606b68 == local_14) {
      return;
    }
  }
  else {
    FUN_2c6041d4(param_1);
    if (*DAT_2c606b68 == local_14) {
      FUN_2c607248();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

