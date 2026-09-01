/* FUN_100b5864 @ 0x100b5864 */

undefined4 FUN_100b5864(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = thunk_FUN_1009f30c(0x108,DAT_100b58c4,param_3,param_4,param_1,param_1,param_3);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_1006c468(param_1,iVar1);
    FUN_1012d1f4(iVar1);
    uVar3 = (DAT_100b58c8 - DAT_100b58cc) * 0x20 & 0xff00;
    if (iVar2 == 0) {
      FUN_100a5b78(uVar3 | 0x2f0031,DAT_100b58d4,DAT_100b58d8,param_1);
      uVar4 = 1;
    }
    else {
      FUN_100a5b78(uVar3 | 0x2b0031,DAT_100b58d4,DAT_100b58d0,param_1);
      uVar4 = 0;
    }
  }
  return uVar4;
}

