/* FUN_2c62a0a4 @ 0x2c62a0a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62a0a4(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 short param_5,uint param_6,byte param_7)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint auStack_28 [2];
  undefined4 uStack_20;
  int iStack_1c;
  
  uVar3 = (uint)param_7;
  iStack_1c = *_LAB_2c62a140;
  if (2 < uVar3) {
    auStack_28[0] = _LAB_2c62a144 | (param_3 & 0x7ff) << 10 | auStack_28[0] & 0x300;
    uVar2 = ((param_6 & 0xffffff) >> 0x10) * 3 + ((param_6 & 0xffff) >> 8) * 4 + (param_6 & 0xff) >>
            3;
    uStack_20 = param_2;
    if (uVar3 < 0xfd) {
      sVar1 = FUN_2c611c18(auStack_28,param_4,(int)param_5);
      uVar2 = (uVar3 * uVar2 + (int)(short)(0xff - (ushort)param_7) * (int)sVar1 & 0xffff) >> 8;
    }
    else {
      uVar2 = uVar2 & 0xff;
    }
    FUN_2c611d2c(auStack_28,param_4,(int)param_5,uVar2);
  }
  if (*_LAB_2c62a140 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

