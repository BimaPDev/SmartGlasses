/* FUN_10063a30 @ 0x10063a30 */

undefined4 FUN_10063a30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = DAT_10063aa8;
  iVar2 = DAT_10063aa4;
  iVar5 = param_1;
  FUN_10114a38();
  uVar3 = (iVar2 - DAT_10063aac) * 0x20 & 0xff00;
  iVar2 = 0;
  if (*piVar1 != 0) {
    if (piVar1[7] == 0) {
      iVar2 = 1;
    }
    else {
      if (piVar1[0xe] != 0) {
        FUN_100a5b78(uVar3 | 0x490011,DAT_10063ab4,DAT_10063ab8,iVar5,param_1,iVar5,param_3);
        uVar4 = 0xfffffff0;
        goto LAB_10063a7e;
      }
      iVar2 = 2;
    }
  }
  piVar1[iVar2 * 7] = iVar5;
  FUN_1013ca1a(piVar1 + iVar2 * 7 + 1,0,1);
  FUN_100a5b78(uVar3 | 0x510031,DAT_10063ab4,DAT_10063ab0,iVar5,param_1,iVar5,param_3);
  uVar4 = 0;
LAB_10063a7e:
  FUN_101150e0();
  return uVar4;
}

