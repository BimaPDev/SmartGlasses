/* FUN_1407f764 @ 0x1407f764 */

undefined4 FUN_1407f764(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *puStack_10;
  int local_c;
  
  local_c = *DAT_1407f7b8;
  if (*(byte *)(param_1 + 0x3b) < 3) {
    *(undefined1 *)(param_1 + 0x3b) = 3;
    local_14 = DAT_1407f7bc;
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
    local_18 = 2;
    puStack_10 = param_1;
    FUN_1409073c(param_1,&local_18);
  }
  if (*DAT_1407f7b8 == local_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

