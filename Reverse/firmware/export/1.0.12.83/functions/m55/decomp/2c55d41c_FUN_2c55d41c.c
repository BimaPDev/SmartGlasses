/* FUN_2c55d41c @ 0x2c55d41c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c55d41c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar5 = *(int *)(*param_1 + -0x10);
  piVar6 = *(int **)((int)param_1 + iVar5 + 0x10);
  if ((piVar6 != (int *)0x0) && (piVar6[1] != 0)) {
    iVar1 = piVar6[1] + 1;
    piVar6[1] = iVar1;
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)((int)param_1 + iVar5 + 0xc);
    }
    lv_obj_add_flag_invalidate(uVar2,1);
    uVar2 = FUN_2c62e838(param_1,_LAB_2c55d480);
    iVar5 = piVar6[1];
    piVar6[1] = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      uVar2 = (**(code **)(*piVar6 + 8))(piVar6);
      iVar5 = piVar6[2];
      piVar6[2] = iVar5 + -1;
      if (iVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c55d468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*piVar6 + 0xc))(piVar6);
        return uVar2;
      }
    }
    return uVar2;
  }
  lv_obj_add_flag_invalidate(0,1);
  iVar5 = _LAB_2c55d480;
  puVar3 = (undefined4 *)FUN_2c62ca10(DAT_2c62e8e0);
  uVar2 = DAT_2c62e8e0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar7 = 0;
    do {
      puVar4 = (undefined4 *)FUN_2c62ca20(uVar2,puVar3);
      if ((((int *)*puVar3 == param_1) || (param_1 == (int *)0x0)) &&
         (iVar5 == 0 || puVar3[1] == iVar5)) {
        uVar7 = 1;
        FUN_2c62c998(uVar2,puVar3);
        if ((code *)puVar3[4] != (code *)0x0) {
          (*(code *)puVar3[4])(puVar3);
        }
        FUN_2c62bea8(puVar3);
        *DAT_2c62e8e4 = 1;
        iVar1 = FUN_2c62ca10(uVar2);
        if (iVar1 == 0) {
          FUN_2c62be40(*DAT_2c62e8e8);
        }
        else {
          FUN_2c62be4c(*DAT_2c62e8e8);
        }
      }
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)0x0);
    return uVar7;
  }
  return 0;
}

