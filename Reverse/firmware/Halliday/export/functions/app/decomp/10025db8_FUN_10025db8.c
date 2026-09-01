/* FUN_10025db8 @ 0x10025db8 */

void FUN_10025db8(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *DAT_10025e14;
  uVar2 = FUN_1011ea10(param_1 + 0x38,param_2,param_3,0,param_1,iVar3,param_3);
  if (((uVar2 < 2) && (uVar2 = FUN_1011ea10(param_1 + 0x14), uVar2 < 2)) ||
     (uVar2 = FUN_1011ea10(param_1 + 0x38), 0x140 < uVar2)) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_1011ea10(param_1 + 0x14);
    bVar1 = uVar2 < 0x25;
  }
  if (*DAT_10025e14 != iVar3) {
    FUN_1013cdc0(bVar1);
  }
  return;
}

