/* FUN_2c5260c4 @ 0x2c5260c4 */

undefined4 FUN_2c5260c4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_84 [112];
  int local_14;
  
  iVar3 = *(int *)(param_1 + 0x54);
  local_14 = *DAT_2c526130;
  if (iVar3 != 0) {
    FUN_2c674268(param_1,0,0x40,0);
    (**(code **)(iVar3 + 0xbc))(auStack_84);
    uVar1 = FUN_2c5dc51c(auStack_84,1);
    uVar2 = FUN_2c66c4ec();
    FUN_2c674668(param_1,uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(4,uVar1);
  }
  if (*DAT_2c526130 == local_14) {
    return DAT_2c526134;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

