/* FUN_100b6664 @ 0x100b6664 */

/* WARNING: Removing unreachable block (ram,0x100b5f40) */
/* WARNING: Removing unreachable block (ram,0x100b5f4c) */

undefined4 FUN_100b6664(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 unaff_r4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_r5;
  uint uVar7;
  undefined4 unaff_r6;
  uint uVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar9;
  undefined4 unaff_r9;
  undefined4 unaff_lr;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar9 = *(int **)(param_1 + 0x18);
  uVar7 = (DAT_100b670c - DAT_100b6708) * 0x20 & 0xff00;
  FUN_100a5b78(uVar7 | 0xcb0034,DAT_100b6714,DAT_100b6710,param_2,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10),param_3);
  uVar8 = *(int *)(param_2 + 0xc) + param_3 & DAT_100b6718;
  uVar5 = (*(int *)(param_2 + 0x10) - param_3) + 0xfffU & DAT_100b6718;
  FUN_100a5b78(uVar7 | 0xd10032,DAT_100b6714,DAT_100b671c,uVar8,uVar5);
  if (((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (iVar2 = FUN_100b5e34(piVar9,uVar8,uVar5,*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x1c)),
     iVar2 == 1)) {
    FUN_100a5b78(uVar7 | 0xd60031,DAT_100b6714,DAT_100b6720);
    return 0;
  }
  FUN_100a5b78((DAT_100b612c - DAT_100b6128) * 0x20 & 0xff00U | 0x1b60032,DAT_100b6130,DAT_100b6134,
               uVar8,uVar5,uVar8,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  if (piVar9 == (int *)0x0) {
    return 0xffffffea;
  }
  iVar2 = piVar9[5];
  if ((1 < iVar2 - 1U) && (iVar2 != 4)) {
    if ((iVar2 != 0) && (iVar2 != 3)) {
      pcVar3 = *(code **)(*(int *)(*piVar9 + 8) + 8);
      uVar10 = (*pcVar3)(*piVar9,pcVar3,uVar8,(int)uVar8 >> 0x1f,uVar5,0);
      return uVar10;
    }
    if (piVar9 == (int *)0x0) {
      uVar10 = 0xffffffea;
    }
    else {
      for (; 0 < (int)uVar5; uVar5 = uVar5 - uVar7) {
        iVar2 = piVar9[3];
        uVar7 = uVar5;
        if (iVar2 <= (int)uVar5) {
          uVar7 = iVar2 - (iVar2 - 1U & uVar8);
        }
        pcVar3 = *(code **)(*(int *)(*piVar9 + 8) + 8);
        iVar2 = (*pcVar3)(*piVar9,pcVar3,uVar8,(int)uVar8 >> 0x1f,uVar7,0,unaff_r4,unaff_r5,unaff_r6
                          ,unaff_r7,unaff_r8,unaff_lr);
        if (iVar2 != 0) {
          FUN_100a5b78((DAT_100b60a0 - DAT_100b609c) * 0x20 & 0xff00U | 0x1a80012,DAT_100b60a8,
                       DAT_100b60a4,iVar2,uVar8);
          return 0xfffffffb;
        }
        uVar8 = uVar8 + uVar7;
        FUN_10067f20();
      }
      uVar10 = 0;
    }
    return uVar10;
  }
  if (piVar9 != (int *)0x0) {
    if ((uVar8 & 0x1ff) == 0) {
      uVar5 = uVar8;
      if ((int)uVar8 < 0) {
        uVar5 = uVar8 + 0x1ff;
      }
      iVar4 = (int)uVar5 >> 9;
      iVar2 = thunk_FUN_1009f30c(0x200,DAT_100b6010,0,0,piVar9,uVar8,0x200,iVar2,unaff_r4,unaff_r5,
                                 unaff_r6,unaff_r7,unaff_r8,unaff_r9);
      if (iVar2 == 0) {
        FUN_100a5b78(DAT_100b6014 | (DAT_100b6004 - DAT_100b6000) * 0x20 & 0xff00U,DAT_100b600c,
                     DAT_100b6018,0x200);
        return 0xfffffff4;
      }
      FUN_1011ea48(iVar2,0xff,0x200);
      iVar6 = 1;
      while( true ) {
        if (iVar6 == 0) {
          FUN_1012d1f4(iVar2);
          return 0;
        }
        iVar4 = iVar4 + 1;
        uVar10 = 0x200;
        uVar11 = 0;
        iVar1 = (**(code **)(*(int *)(*piVar9 + 8) + 4))();
        if (iVar1 != 0) break;
        FUN_10067f20();
        iVar6 = iVar6 + -1;
      }
      FUN_100a5b78(DAT_100b6020 | (DAT_100b6004 - DAT_100b6000) * 0x20 & 0xff00U,DAT_100b600c,
                   DAT_100b601c,iVar1,iVar4,iVar6 + -1,uVar10,uVar11);
      FUN_1012d1f4(iVar2);
      return 0xfffffffb;
    }
    FUN_100a5b78((DAT_100b6004 - DAT_100b6000) * 0x20 & 0xff00U | 0x1740011,DAT_100b600c,
                 DAT_100b6008,uVar8);
  }
  return 0xffffffea;
}

