/* FUN_100165f8 @ 0x100165f8 */

void FUN_100165f8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r3;
  
  iVar1 = *DAT_10016644;
  uVar2 = (uint)*(ushort *)(param_1 + 0x3e);
  if (param_2 == 0) goto LAB_10016626;
  if (uVar2 < 0x833) {
    iVar3 = uVar2 + 1;
  }
  else {
    iVar3 = 2000;
  }
  while (*(short *)(param_1 + 0x3e) = (short)iVar3, *DAT_10016644 != iVar1) {
    param_1 = FUN_1013cdc0();
    uVar2 = extraout_r3;
LAB_10016626:
    if (uVar2 < 0x7d1) {
      iVar3 = 0x833;
    }
    else {
      iVar3 = uVar2 - 1;
    }
  }
  FUN_100173c0(param_1,1);
  return;
}

