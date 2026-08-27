/* FUN_2c505e8c @ 0x2c505e8c */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c505e8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar1 = FUN_2c504998();
  FUN_2c504c98(uVar1,param_1 + 0x10);
  FUN_2c504998();
  iVar2 = func_0x2c504b58();
  if (iVar2 == 1) {
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    uVar1 = registry_lookup(_LAB_2c505f80);
    FUN_2c504998();
    uVar3 = FUN_2c504a44();
    uVar4 = registry_lookup(_LAB_2c505f84);
    FUN_2c638814(uVar8,_LAB_2c505f88,uVar1,uVar3,uVar4);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_2c606abc(*(int *)(param_1 + 0x18),1);
    }
    iVar2 = *(int *)(param_1 + 0x14);
  }
  else {
    FUN_2c504998();
    iVar2 = func_0x2c504b58();
    if (iVar2 != 2) goto LAB_2c505eb6;
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    uVar1 = registry_lookup(_LAB_2c505f80);
    FUN_2c504998();
    uVar3 = FUN_2c504b10();
    uVar4 = registry_lookup(_LAB_2c505f84);
    FUN_2c638814(uVar8,_LAB_2c505f88,uVar1,uVar3,uVar4);
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_2c606abc(*(int *)(param_1 + 0x14),1);
    }
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (iVar2 != 0) {
    lv_obj_add_flag_invalidate(iVar2,1);
  }
LAB_2c505eb6:
  FUN_2c5eb89c(_LAB_2c505f7c,*(undefined4 *)(param_1 + 0x20),0,_LAB_2c505f78,param_1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x1c),1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x20),1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x24),1);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    return;
  }
  iVar7 = *DAT_2c606b68;
  iVar5 = FUN_2c607214();
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffe;
  FUN_2c607df0(iVar2);
  iVar6 = FUN_2c607214(iVar2);
  if (iVar6 != 0) {
    FUN_2c6041d4(iVar2);
    FUN_2c607248();
    FUN_2c607248(iVar2);
  }
  iVar6 = FUN_2c607214(iVar2);
  if (iVar6 == iVar5) {
    if (*DAT_2c606b68 == iVar7) {
      return;
    }
  }
  else {
    FUN_2c6041d4(iVar2);
    if (*DAT_2c606b68 == iVar7) {
      FUN_2c607248();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

