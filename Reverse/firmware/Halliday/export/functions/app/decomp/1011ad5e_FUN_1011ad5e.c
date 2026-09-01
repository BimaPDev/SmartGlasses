/* FUN_1011ad5e @ 0x1011ad5e */

void FUN_1011ad5e(uint param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_1013d44e(param_1,param_3);
  uVar2 = FUN_1011acf2(param_3);
  if (uVar1 == 0) {
    return;
  }
  if ((param_1 < uVar1) && (*(char *)(uVar1 - 1) == ' ')) {
    uVar2 = uVar2 + 1 & 0xffff;
    uVar1 = uVar1 - 1;
  }
  iVar3 = FUN_1011acf2(uVar1);
  *param_2 = *param_2 - (short)uVar2;
  FUN_1011ea38(uVar1,uVar1 + uVar2,(iVar3 - uVar2) + 1 & 0xffff,param_4);
  return;
}

