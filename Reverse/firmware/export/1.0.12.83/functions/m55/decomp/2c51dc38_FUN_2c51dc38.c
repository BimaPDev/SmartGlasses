/* FUN_2c51dc38 @ 0x2c51dc38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_2c51dc38(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  iVar3 = FUN_2c602618(param_2);
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8));
  if (iVar3 == 0xd2) {
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x24),1);
    uVar2 = _LAB_2c51dd88;
    uVar1 = _LAB_2c51dd70;
    cVar5 = *(char *)(param_1 + 0x28);
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0x28) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51dd74,0x14b,uVar1,uVar2);
    }
  }
  else if (iVar3 == 0xd3) {
    if (*(char *)(param_1 + 0x28) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51dd74,0x151,_LAB_2c51dd70,_LAB_2c51dd90);
    }
    cVar5 = '\0';
    if (iVar4 != 0) {
      iVar3 = FUN_2c5efa10();
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c51dd74,0x159,_LAB_2c51dd70,_LAB_2c51dd8c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51dd74,0x156,_LAB_2c51dd70,_LAB_2c51dd78);
    }
  }
  else {
    if (iVar3 == 0xd4 || iVar3 == 0xe3) {
      if (*(char *)(param_1 + 0x28) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c51dd74,0x162,_LAB_2c51dd70,_LAB_2c51dd7c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51dd74,0x165,_LAB_2c51dd70,_LAB_2c51dd6c);
    }
    cVar5 = '\0';
  }
  return cVar5;
}

