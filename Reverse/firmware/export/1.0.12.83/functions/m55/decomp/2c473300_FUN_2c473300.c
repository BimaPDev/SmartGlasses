/* FUN_2c473300 @ 0x2c473300 */

int FUN_2c473300(undefined4 param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_r4;
  int iVar9;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  if ((param_3 == 0) || (uVar7 = param_3 + 3U & 0xfffffffc, 0x1ffffff < uVar7)) {
    iVar9 = param_2 + 0x10;
    if (iVar9 != 0) {
      uVar7 = 0;
      goto LAB_2c473330;
    }
    iVar2 = FUN_2c472ef8(param_1,0);
    uVar7 = 0;
    iVar9 = 0;
    if (iVar2 != 0) {
LAB_2c47340e:
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c473444,DAT_2c473440,0x202);
    }
  }
  else {
    if (uVar7 < 0xc) {
      uVar7 = 0xc;
    }
    iVar9 = param_2 + 0x10 + uVar7;
    if (iVar9 == 0) {
      bVar1 = true;
      uVar6 = 0;
      goto LAB_2c47334c;
    }
LAB_2c473330:
    while( true ) {
      if ((param_2 & param_2 - 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c473444,DAT_2c47344c,500);
      }
      uVar8 = (param_2 - 1) + iVar9 & -param_2;
      uVar6 = 0;
      if ((uVar8 < 0x2000000) && (uVar6 = uVar8, uVar8 < 0xc)) {
        uVar6 = 0xc;
      }
      bVar1 = false;
      if (uVar7 != 0) {
        bVar1 = true;
      }
LAB_2c47334c:
      if ((param_2 < 5) || (!bVar1)) {
        uVar6 = uVar7;
      }
      iVar9 = FUN_2c472ef8(param_1,uVar6);
      if (iVar9 == 0) goto LAB_2c473058;
      iVar2 = iVar9 + 8;
      uVar6 = param_2 - 1;
      uVar8 = iVar2 + uVar6 & -param_2;
      if ((param_2 & uVar6) != 0) goto LAB_2c47340e;
      uVar4 = uVar8 - iVar2;
      if (uVar4 - 1 < 0xf) {
        uVar4 = 0x10 - uVar4;
        if (uVar4 < param_2) {
          uVar4 = param_2;
        }
        uVar4 = (uVar8 + uVar6 + uVar4 & -param_2) - iVar2;
      }
      if (uVar4 == 0) goto LAB_2c473058;
      if (uVar4 < 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c473444,DAT_2c473448,0x4da);
      }
      if ((*(uint *)(iVar9 + 4) & 0xfffffffc) < uVar4 + 0x10) goto LAB_2c473058;
      iVar3 = FUN_2c472fb4(iVar9,uVar4 - 4);
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 2;
      uVar6 = *(uint *)(iVar9 + 4) & 0xfffffffc;
      if (uVar6 != 0) break;
      FUN_2c472ee0();
      iVar9 = extraout_r1;
    }
    *(int *)(iVar2 + uVar6 + -4) = iVar9;
    FUN_2c472e28(param_1,iVar9);
    iVar9 = iVar3;
  }
LAB_2c473058:
  if (iVar9 == 0) {
    return 0;
  }
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4730ec,DAT_2c4730f0,0x332);
  }
  if (-1 < (int)(*(uint *)(iVar9 + 4) << 0x1f)) goto LAB_2c4730d0;
  uVar6 = *(uint *)(iVar9 + 4) & 0xfffffffc;
  if (uVar6 < uVar7 + 0x10) {
LAB_2c473078:
    puVar5 = (uint *)(iVar9 + 8 + uVar6);
    if (uVar6 != 0) {
      *puVar5 = *puVar5 & 0xfffffffd;
      *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) & 0xfffffffe;
      return iVar9 + 8;
    }
  }
  else {
    iVar2 = FUN_2c472fb4(iVar9,uVar7,uVar7,uVar6,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    uVar7 = *(uint *)(iVar9 + 4) & 0xfffffffc;
    if (uVar7 != 0) {
      *(int *)(uVar7 + iVar9 + 4) = iVar9;
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
      FUN_2c472e28(param_1);
      uVar6 = *(uint *)(iVar9 + 4) & 0xfffffffc;
      goto LAB_2c473078;
    }
  }
  FUN_2c472ee0();
LAB_2c4730d0:
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4730ec,DAT_2c4730e8,0x2e6);
}

