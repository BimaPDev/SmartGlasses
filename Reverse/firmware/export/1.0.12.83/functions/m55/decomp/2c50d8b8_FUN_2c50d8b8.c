/* FUN_2c50d8b8 @ 0x2c50d8b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c50d8b8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [20];
  int iStack_14;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x10),1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x14),1);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  iStack_14 = *_LAB_2c63fc6c;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c63fc80,0x2ec,_DAT_2c63fc7c,_LAB_2c63fc84);
  }
  iVar3 = FUN_2c63ed48(3,auStack_28,1,0);
  puVar1 = _LAB_2c63fc74;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c63fc80,0x2f3,_DAT_2c63fc7c,_LAB_2c63fc78);
  }
  FUN_2c64078c(_LAB_2c63fc70);
  FUN_2c6411e0();
  FUN_2c63dc4c(0,1);
  FUN_2c62be40(*puVar1);
  FUN_2c62be74(*puVar1);
  func_0x2c640a60(iVar2);
  FUN_2c640b70(auStack_28,1);
  if (*_LAB_2c63fc6c == iStack_14) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

