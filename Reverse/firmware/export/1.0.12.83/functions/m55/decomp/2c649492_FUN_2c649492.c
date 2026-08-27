/* FUN_2c649492 @ 0x2c649492 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c649492(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_r4;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined4 unaff_lr;
  
  puVar7 = (undefined2 *)FUN_2c66d654(*(undefined4 *)(param_2 + 4),0,param_3,param_4,param_4);
  if (param_1 == 2) {
    uVar8 = 1;
  }
  else {
    uVar8 = FUN_2c66d654(*(undefined4 *)(param_2 + 8),0,10);
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (0xfffff < uVar8) {
      uVar8 = 0x100000;
    }
  }
  uVar4 = _LAB_2c649520;
  uVar3 = _LAB_2c64951c;
  uVar12 = 0;
  puVar10 = puVar7;
  do {
    while( true ) {
      uVar1 = *puVar10;
      uVar2 = uVar12 & 7;
      uVar12 = uVar12 + 1;
      if (uVar2 != 0) break;
      puVar11 = puVar10 + 1;
      FUN_2c648600(uVar3,puVar10);
      FUN_2c648600(uVar4,uVar1);
      puVar10 = puVar11;
      if (puVar7 + uVar8 == puVar11) goto code_r0x2c648600;
    }
    puVar10 = puVar10 + 1;
    FUN_2c648600(uVar4,uVar1);
  } while (puVar7 + uVar8 != puVar10);
code_r0x2c648600:
  iVar9 = *DAT_2c648674;
  iVar5 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c649518,&stack0xfffffff4,&stack0xfffffff4,iVar9,
                       unaff_r4,unaff_lr);
  if (-1 < iVar5) {
    if (iVar5 < 0x7ff) {
      if (iVar5 == 0) goto LAB_2c648630;
    }
    else {
      iVar5 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar6 = (code *)FUN_2c648328();
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(_LAB_2c648678,iVar5);
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

