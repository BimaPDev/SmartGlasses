/* FUN_2c6498e2 @ 0x2c6498e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6498e2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_r4;
  int iVar8;
  undefined4 unaff_lr;
  undefined4 *puVar7;
  
  puVar2 = (undefined4 *)FUN_2c66d654(*(undefined4 *)(param_2 + 4),0,param_3,param_4,param_4);
  uVar3 = FUN_2c66d654(*(undefined4 *)(param_2 + 8),0,0x10);
  if (param_1 == 3) {
    iVar8 = 4;
  }
  else {
    uVar4 = FUN_2c66d654(*(undefined4 *)(param_2 + 0xc),0,10);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (0xfffff < uVar4) {
      uVar4 = 0x100000;
    }
    iVar8 = uVar4 << 2;
  }
  puVar6 = puVar2;
  do {
    puVar7 = puVar6 + 1;
    *puVar6 = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != (undefined4 *)(iVar8 + (int)puVar2));
  iVar5 = *DAT_2c648674;
  iVar8 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c649948,&stack0xfffffff4,&stack0xfffffff4,iVar5,
                       unaff_r4,unaff_lr);
  if (-1 < iVar8) {
    if (iVar8 < 0x7ff) {
      if (iVar8 == 0) goto LAB_2c648630;
    }
    else {
      iVar8 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar1 = (code *)FUN_2c648328();
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(_LAB_2c648678,iVar8);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar8);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar5) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

