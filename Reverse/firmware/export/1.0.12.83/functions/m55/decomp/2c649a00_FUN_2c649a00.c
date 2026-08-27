/* FUN_2c649a00 @ 0x2c649a00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c649a00(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_r4;
  short *psVar9;
  short *psVar10;
  int iVar11;
  undefined4 unaff_lr;
  
  uVar4 = _LAB_2c649698;
  if (param_1 < 3) {
    FUN_2c648600(_LAB_2c649694);
    uVar3 = _LAB_2c64969c;
    FUN_2c648600(_LAB_2c6496a0);
    FUN_2c648600(uVar4);
    FUN_2c648600(uVar3);
    FUN_2c648600(_DAT_2c6496a4);
    FUN_2c648600(_DAT_2c6496a8);
    FUN_2c648600(uVar4);
    FUN_2c648600(uVar3);
    FUN_2c648600(_DAT_2c6496ac);
    FUN_2c648600(_LAB_2c6496b0);
    FUN_2c648600(uVar4);
    FUN_2c648600(uVar3);
    uVar4 = _DAT_2c6496b4;
  }
  else {
    psVar6 = (short *)FUN_2c66d654(*(undefined4 *)(param_2 + 4),0,0x10);
    iVar7 = FUN_2c66d654(*(undefined4 *)(param_2 + 8),0,0x10);
    if (param_1 == 3) {
      iVar11 = 4;
    }
    else {
      uVar8 = FUN_2c66d654(*(undefined4 *)(param_2 + 0xc),0,10);
      if (uVar8 < 4) {
        uVar8 = 4;
      }
      if (0xfffff < uVar8) {
        uVar8 = 0x100000;
      }
      iVar11 = uVar8 << 1;
    }
    uVar4 = _LAB_2c649ab8;
    bVar2 = false;
    psVar9 = psVar6;
    do {
      sVar1 = *(short *)((int)psVar9 + (iVar7 - (int)psVar6));
      psVar10 = psVar9 + 1;
      if (*psVar9 != sVar1) {
        FUN_2c648600(uVar4,psVar9,*psVar9,(int)psVar9 + (iVar7 - (int)psVar6),sVar1);
        bVar2 = true;
      }
      psVar9 = psVar10;
    } while ((short *)(iVar11 + (int)psVar6) != psVar10);
    uVar4 = _LAB_2c649ac0;
    if (bVar2) {
      uVar4 = _LAB_2c649abc;
    }
  }
  iVar11 = *DAT_2c648674;
  iVar7 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar4,&stack0xfffffff4,&stack0xfffffff4,iVar11,unaff_r4,
                       unaff_lr);
  if (-1 < iVar7) {
    if (iVar7 < 0x7ff) {
      if (iVar7 == 0) goto LAB_2c648630;
    }
    else {
      iVar7 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar5 = (code *)FUN_2c648328();
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(_LAB_2c648678,iVar7);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar7);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar11) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

