/* FUN_10041f38 @ 0x10041f38 */

undefined4 FUN_10041f38(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (*DAT_10041f5c != *DAT_10041f5c) {
    uVar5 = FUN_1013cdc0();
  }
  iVar3 = DAT_100aa1dc;
  if (*(char *)(DAT_100aa1dc + 4) == '\0') {
LAB_100aa1b8:
    uVar1 = 0xffffffff;
  }
  else {
    uVar4 = (DAT_100aa1e4 - DAT_100aa1e0) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100aa1e8 | uVar4,DAT_100aa1f0,DAT_100aa1ec,*(char *)(DAT_100aa1dc + 4),uVar5);
    if (*(int *)(iVar3 + 8) == 0) {
      iVar2 = FUN_100a9a7c();
      iVar3 = *(int *)(iVar3 + 0x54);
      if (iVar3 != iVar2) {
        FUN_100a5b78(uVar4 | 0x1100012,DAT_100aa1f0,DAT_100aa1f4,iVar2,iVar3,
                     (int)((ulonglong)uVar5 >> 0x20));
        goto LAB_100aa1b8;
      }
      iVar3 = FUN_100a9b0c(iVar2,0,iVar3,iVar2);
      if (iVar3 == 0) {
        return 0;
      }
      FUN_100a5b78(uVar4 | 0x1160011,DAT_100aa1f0,DAT_100aa1f8,iVar3,uVar5);
    }
    else {
      *(undefined1 *)(iVar3 + 5) = 1;
      FUN_101140ac(iVar3 + 0x6c);
      FUN_1011dbde(iVar3 + 0x6c,0xffffffff);
    }
    uVar1 = 0;
  }
  return uVar1;
}

