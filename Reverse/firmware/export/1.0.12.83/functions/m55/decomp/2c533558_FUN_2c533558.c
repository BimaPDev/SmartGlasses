/* FUN_2c533558 @ 0x2c533558 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c533558(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 0x14);
  iVar1 = FUN_2c532a4c();
  if (iVar1 == 0) {
    iVar1 = FUN_2c5e8cf4(7,0);
    if (iVar1 == 0) {
      uStack_18 = _LAB_2c533630;
      uStack_14 = 7;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c533638,0x92,_LAB_2c533634);
    }
    FUN_2c5332dc(param_1,uVar2);
    iVar1 = FUN_2c5e8cf4(7,0);
  }
  else {
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0xc)) {
      FUN_2c532414(param_1,1);
    }
    iVar1 = FUN_2c5e8cf4(7,0);
  }
  if (iVar1 == 0) {
    uStack_14 = 7;
    uStack_18 = _LAB_2c533630;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c533638,0x92,_LAB_2c533634);
  }
  iVar1 = (int)((longlong)_LAB_2c53362c * (longlong)iVar3 >> 0x22) - (iVar3 >> 0x1f);
  iVar3 = iVar3 + iVar1 * -10;
  FUN_2c532c00(param_1,iVar3,iVar1);
  if (iVar3 != 1) {
    return;
  }
  uStack_18 = registry_lookup(0x6112);
  iVar1 = *DAT_2c5e40ac;
  uStack_1c = 0;
  uStack_14 = 0;
  FUN_2c5e4008(&uStack_1c);
  if (*DAT_2c5e40ac != iVar1) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

