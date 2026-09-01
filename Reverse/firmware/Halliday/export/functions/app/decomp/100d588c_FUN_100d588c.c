/* FUN_100d588c @ 0x100d588c */

undefined4 FUN_100d588c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    uVar3 = (DAT_100d58c8 - DAT_100d58c4) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d58cc | uVar3,DAT_100d58d4,DAT_100d58d0,uVar3,param_4);
    uVar2 = 0xffffffed;
  }
  else {
    uVar2 = thunk_FUN_10115958();
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x34) = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}

