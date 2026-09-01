/* FUN_10016570 @ 0x10016570 */

void FUN_10016570(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r3;
  
  iVar1 = *DAT_100165b0;
  uVar2 = (uint)*(byte *)(param_1 + 0x3a);
  if (param_2 == 0) goto LAB_1001659c;
  if (uVar2 < 0x17) {
    iVar3 = uVar2 + 1;
  }
  else {
    iVar3 = 0;
  }
  while (*(char *)(param_1 + 0x3a) = (char)iVar3, *DAT_100165b0 != iVar1) {
    param_1 = FUN_1013cdc0();
    uVar2 = extraout_r3;
LAB_1001659c:
    if (uVar2 == 0) {
      iVar3 = 0x17;
    }
    else {
      iVar3 = uVar2 - 1;
    }
  }
  if (*DAT_10017470 != *DAT_10017470) {
    FUN_1013cdc0();
  }
  return;
}

