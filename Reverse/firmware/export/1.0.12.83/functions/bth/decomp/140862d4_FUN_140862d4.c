/* FUN_140862d4 @ 0x140862d4 */

int FUN_140862d4(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  int local_c;
  
  local_c = *DAT_14086328;
  local_e = (undefined1)param_2;
  local_d = (undefined1)((uint)param_2 >> 8);
  local_f = (undefined1)((uint)param_1 >> 8);
  local_10 = (undefined1)param_1;
  cVar1 = FUN_140779a8(0xc1c,&local_10,4);
  if (*DAT_14086328 == local_c) {
    return (int)cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

