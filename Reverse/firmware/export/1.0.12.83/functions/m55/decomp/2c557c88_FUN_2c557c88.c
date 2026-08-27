/* FUN_2c557c88 @ 0x2c557c88 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c557c88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar5 = *(int **)(param_1 + 0x10);
  if ((piVar5 != (int *)0x0) && (piVar5[1] != 0)) {
    iVar1 = piVar5[1] + 1;
    piVar5[1] = iVar1;
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
    }
    lv_obj_add_flag_invalidate(uVar2,1);
    uVar2 = FUN_2c62e838(param_1,_LAB_2c557ce4);
    iVar1 = piVar5[1];
    piVar5[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar2 = (**(code **)(*piVar5 + 8))(piVar5);
      iVar1 = piVar5[2];
      piVar5[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c557ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*piVar5 + 0xc))(piVar5);
        return uVar2;
      }
    }
    return uVar2;
  }
  lv_obj_add_flag_invalidate(0,1);
  iVar1 = _LAB_2c557ce4;
  piVar5 = (int *)FUN_2c62ca10(DAT_2c62e8e0);
  uVar2 = DAT_2c62e8e0;
  if (piVar5 != (int *)0x0) {
    uVar6 = 0;
    do {
      piVar3 = (int *)FUN_2c62ca20(uVar2,piVar5);
      if (((*piVar5 == param_1) || (param_1 == 0)) && (iVar1 == 0 || piVar5[1] == iVar1)) {
        uVar6 = 1;
        FUN_2c62c998(uVar2,piVar5);
        if ((code *)piVar5[4] != (code *)0x0) {
          (*(code *)piVar5[4])(piVar5);
        }
        FUN_2c62bea8(piVar5);
        *DAT_2c62e8e4 = 1;
        iVar4 = FUN_2c62ca10(uVar2);
        if (iVar4 == 0) {
          FUN_2c62be40(*DAT_2c62e8e8);
        }
        else {
          FUN_2c62be4c(*DAT_2c62e8e8);
        }
      }
      piVar5 = piVar3;
    } while (piVar3 != (int *)0x0);
    return uVar6;
  }
  return 0;
}

