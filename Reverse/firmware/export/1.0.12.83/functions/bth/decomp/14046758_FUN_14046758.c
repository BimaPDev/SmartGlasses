/* FUN_14046758 @ 0x14046758 */

void FUN_14046758(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  undefined1 auStack_1c [8];
  undefined1 local_14;
  uint local_c;
  
  local_c = *DAT_1404678c;
  FUN_1403cdd0(auStack_1c,0,param_3,0);
  if ((*DAT_1404678c ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(local_14,extraout_r1,*DAT_1404678c ^ local_c,0);
}

