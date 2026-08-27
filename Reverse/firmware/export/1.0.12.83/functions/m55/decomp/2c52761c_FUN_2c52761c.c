/* FUN_2c52761c @ 0x2c52761c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52761c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [20];
  int iStack_14;
  
  iStack_14 = *_LAB_2c527758;
  if (*(int *)(param_1 + 0x108) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x108),1,param_3,0);
  }
  iVar4 = *(int *)(param_1 + 0x104);
  if (iVar4 != 0) {
    uVar1 = FUN_2c5e2e8c(_LAB_2c52775c);
    FUN_2c63140c(iVar4,uVar1);
    iVar4 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x104),1);
    if (iVar4 != 0) {
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x104),1,param_3);
    }
  }
  FUN_2c66b4b8(auStack_28,_LAB_2c527760,param_3);
  if (*(int *)(param_1 + 0x114) == 0) {
    uVar1 = FUN_2c637344(param_2);
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    FUN_2c607048(uVar1,0x89,0x34);
    FUN_2c606e5c(*(undefined4 *)(param_1 + 0x114),2,0);
    uVar3 = *(undefined4 *)(param_1 + 0x114);
    uVar1 = FUN_2c5e2e80(_LAB_2c52776c);
    FUN_2c606e38(uVar3,uVar1,0);
    FUN_2c606e20(uVar3,0xff00ff00,0);
    FUN_2c606e2c(uVar3,0xff,0);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x114),2,0,0xa2);
    FUN_2c638730(*(undefined4 *)(param_1 + 0x114),auStack_28);
  }
  else {
    FUN_2c638730(*(int *)(param_1 + 0x114),auStack_28);
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x10c),1);
    FUN_2c525874();
    FUN_2c5259c0();
    pcVar2 = (char *)FUN_2c5260c4();
    pcVar5 = _LAB_2c527764;
    if ((pcVar2 != (char *)0x0) && (pcVar5 = pcVar2, *pcVar2 == '\0')) {
      pcVar5 = _LAB_2c527764;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x10c);
    uVar1 = registry_lookup(_LAB_2c527768);
    uVar3 = FUN_2c529960(*(undefined4 *)(param_1 + 0x40),pcVar5);
    FUN_2c638814(uVar6,uVar1,uVar3);
  }
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x114),1);
  if (*_LAB_2c527758 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

