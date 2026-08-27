/* FUN_2c5d2bb8 @ 0x2c5d2bb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d2bb8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [68];
  int iStack_14;
  
  iStack_14 = *_LAB_2c5d2cc4;
  FUN_2c5229e8();
  iVar1 = FUN_2c522634();
  uVar4 = *(undefined4 *)(param_1 + 0xf0);
  if (iVar1 == 0) {
    uVar2 = registry_lookup(0x1023);
    FUN_2c638730(uVar4,uVar2);
    if (param_2 != 0) goto LAB_2c5d2c28;
LAB_2c5d2bea:
    uVar3 = *(uint *)(param_1 + 0xe8);
    if ((int)(uint)(uVar3 < 3) <= *(int *)(param_1 + 0xec)) {
      if (*_LAB_2c5d2cc4 == iStack_14) {
        lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xf0),1);
        return;
      }
      goto LAB_2c5d2cbe;
    }
    *(uint *)(param_1 + 0xe8) = uVar3 + 1;
    *(uint *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + (uint)(0xfffffffe < uVar3);
    FUN_2c5e317c(0x2c);
    FUN_2c5cfd9c(auStack_58,*(undefined4 *)(param_1 + 0xf0),param_2,0xff,_LAB_2c5d2cd4,_LAB_2c5d2cd0
                 ,param_2,_LAB_2c5d2cc8,param_2);
    FUN_2c62e8ec(auStack_58);
    if (*(int *)(param_1 + 0xf4) != 0) {
      FUN_2c62be74();
      FUN_2c62be4c(*(undefined4 *)(param_1 + 0xf4));
    }
  }
  else {
    uVar2 = registry_lookup(0x1065);
    FUN_2c638730(uVar4,uVar2);
    if (param_2 == 0) goto LAB_2c5d2bea;
LAB_2c5d2c28:
    FUN_2c5cfd9c(auStack_58,*(undefined4 *)(param_1 + 0xf0),0xff,0,0,_LAB_2c5d2cd0,_LAB_2c5d2ccc,
                 _LAB_2c5d2cc8,0);
    FUN_2c62e8ec(auStack_58);
    if (*(int *)(param_1 + 0xf4) != 0) {
      FUN_2c62be40();
    }
  }
  if (*_LAB_2c5d2cc4 == iStack_14) {
    return;
  }
LAB_2c5d2cbe:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

