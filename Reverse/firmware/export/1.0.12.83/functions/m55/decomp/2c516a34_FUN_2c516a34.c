/* FUN_2c516a34 @ 0x2c516a34 */

void FUN_2c516a34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_2c606b94(uVar2,1);
  if (iVar1 != 0) {
    return;
  }
  lv_obj_add_flag_invalidate(uVar2,1);
  return;
}

