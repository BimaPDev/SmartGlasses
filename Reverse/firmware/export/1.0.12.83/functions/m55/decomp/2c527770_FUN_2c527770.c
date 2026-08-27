/* FUN_2c527770 @ 0x2c527770 */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c527770(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10c) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5278f0,0x197,_LAB_2c5278ec,_LAB_2c5278e8);
  }
  iVar7 = *(int *)(param_1 + 0x104);
  if (iVar7 != 0) {
    uVar2 = FUN_2c5e2e8c(_LAB_2c5278c8);
    FUN_2c63140c(iVar7,uVar2);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x104),1);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  lv_obj_add_flag_invalidate(iVar1,1);
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 == 0) {
    uVar2 = FUN_2c6313f4(param_2);
    *(undefined4 *)(param_1 + 0x110) = uVar2;
    FUN_2c6072bc(uVar2,2,0,0x9c);
    iVar1 = *(int *)(param_1 + 0x110);
  }
  if (param_3 == 0) {
    uVar2 = FUN_2c5e2e8c(_LAB_2c5278cc);
    FUN_2c63140c(iVar1,uVar2);
    uVar8 = *(undefined4 *)(param_1 + 0x10c);
    uVar2 = registry_lookup(_LAB_2c5278d0);
    FUN_2c638814(uVar8,_LAB_2c5278d4,uVar2);
    iVar1 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x110),1);
  }
  else {
    uVar2 = FUN_2c5e2e8c(_LAB_2c5278d8);
    FUN_2c63140c(iVar1,uVar2);
    FUN_2c525874();
    FUN_2c5259c0();
    pcVar3 = (char *)FUN_2c5260c4();
    pcVar5 = _LAB_2c5278dc;
    if ((pcVar3 != (char *)0x0) && (pcVar5 = pcVar3, *pcVar3 == '\0')) {
      pcVar5 = _LAB_2c5278dc;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x10c);
    uVar2 = FUN_2c529960(*(undefined4 *)(param_1 + 0x40),pcVar5);
    uVar8 = registry_lookup(_LAB_2c5278e0);
    FUN_2c638814(uVar9,_LAB_2c5278e4,uVar2,uVar8);
    iVar1 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x110),1);
  }
  if (iVar1 != 0) {
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x110),1);
  }
  if ((*(int *)(param_1 + 0x114) != 0) &&
     (iVar1 = FUN_2c606b94(*(int *)(param_1 + 0x114),1), iVar1 == 0)) {
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x114),1);
  }
  iVar1 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x10c),1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10c);
    iVar6 = *DAT_2c606b68;
    iVar7 = FUN_2c607214();
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe;
    FUN_2c607df0(iVar1);
    iVar4 = FUN_2c607214(iVar1);
    if (iVar4 != 0) {
      FUN_2c6041d4(iVar1);
      FUN_2c607248();
      FUN_2c607248(iVar1);
    }
    iVar4 = FUN_2c607214(iVar1);
    if (iVar4 == iVar7) {
      if (*DAT_2c606b68 == iVar6) {
        return;
      }
    }
    else {
      FUN_2c6041d4(iVar1);
      if (*DAT_2c606b68 == iVar6) {
        FUN_2c607248();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

