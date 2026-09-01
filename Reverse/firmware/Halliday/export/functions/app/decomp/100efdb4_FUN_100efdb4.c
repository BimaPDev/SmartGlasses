/* FUN_100efdb4 @ 0x100efdb4 */

undefined4 FUN_100efdb4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*DAT_100efe44 == 0) || (-1 < (int)((uint)*(byte *)((int)DAT_100efe44 + 5) << 0x1f))) {
    FUN_100a5b78((DAT_100efe4c - DAT_100efe48) * 0x20 & 0xff00U | 0x590021,DAT_100efe54,DAT_100efe50
                 ,param_1,param_1,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_100ef8a4();
    if ((iVar2 == 0) || ((*(int *)(iVar2 + 8) == 0 && (*(int *)(iVar2 + 4) == 0)))) {
      FUN_100a5b78((DAT_100efe4c - DAT_100efe48) * 0x20 & 0xff00U | 0x5f0021,DAT_100efe54,
                   DAT_100efe58);
      uVar1 = 0xffffffea;
    }
    else {
      *DAT_100efe5c = *DAT_100efe5c + 1;
      iVar2 = FUN_10138bd6(param_1,param_2);
      uVar1 = 0;
      if (iVar2 != 0) {
        FUN_100ef8d0();
        uVar1 = 0xffffffdd;
      }
    }
  }
  return uVar1;
}

