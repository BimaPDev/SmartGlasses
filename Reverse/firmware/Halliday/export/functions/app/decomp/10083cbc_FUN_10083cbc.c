/* FUN_10083cbc @ 0x10083cbc */

void FUN_10083cbc(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = DAT_10083dac;
  if ((*(char *)(DAT_10083dac + 0x15) == '\0') ||
     (iVar3 = FUN_1013d02e(param_1 - *(int *)(DAT_10083dac + 0x18)), iVar3 < 3)) {
    return;
  }
  *(int *)(iVar2 + 0x18) = param_1;
  if (*(char *)(iVar2 + 1) < param_1) {
    iVar3 = *(byte *)(iVar2 + 0x16) - 1;
    iVar6 = iVar2 + iVar3 * 2;
    if (param_1 < *(char *)(iVar6 + 1)) {
      iVar6 = iVar2;
      iVar4 = 0;
      while (iVar4 < iVar3) {
        iVar5 = (int)*(char *)(iVar6 + 1);
        if ((iVar5 <= param_1) && (param_1 < *(char *)(iVar6 + 3))) {
          iVar3 = (int)*(char *)(iVar2 + iVar4 * 2 + 2);
          iVar3 = ((*(char *)(iVar2 + (iVar4 + 1) * 2 + 2) - iVar3) * (param_1 - iVar5)) /
                  (*(char *)(iVar6 + 3) - iVar5) + iVar3;
          goto LAB_10083ce4;
        }
        iVar6 = iVar6 + 2;
        iVar4 = iVar4 + 1;
      }
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(char *)(iVar6 + 2);
    }
  }
  else {
    iVar3 = (int)*(char *)(iVar2 + 2);
  }
LAB_10083ce4:
  iVar6 = DAT_10083db4 - DAT_10083db0;
  uVar7 = DAT_10083db8 & iVar3 >> 0x20;
  if (DAT_10083db4 < DAT_10083db0) {
    uVar7 = DAT_10083dbc;
  }
  uVar1 = *(undefined1 *)(iVar2 + 0x17);
  iVar4 = FUN_1013d02e(iVar3);
  iVar5 = FUN_1013d02e(iVar3);
  FUN_100a5b78(iVar6 * 0x20 & 0xff00U | 0x880035,DAT_10083dc4,DAT_10083dc0,param_1,uVar1,uVar7,
               iVar4 / 10,iVar5 % 10);
  FUN_10070a84((uint)*(byte *)(iVar2 + 0x17) + iVar3);
  return;
}

