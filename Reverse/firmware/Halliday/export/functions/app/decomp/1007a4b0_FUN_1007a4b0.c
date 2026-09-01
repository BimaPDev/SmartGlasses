/* FUN_1007a4b0 @ 0x1007a4b0 */

undefined4 FUN_1007a4b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_1007a4d8;
  iVar1 = FUN_1013d02e(param_1 - (uint)*(byte *)(DAT_1007a4d8 + 0x10));
  if (iVar1 < 0x14) {
    iVar2 = FUN_1013d02e(param_1 - (uint)*(byte *)(iVar2 + 0x10));
    if (iVar2 < 0xe) {
      uVar3 = 3;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

