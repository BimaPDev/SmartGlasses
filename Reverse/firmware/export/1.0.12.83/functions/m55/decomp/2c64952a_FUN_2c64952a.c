/* FUN_2c64952a @ 0x2c64952a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c64952a(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_r4;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 unaff_lr;
  
  puVar6 = (undefined4 *)FUN_2c66d654(*(undefined4 *)(param_2 + 4),0,param_3,param_4,param_4);
  if (param_1 == 2) {
    uVar7 = 1;
  }
  else {
    uVar7 = FUN_2c66d654(*(undefined4 *)(param_2 + 8),0,10);
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    if (0xfffff < uVar7) {
      uVar7 = 0x100000;
    }
  }
  uVar3 = _LAB_2c6495b4;
  uVar2 = _LAB_2c6495b0;
  uVar11 = 0;
  puVar9 = puVar6;
  do {
    while( true ) {
      uVar1 = uVar11 & 7;
      uVar12 = *puVar9;
      uVar11 = uVar11 + 1;
      if (uVar1 != 0) break;
      puVar10 = puVar9 + 1;
      FUN_2c648600(uVar2,puVar9);
      FUN_2c648600(uVar3,uVar12);
      puVar9 = puVar10;
      if (puVar6 + uVar7 == puVar10) goto code_r0x2c648600;
    }
    puVar9 = puVar9 + 1;
    FUN_2c648600(uVar3,uVar12);
  } while (puVar6 + uVar7 != puVar9);
code_r0x2c648600:
  iVar8 = *DAT_2c648674;
  iVar4 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c6495ac,&stack0xfffffff4,&stack0xfffffff4,iVar8,
                       unaff_r4,unaff_lr);
  if (-1 < iVar4) {
    if (iVar4 < 0x7ff) {
      if (iVar4 == 0) goto LAB_2c648630;
    }
    else {
      iVar4 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar5 = (code *)FUN_2c648328();
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(_LAB_2c648678,iVar4);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar4);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar8) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

