/* FUN_140307d0 @ 0x140307d0 */

void FUN_140307d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_14030820;
  FUN_1402e1fc(0x801d,&local_e,param_3,0);
  if (param_1 == 0) {
    local_e = local_e & 0x7fff;
  }
  else {
    local_e = local_e | 0x8000;
  }
  FUN_1402e37c(0x801d);
  if (*DAT_14030820 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

