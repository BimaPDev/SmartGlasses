/* FUN_1005df28 @ 0x1005df28 */

int FUN_1005df28(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_1005dfb0;
  iVar2 = *DAT_1005dfb0;
  if (iVar2 == 0) {
    FUN_10119dc2(DAT_1005dfbc,DAT_1005dfb8,DAT_1005dfb4,0xfd,param_1,param_2,0,param_4,param_1,
                 param_2,param_3);
    FUN_1011a1f0(DAT_1005dfb4,0xfd,iVar2,param_4);
  }
  iVar3 = *piVar1;
  iVar2 = 0;
  while (((iVar4 = iVar2 + 1, param_1 != *(byte *)(iVar2 * 0x18 + iVar3 + 0x1a) >> 4 &&
          ((*(byte *)(iVar2 * 0x18 + iVar3 + 0x1a) & 0xf0) != 0x50)) ||
         (*(byte *)(iVar3 + 0x19 + iVar2 * 0x18) != param_2))) {
    iVar2 = iVar4;
    if (iVar4 == 0x1e) {
      return 0;
    }
  }
  FUN_100a5b78(DAT_1005dfc8 | (DAT_1005dfc0 - DAT_1005dfc4) * 0x20 & 0xff00U,DAT_1005dfd0,
               DAT_1005dfcc,iVar2,param_2);
  return iVar2 * 0x18 + 0x10 + iVar3;
}

