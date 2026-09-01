/* FUN_100f6b1c @ 0x100f6b1c */

undefined4 FUN_100f6b1c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  piVar3 = DAT_100f6d30;
  if (param_2 == 0) {
    FUN_100a5b78(DAT_100f6d20 | (DAT_100f6cfc - DAT_100f6cf8) * 0x20 & 0xff00U,DAT_100f6d10,
                 DAT_100f6d24);
    uVar5 = 0xffffffff;
  }
  else {
    if (*(int *)(param_2 + 0x34) == 1) {
      return 0;
    }
    if (param_4 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x14);
      iVar9 = *DAT_100f6d30;
      *(undefined4 *)(param_2 + 0x4c) = 0;
      if (iVar9 == 0) {
        uVar10 = *DAT_100f6d08;
        uVar11 = (DAT_100f6cfc - DAT_100f6cf8) * 0x20 & 0xff00;
      }
      else {
        iVar6 = *DAT_100f6cf4;
        if (0 < iVar6) {
          iVar8 = 0;
          do {
            iVar4 = *(int *)(iVar9 + iVar8 * 0xc);
            if ((iVar4 == 0) || ((uint)uVar1 != *(uint *)(iVar9 + iVar8 * 0xc + 4))) {
              if (iVar6 <= iVar8 + 1) break;
            }
            else {
              iVar9 = FUN_1011ea18(iVar4,param_3);
              if (iVar9 == 0) {
                uVar11 = (DAT_100f6cfc - DAT_100f6cf8) * 0x20 & 0xff00;
                FUN_100a5b78(uVar11 | 0x610032,DAT_100f6d04,DAT_100f6d1c,param_3,
                             *(undefined4 *)(*piVar3 + iVar8 * 0xc + 8));
                uVar10 = *(uint *)(iVar8 * 0xc + *piVar3 + 8);
                goto LAB_100f6bd8;
              }
              iVar6 = *DAT_100f6cf4;
              if (iVar6 <= iVar8 + 1) break;
            }
            iVar8 = iVar8 + 1;
            iVar9 = *piVar3;
          } while( true );
        }
        uVar11 = (DAT_100f6cfc - DAT_100f6cf8) * 0x20 & 0xff00;
        FUN_100a5b78(uVar11 | 0x670032,DAT_100f6d04,DAT_100f6d00,param_3,(uint)uVar1);
        uVar10 = *DAT_100f6d08;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x4c) = 1;
      uVar10 = FUN_10138cbe();
      uVar11 = (DAT_100f6cfc - DAT_100f6cf8) * 0x20 & 0xff00;
    }
LAB_100f6bd8:
    uVar7 = *(int *)(param_2 + 0x38) * 3 + 0x54;
    if (uVar10 < uVar7) {
      uVar10 = uVar7;
    }
    iVar9 = FUN_100e825c(uVar10);
    if (iVar9 == 0) {
      FUN_100a5b78(DAT_100f6d28 | uVar11,DAT_100f6d10,DAT_100f6d2c,param_2,param_1,
                   *(undefined2 *)(param_1 + 0x14),param_4);
      uVar5 = 0xffffffff;
    }
    else {
      FUN_1011ea48(iVar9,0,uVar10);
      FUN_100a5b78(uVar11 | 0x2240032,DAT_100f6d10,DAT_100f6d0c,iVar9,uVar10);
      uVar7 = DAT_100f6d14;
      uVar10 = uVar10 / (*(int *)(param_2 + 0x38) + 0x1cU);
      iVar8 = iVar9 + uVar10 * 4;
      iVar6 = iVar8 + uVar10 * 0x18;
      *(uint *)(param_2 + 0x3c) = uVar10;
      *(int *)(param_2 + 0xc) = iVar9;
      *(int *)(param_2 + 0x10) = iVar8;
      *(int *)(param_2 + 0x14) = iVar6;
      uVar2 = DAT_100f6d18;
      *(undefined4 *)(param_2 + 0x40) = 0;
      *(undefined4 *)(param_2 + 0x44) = 0;
      uVar5 = DAT_100f6d10;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0x34) = 1;
      *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
      FUN_100a5b78(uVar7 | uVar11,uVar5,uVar2,iVar8,iVar6,uVar10);
      uVar5 = 0;
    }
  }
  return uVar5;
}

