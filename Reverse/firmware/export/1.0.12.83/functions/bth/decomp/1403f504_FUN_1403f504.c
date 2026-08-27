/* FUN_1403f504 @ 0x1403f504 */

undefined4 FUN_1403f504(undefined4 param_1,undefined2 *param_2)

{
  undefined1 local_118 [4];
  undefined2 local_114;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  int local_c;
  
  local_c = *DAT_1403f588;
  local_118[0] = 0x19;
  local_112 = param_2[1];
  local_110 = param_2[2];
  local_10e = param_2[3];
  local_10c = param_2[4];
  local_114 = *param_2;
  FUN_1402a6e8(4,0x5bd,DAT_1403f598,DAT_1403f594,DAT_1403f590,DAT_1403f58c,*(undefined1 *)param_2,
               local_112,local_110,local_10e,local_10c);
  FUN_14041ad8(local_118,0);
  if (*DAT_1403f588 == local_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

