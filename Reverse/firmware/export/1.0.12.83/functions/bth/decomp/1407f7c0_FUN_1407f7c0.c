/* FUN_1407f7c0 @ 0x1407f7c0 */

undefined4 FUN_1407f7c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  
  local_c = *DAT_1407f804;
  local_14 = DAT_1407f808;
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  local_18 = 2;
  local_10 = param_1;
  FUN_1409073c(param_1,&local_18);
  if (*DAT_1407f804 == local_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

