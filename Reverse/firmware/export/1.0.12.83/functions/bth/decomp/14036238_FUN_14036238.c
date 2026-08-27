/* FUN_14036238 @ 0x14036238 */

void FUN_14036238(int param_1)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_14036290;
  local_e = 0;
  FUN_1402e1fc(0x2036,&local_e,0);
  if (param_1 == 0) {
    local_e = local_e & 0xfff7;
  }
  else {
    local_e = local_e | 8;
  }
  FUN_1402e37c(0x2036);
  if (*DAT_14036290 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

