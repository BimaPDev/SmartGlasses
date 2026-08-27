/* FUN_2c51e4b4 @ 0x2c51e4b4 */

void FUN_2c51e4b4(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x30))();
  if (iVar4 < 2) {
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x24),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x1c),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x20),1);
  }
  else {
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x24),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x1c),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x20),1);
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x30))(*(int **)(param_1 + 8));
  if ((iVar4 != 0) && (0 < iVar3)) {
    cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(*(int **)(param_1 + 8),iVar4);
    cVar1 = (char)iVar3;
    iVar4 = *(int *)(param_1 + 0x24);
    if (('\0' < cVar1) && (cVar2 <= cVar1)) {
      *(char *)(iVar4 + 0x2d) = cVar1;
      *(char *)(iVar4 + 0x2e) = cVar2;
      FUN_2c607df0();
      return;
    }
    *(undefined1 *)(iVar4 + 0x2d) = 0;
    *(undefined1 *)(iVar4 + 0x2e) = 0;
    FUN_2c607df0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c51e4ac,0x12d,DAT_2c51e4b0,DAT_2c51e4a8,DAT_2c51e4a4,unaff_r4);
}

