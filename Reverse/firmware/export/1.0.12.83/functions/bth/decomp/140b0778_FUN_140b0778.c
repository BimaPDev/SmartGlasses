/* FUN_140b0778 @ 0x140b0778 */

void FUN_140b0778(undefined1 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  int local_14;
  
  local_14 = *DAT_140b07e4;
  *DAT_140b07e0 = param_1;
  local_1c = (undefined1)((uint)param_2 >> 0x18);
  local_1b = (undefined1)((uint)param_2 >> 0x10);
  local_19 = (undefined1)param_2;
  local_1a = (undefined1)((uint)param_2 >> 8);
  local_18 = param_3;
  FUN_140a49fc(0xfb,&local_1c,5);
  if (*DAT_140b07e4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

