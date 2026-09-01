/* FUN_100b4e60 @ 0x100b4e60 */

undefined4 FUN_100b4e60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = (DAT_100b4eb8 - DAT_100b4eb4) * 0x20 & 0xff00;
  uVar4 = param_4;
  uVar5 = param_3;
  FUN_100a5b78(DAT_100b4ebc | uVar3,DAT_100b4ec0,DAT_100b4ec4,param_2,param_4,param_3);
  iVar1 = FUN_100b4dac(param_1 + 0xc,param_2,param_4,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_100a5b78(DAT_100b4ec8 | uVar3,DAT_100b4ec0,DAT_100b4ecc,iVar1,uVar4,uVar5);
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}

