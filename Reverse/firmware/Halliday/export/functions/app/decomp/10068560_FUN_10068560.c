/* FUN_10068560 @ 0x10068560 */

void FUN_10068560(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = DAT_10068630;
  uVar4 = (DAT_1006862c - DAT_10068628) * 0x20 & 0xff00;
  FUN_100a5b78(uVar4 | 0x16a0011,DAT_10068638,DAT_10068634,DAT_10068628,param_4);
  if (*(int *)(iVar2 + 0x28) << 0x13 < 0) {
    FUN_100a5b78(DAT_1006863c | uVar4,DAT_10068638,DAT_10068640);
  }
  iVar2 = *(int *)(iVar2 + 0x28);
  if (iVar2 << 0x14 < 0) {
    FUN_100a5b78(uVar4 | 0x1700011,DAT_10068638,DAT_10068644,iVar2,param_4);
  }
  iVar2 = DAT_10068630;
  iVar3 = *(int *)(DAT_10068630 + 0x28) << 0x16;
  if (iVar3 < 0) {
    FUN_100a5b78(DAT_10068648 | uVar4,DAT_10068638,DAT_1006864c,iVar3,param_4);
    if ((*(int *)(iVar2 + 0x28) << 0x10 < 0) &&
       (FUN_100a5b78(DAT_10068650 | uVar4,DAT_10068638,DAT_10068654,*(undefined4 *)(iVar2 + 0x38),
                     param_4), param_1 != 0)) {
      *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) & 0xffff7fff;
    }
  }
  iVar2 = DAT_10068630;
  if (*(int *)(DAT_10068630 + 0x28) << 0x15 < 0) {
    FUN_100a5b78(DAT_10068658 | uVar4,DAT_10068638,DAT_1006865c,*(int *)(DAT_10068630 + 0x28),
                 param_4);
  }
  if (*(int *)(iVar2 + 0x28) << 0x17 < 0) {
    uVar4 = uVar4 | 0x18a0011;
    uVar1 = DAT_10068660;
  }
  else {
    if (-1 < *(int *)(iVar2 + 0x28) << 0x12) goto LAB_10068608;
    uVar4 = DAT_10068664 | uVar4;
    uVar1 = DAT_10068668;
  }
  FUN_100a5b78(uVar4,DAT_10068638,uVar1);
LAB_10068608:
  *(uint *)(DAT_10068630 + 0x28) = *(uint *)(DAT_10068630 + 0x28) | 0xff00;
  *param_2 = 0;
  return;
}

