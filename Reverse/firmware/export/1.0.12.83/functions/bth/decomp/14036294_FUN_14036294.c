/* FUN_14036294 @ 0x14036294 */

void FUN_14036294(int param_1)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_140362ec;
  local_e = 0;
  FUN_1402e1fc(0x2036,&local_e,0);
  if (param_1 == 0) {
    local_e = local_e & 0xfffb;
  }
  else {
    local_e = local_e | 4;
  }
  FUN_1402e37c(0x2036);
  if (*DAT_140362ec == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

