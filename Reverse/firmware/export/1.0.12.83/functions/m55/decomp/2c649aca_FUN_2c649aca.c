/* FUN_2c649aca @ 0x2c649aca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c649aca(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)FUN_2c66d654(*(undefined4 *)(param_2 + 4),0);
  iVar5 = FUN_2c66d654(*(undefined4 *)(param_2 + 8),0,0x10);
  if (param_1 == 3) {
    uVar9 = 4;
  }
  else {
    uVar9 = FUN_2c66d654(*(undefined4 *)(param_2 + 0xc),0,10);
    if (uVar9 < 4) {
      uVar9 = 4;
    }
    if (0xfffff < uVar9) {
      uVar9 = 0x100000;
    }
  }
  uVar2 = _LAB_2c649b78;
  bVar1 = false;
  pcVar7 = pcVar4;
  do {
    pcVar8 = pcVar7 + 1;
    if (*pcVar7 != pcVar7[iVar5 - (int)pcVar4]) {
      bVar1 = true;
      FUN_2c648600(uVar2,pcVar7,*pcVar7,pcVar7 + (iVar5 - (int)pcVar4),pcVar7[iVar5 - (int)pcVar4]);
    }
    pcVar7 = pcVar8;
  } while (pcVar4 + uVar9 != pcVar8);
  uVar2 = _LAB_2c649b80;
  if (bVar1) {
    uVar2 = _LAB_2c649b7c;
  }
  iVar6 = *DAT_2c648674;
  iVar5 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar2,&stack0xfffffff4,&stack0xfffffff4,iVar6,unaff_r4,
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
  if (*DAT_2c648674 != iVar6) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

