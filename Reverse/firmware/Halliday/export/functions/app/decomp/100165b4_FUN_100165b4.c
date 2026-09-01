/* FUN_100165b4 @ 0x100165b4 */

void FUN_100165b4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r3;
  
  iVar1 = *DAT_100165f4;
  uVar2 = (uint)*(byte *)(param_1 + 0x39);
  if (param_2 == 0) goto LAB_100165e0;
  if (uVar2 < 0x3b) {
    iVar3 = uVar2 + 1;
  }
  else {
    iVar3 = 0;
  }
  while (*(char *)(param_1 + 0x39) = (char)iVar3, *DAT_100165f4 != iVar1) {
    param_1 = FUN_1013cdc0();
    uVar2 = extraout_r3;
LAB_100165e0:
    if (uVar2 == 0) {
      iVar3 = 0x3b;
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

