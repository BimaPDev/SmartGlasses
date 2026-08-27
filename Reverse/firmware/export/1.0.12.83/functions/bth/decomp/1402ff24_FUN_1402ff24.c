/* FUN_1402ff24 @ 0x1402ff24 */

void FUN_1402ff24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  ushort local_e;
  uint local_c;
  
  local_c = *DAT_1402ff60;
  FUN_1402e1fc(0x5e,&local_e,param_3,0);
  if ((*DAT_1402ff60 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(((local_e ^ 4) & 7) >> 2,extraout_r1,*DAT_1402ff60 ^ local_c,0);
}

