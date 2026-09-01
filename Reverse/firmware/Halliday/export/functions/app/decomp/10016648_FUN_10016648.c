/* FUN_10016648 @ 0x10016648 */

void FUN_10016648(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r3;
  
  iVar1 = *DAT_1001668c;
  uVar2 = (uint)*(byte *)(param_1 + 0x3c);
  if (param_2 == 0) goto LAB_10016674;
  if (uVar2 < 0xc) {
    iVar3 = uVar2 + 1;
  }
  else {
    iVar3 = 1;
  }
  while (*(char *)(param_1 + 0x3c) = (char)iVar3, *DAT_1001668c != iVar1) {
    param_1 = FUN_1013cdc0();
    uVar2 = extraout_r3;
LAB_10016674:
    if (uVar2 < 2) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = uVar2 - 1;
    }
  }
  FUN_100173e4(param_1,1);
  return;
}

