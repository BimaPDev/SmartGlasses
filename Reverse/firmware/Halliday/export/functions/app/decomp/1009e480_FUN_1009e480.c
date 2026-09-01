/* FUN_1009e480 @ 0x1009e480 */

int FUN_1009e480(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1009e000();
  }
  piVar1 = DAT_1009e54c;
  FUN_1011dbf4(DAT_1009e550,0xffffffff);
  iVar3 = *piVar1;
  if (iVar3 == iVar2) {
    FUN_100a5b78((DAT_1009e554 - DAT_1009e558) * 0x20 & 0xff00U | 0x14a0031,DAT_1009e560,
                 DAT_1009e55c);
  }
  else if (iVar2 == 0) {
    if (iVar3 != 0) goto LAB_1009e510;
LAB_1009e52c:
    if (param_1 != 0) {
      FUN_100a5b78(DAT_1009e568 | (DAT_1009e554 - DAT_1009e558) * 0x20 & 0xff00U,DAT_1009e560,
                   DAT_1009e56c);
      iVar3 = 0;
      goto LAB_1009e4bc;
    }
  }
  else {
    if (((*(byte *)(iVar2 + 0xb) & 0xf) == 2) && (iVar3 != 0)) {
LAB_1009e510:
      FUN_1009e02c();
      FUN_1009e3b4(*(undefined4 *)*piVar1,0);
      FUN_1011dbf4(DAT_1009e550,0xffffffff);
      if (iVar2 == 0) goto LAB_1009e52c;
    }
    iVar3 = FUN_1009e038(iVar2,1);
    if (iVar3 == 0) {
      FUN_100a5b78((DAT_1009e554 - DAT_1009e558) * 0x20 & 0xff00U | 0x1600011,DAT_1009e560,
                   DAT_1009e564);
      goto LAB_1009e4bc;
    }
    if ((*(byte *)(iVar2 + 0xb) & 0xf) == 2) {
      *piVar1 = iVar2;
      goto LAB_1009e4bc;
    }
  }
  iVar3 = 1;
LAB_1009e4bc:
  FUN_1009e02c();
  return iVar3;
}

