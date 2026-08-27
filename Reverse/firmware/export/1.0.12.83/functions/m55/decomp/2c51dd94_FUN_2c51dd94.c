/* FUN_2c51dd94 @ 0x2c51dd94 */

void FUN_2c51dd94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if (iVar1 == 0) {
    uVar3 = 0x130;
    uVar2 = DAT_2c51de34;
  }
  else {
    iVar1 = FUN_2c5efa10();
    if (iVar1 != 0) {
      iVar1 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x1c),1);
      if ((iVar1 != 0) && (iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(), iVar1 != 0)) {
        FUN_2c606abc(*(undefined4 *)(param_1 + 0x1c),1);
        lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
        uVar3 = DAT_2c51de30;
        lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c51de2c,0x128,DAT_2c51de28,uVar3);
      }
      return;
    }
    uVar3 = 300;
    uVar2 = DAT_2c51de24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c51de2c,uVar3,DAT_2c51de28,uVar2);
}

