/* FUN_1408c8cc @ 0x1408c8cc */

void FUN_1408c8cc(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  int *piVar9;
  undefined8 uVar10;
  int *piVar8;
  
  if (param_1 != 0) {
    piVar9 = DAT_1408ca90 + 8;
    piVar7 = DAT_1408ca90;
    do {
      piVar8 = piVar7 + 1;
      iVar6 = *piVar7;
      if ((iVar6 != 0) && (iVar2 = FUN_140db784(param_1,iVar6 + 8,6), iVar2 == 0))
      goto LAB_1408c90c;
      piVar7 = piVar8;
    } while (piVar9 != piVar8);
  }
  iVar6 = FUN_1408ab6c(0xffff,param_1);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_1408caa8);
  }
LAB_1408c90c:
  iVar2 = FUN_1408b348(iVar6,param_2,param_3 & 0xff,0);
  uVar1 = DAT_1408caa4;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_1408caac);
  }
  if ((param_3 & 0xff) == 10) {
    *(ushort *)(iVar2 + 0x12) = *(ushort *)(iVar2 + 0x12) | (ushort)(param_3 >> 8);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,uVar1);
  }
  *(undefined4 *)(iVar2 + 0x9c) = param_6;
  *(undefined4 *)(iVar2 + 0x98) = param_5;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x45,DAT_1408ca98,DAT_1408ca9c,param_2,param_3,*(undefined2 *)(iVar2 + 0x10),
                 param_4);
  }
  uVar5 = *(ushort *)(iVar6 + 0xe);
  if (uVar5 == 0xffff) {
    iVar3 = FUN_14086384(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_1408719c(param_1);
      if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x40,DAT_1408cab8);
      }
      *(undefined1 *)(iVar2 + 0x96) = 2;
      uVar5 = *(ushort *)(iVar6 + 0xe);
    }
    else {
      iVar3 = FUN_14085ca4();
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_1408cab4,DAT_1408ca9c);
      }
      uVar5 = *(ushort *)(iVar3 + 0x1c);
      *(ushort *)(iVar6 + 0xe) = uVar5;
      *(undefined1 *)(iVar6 + 0x11) = *(undefined1 *)(iVar3 + 0x52);
    }
    if (uVar5 == 0xffff) goto LAB_1408c97a;
  }
  iVar3 = FUN_14085e30(uVar5 & 0xfff);
  if (((param_2 == 1) || (param_2 == 0x33)) || (iVar4 = FUN_140863cc(), iVar4 == 0)) {
    iVar3 = FUN_1408b72c(*(undefined1 *)(iVar3 + 0x52),iVar2);
    if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_1408cab0);
    }
    *(undefined1 *)(iVar2 + 0x96) = 4;
    uVar5 = *(ushort *)(iVar6 + 0xe);
  }
  else {
    *(undefined1 *)(iVar2 + 0x96) = 2;
    if ((*(char *)(iVar3 + 0x46) != '\0') || (*(char *)(iVar3 + 0x49) != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1408caa0,DAT_1408ca9c);
    }
    FUN_140864e4(*(undefined1 *)(iVar3 + 0x52),*(undefined2 *)(iVar6 + 0xe),param_2,iVar2);
    uVar5 = *(ushort *)(iVar6 + 0xe);
  }
LAB_1408c97a:
  uVar10 = FUN_1408a8dc(param_2,uVar5);
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_1408ca94,param_2,(int)uVar10,*(undefined4 *)(iVar2 + 0xc),
               (int)((ulonglong)uVar10 >> 0x20));
}

