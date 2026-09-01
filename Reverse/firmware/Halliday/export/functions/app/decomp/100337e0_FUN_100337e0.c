/* FUN_100337e0 @ 0x100337e0 */

void FUN_100337e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *DAT_10033854;
  iVar4 = *DAT_10033858;
  if (iVar4 != 0) goto LAB_1003381a;
  uVar2 = (DAT_10033860 - DAT_1003385c) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_10033864 | uVar2,DAT_1003386c,DAT_10033868,uVar2,param_1);
  uVar2 = 0;
  while (*DAT_10033854 != iVar1) {
    FUN_1013cdc0(uVar2);
LAB_1003381a:
    if (*(char *)(iVar4 + 0x16c) == '\x10') {
      iVar3 = 0x78;
    }
    else if (*(char *)(iVar4 + 0x16c) == '\x16') {
      iVar3 = 0x46;
    }
    else {
      iVar3 = 0x6e;
    }
    if (*(short *)(iVar4 + 0x16e) == 0) {
      *(undefined2 *)(iVar4 + 0x16e) = 0x104;
    }
    uVar2 = (uint)(iVar3 * 60000) / ((uint)*(ushort *)(iVar4 + 0x16e) * 5);
  }
  return;
}

