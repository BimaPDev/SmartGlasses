/* FUN_2c5017e2 @ 0x2c5017e2 */

void FUN_2c5017e2(undefined4 *param_1)

{
  lv_obj_add_flag_invalidate(*param_1,1);
  lv_obj_add_flag_invalidate(param_1[1],1);
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}

