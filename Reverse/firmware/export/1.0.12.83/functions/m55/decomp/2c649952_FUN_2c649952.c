/* FUN_2c649952 @ 0x2c649952 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c649952(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r4;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_lr;
  
  piVar4 = (int *)FUN_2c66d654(*(undefined4 *)(param_2 + 4),0);
  iVar5 = FUN_2c66d654(*(undefined4 *)(param_2 + 8),0,0x10);
  if (param_1 == 3) {
    iVar9 = 8;
  }
  else {
    uVar6 = FUN_2c66d654(*(undefined4 *)(param_2 + 0xc),0,10);
    if (uVar6 < 4) {
      uVar6 = 4;
    }
    if (0xfffff < uVar6) {
      uVar6 = 0x100000;
    }
    iVar9 = uVar6 << 2;
  }
  uVar2 = _LAB_2c6499f4;
  bVar1 = false;
  piVar7 = piVar4;
  do {
    iVar10 = *(int *)((int)piVar7 + (iVar5 - (int)piVar4));
    piVar8 = piVar7 + 1;
    if (*piVar7 != iVar10) {
      FUN_2c648600(uVar2,piVar7,*piVar7,(int)piVar7 + (iVar5 - (int)piVar4),iVar10);
      bVar1 = true;
    }
    piVar7 = piVar8;
  } while ((int *)(iVar9 + (int)piVar4) != piVar8);
  uVar2 = _LAB_2c6499fc;
  if (bVar1) {
    uVar2 = _LAB_2c6499f8;
  }
  iVar9 = *DAT_2c648674;
  iVar5 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar2,&stack0xfffffff4,&stack0xfffffff4,iVar9,unaff_r4,
                       unaff_lr);
  if (-1 < iVar5) {
    if (iVar5 < 0x7ff) {
      if (iVar5 == 0) goto LAB_2c648630;
    }
    else {
      iVar5 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar3 = (code *)FUN_2c648328();
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(_LAB_2c648678,iVar5);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar5);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar9) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

