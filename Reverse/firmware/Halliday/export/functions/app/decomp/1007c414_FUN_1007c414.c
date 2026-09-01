/* FUN_1007c414 @ 0x1007c414 */

void FUN_1007c414(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = DAT_1007c4d0;
  *(byte *)(DAT_1007c4d0 + 0x13c) = *(byte *)(DAT_1007c4d0 + 0x13c) | 4;
  iVar2 = DAT_1007c4d4;
  uVar6 = param_1;
  uVar7 = param_2;
  FUN_1007cff4();
  FUN_1007d058();
  uVar5 = (iVar2 - DAT_1007c4d8) * 0x20 & 0xff00;
  if (*(char *)(iVar1 + 0x1b4) == '\0') {
    FUN_100a5b78(uVar5 | 0x1f20031,DAT_1007c4e4,DAT_1007c4f4,param_2,uVar6,uVar7);
    if (*(char *)(iVar1 + 0x1e3) < '\0') {
      uVar3 = *(byte *)(iVar1 + 0x1e3) & 0x7f;
      uVar4 = 0;
      if (uVar3 < param_2) {
        uVar4 = param_2 - uVar3;
      }
    }
    else {
      uVar4 = *(byte *)(iVar1 + 0x1e3) + param_2;
    }
    FUN_100a5b78(uVar5 | 0x1fc0031,DAT_1007c4e4,DAT_1007c4f8,uVar4,uVar6,uVar7);
  }
  else {
    uVar4 = (uint)*(byte *)(iVar1 + 0x1b5);
  }
  if (0x1d < uVar4) {
    uVar4 = 0x1e;
  }
  uVar6 = uVar4;
  FUN_100a5b78(DAT_1007c4dc | uVar5,DAT_1007c4e4,DAT_1007c4e0,param_1,param_2,uVar4);
  param_1 = param_1 | uVar4 << 5;
  if (*(char *)(iVar1 + 0x146) == '\0') {
    FUN_100a5b78(DAT_1007c4e8 | uVar5,DAT_1007c4e4,DAT_1007c4ec,0,param_2,uVar6);
    param_1 = param_1 | 0x80000;
  }
  FUN_1007c100(DAT_1007c4f0,param_1);
  return;
}

