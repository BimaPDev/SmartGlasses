/* FUN_140b0714 @ 0x140b0714 */

void FUN_140b0714(undefined4 param_1)

{
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  int local_c;
  
  local_c = *DAT_140b0774;
  local_10 = (undefined1)((uint)param_1 >> 0x18);
  local_f = (undefined1)((uint)param_1 >> 0x10);
  local_d = (undefined1)param_1;
  local_e = (undefined1)((uint)param_1 >> 8);
  FUN_140a49fc(0xfa,&local_10,4);
  if (*DAT_140b0774 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

