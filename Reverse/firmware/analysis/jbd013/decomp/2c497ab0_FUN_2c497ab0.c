/* FUN_2c497ab0 @ 0x2c497ab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c497ab0(int param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint auStack_58 [4];
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  byte bStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  int iStack_34;
  
  uVar3 = _DAT_2c497b9c & param_2 << 10;
  iStack_34 = *_LAB_2c497ba0;
  uStack_44 = param_1;
  if (param_1 == 0) {
    FUN_2c4c01d0(0x21,uVar3,0);
  }
  else {
    FUN_2c4c01d0(0x4f,uVar3,0);
  }
  uStack_39 = (undefined1)(param_3 & 0x3ff);
  uStack_38 = 0xff;
  uStack_3c = 3;
  uStack_3b = (undefined1)(uVar3 >> 0x10);
  iVar2 = -(param_5 + 0xcU & 0xfffffff8);
  bStack_3a = (byte)(uVar3 >> 8) | (byte)((param_3 & 0x3ff) >> 8);
  FUN_2c6741b8(&uStack_3c,auStack_48 + iVar2,param_5 + 5);
  FUN_2c674668(param_4,(int)&uStack_44 + iVar2 + 1,param_5);
  if (param_5 != 0) {
    bVar1 = *param_4;
    *(undefined4 *)((int)auStack_58 + iVar2) = _LAB_2c497ba4;
    *(undefined4 *)((int)auStack_58 + iVar2 + 4) = 0;
    *(uint *)((int)auStack_58 + iVar2 + 8) = (uint)bVar1;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x222,_LAB_2c497bac,_LAB_2c497ba8);
  }
  if (uStack_44 == 0) {
    FUN_2c4c0158(0x21);
  }
  else {
    FUN_2c4c0158(0x4f);
  }
  if (*_LAB_2c497ba0 == iStack_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

