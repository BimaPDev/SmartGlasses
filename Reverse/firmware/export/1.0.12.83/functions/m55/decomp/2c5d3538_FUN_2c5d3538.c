/* FUN_2c5d3538 @ 0x2c5d3538 */

void FUN_2c5d3538(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    *(char *)(param_1 + 0x4c) = (char)param_2;
    if (param_2 == 0) {
      lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x44),1);
      return;
    }
    FUN_2c5c685c();
    iVar1 = FUN_2c5c6d5c();
    if (iVar1 == 0) {
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x44),1);
      return;
    }
  }
  return;
}

