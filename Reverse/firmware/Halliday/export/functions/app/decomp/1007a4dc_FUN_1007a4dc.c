/* FUN_1007a4dc @ 0x1007a4dc */

undefined4 FUN_1007a4dc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_1007a514;
  iVar1 = FUN_1013d02e(param_1 - (uint)*(byte *)(DAT_1007a514 + 0x10));
  if (iVar1 < 0x12) {
    iVar1 = FUN_1013d02e(param_1 - (uint)*(byte *)(iVar2 + 0x10));
    if (iVar1 < 0xe) {
      iVar2 = FUN_1013d02e(param_1 - (uint)*(byte *)(iVar2 + 0x10));
      if (iVar2 < 9) {
        uVar3 = 5;
      }
      else {
        uVar3 = 4;
      }
    }
    else {
      uVar3 = 3;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

