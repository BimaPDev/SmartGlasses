/* FUN_2c52d3b8 @ 0x2c52d3b8 */

undefined4 FUN_2c52d3b8(undefined4 param_1,int param_2,int param_3)

{
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  int local_c;
  
  local_c = *DAT_2c52d410;
  FUN_2c4fd9cc(param_1,param_2,param_2 + param_3 * 8,0,auStack_24,auStack_10,auStack_14,auStack_20,
               auStack_18,auStack_1c,param_2,param_3);
  if (*DAT_2c52d410 == local_c) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

