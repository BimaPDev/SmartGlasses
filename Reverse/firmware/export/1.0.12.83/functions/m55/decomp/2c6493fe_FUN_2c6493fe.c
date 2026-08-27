/* FUN_2c6493fe @ 0x2c6493fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6493fe(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_r4;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  iVar6 = FUN_2c66d654(*(undefined4 *)(param_2 + 4),0,param_3,param_4,param_4);
  if (param_1 == 2) {
    uVar9 = 1;
  }
  else {
    uVar9 = FUN_2c66d654(*(undefined4 *)(param_2 + 8),0,10);
    if (uVar9 == 0) {
      uVar9 = 1;
    }
    if (0xfffff < uVar9) {
      uVar9 = 0x100000;
    }
  }
  uVar4 = _LAB_2c649488;
  uVar3 = _LAB_2c649484;
  uVar8 = 0;
  do {
    while( true ) {
      uVar1 = *(undefined1 *)(iVar6 + uVar8);
      uVar2 = uVar8 & 0xf;
      iVar7 = iVar6 + uVar8;
      uVar8 = uVar8 + 1;
      if (uVar2 != 0) break;
      FUN_2c648600(uVar3,iVar7);
      FUN_2c648600(uVar4,uVar1);
      if (uVar9 == uVar8) goto code_r0x2c648600;
    }
    FUN_2c648600(uVar4,uVar1);
  } while (uVar9 != uVar8);
code_r0x2c648600:
  iVar7 = *DAT_2c648674;
  iVar6 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c649480,&stack0xfffffff4,&stack0xfffffff4,iVar7,
                       unaff_r4,unaff_lr);
  if (-1 < iVar6) {
    if (iVar6 < 0x7ff) {
      if (iVar6 == 0) goto LAB_2c648630;
    }
    else {
      iVar6 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar5 = (code *)FUN_2c648328();
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(_LAB_2c648678,iVar6);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar6);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar7) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

