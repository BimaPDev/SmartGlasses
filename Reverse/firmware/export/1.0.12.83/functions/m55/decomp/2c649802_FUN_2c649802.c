/* FUN_2c649802 @ 0x2c649802 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c649802(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined1 *puVar8;
  
  puVar4 = (undefined1 *)FUN_2c66d654(*(undefined4 *)(param_2 + 4),0,param_3,param_4,param_4);
  uVar1 = FUN_2c66d654(*(undefined4 *)(param_2 + 8),0,0x10);
  if (param_1 == 3) {
    uVar5 = 1;
  }
  else {
    uVar5 = FUN_2c66d654(*(undefined4 *)(param_2 + 0xc),0,10);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    if (0xfffff < uVar5) {
      uVar5 = 0x100000;
    }
  }
  puVar8 = puVar4;
  do {
    puVar7 = puVar8 + 1;
    *puVar8 = uVar1;
    puVar8 = puVar7;
  } while (puVar7 != puVar4 + uVar5);
  iVar6 = *DAT_2c648674;
  iVar2 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c649864,&stack0xfffffff4,&stack0xfffffff4,iVar6,
                       unaff_r4,unaff_lr);
  if (-1 < iVar2) {
    if (iVar2 < 0x7ff) {
      if (iVar2 == 0) goto LAB_2c648630;
    }
    else {
      iVar2 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar3 = (code *)FUN_2c648328();
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(_LAB_2c648678,iVar2);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar2);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar6) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

