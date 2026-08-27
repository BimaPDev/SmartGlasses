/* FUN_2c504e24 @ 0x2c504e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c504e24(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x10),1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x14),1);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  iStack_14 = *_LAB_2c63dbd4;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c63dbe4,0x38,_LAB_2c63dbe0,_LAB_2c63dbdc);
  }
  iVar3 = FUN_2c6411ac();
  if (iVar3 != 0) {
    FUN_2c6411e0();
    puVar1 = _LAB_2c63dbd8;
    FUN_2c63f744(0,1);
    FUN_2c63b92c(1);
    FUN_2c62be40(*puVar1);
    FUN_2c62be74(*puVar1);
    func_0x2c63eba0(iVar2);
    iVar2 = FUN_2c5e31b4(0x1f,auStack_20);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c63dbe4,0x178,_LAB_2c63dbec,_LAB_2c63dbe8);
    }
    FUN_2c63e954(auStack_20[0],1);
  }
  if (*_LAB_2c63dbd4 == iStack_14) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

