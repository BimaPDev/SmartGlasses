/* FUN_1402e718 @ 0x1402e718 */

void FUN_1402e718(int param_1)

{
  ushort uVar1;
  ushort local_e;
  int local_c;
  
  local_c = *DAT_1402e7d4;
  if (*DAT_1402e7d0 == '\x02') {
    if (param_1 == 0) {
      uVar1 = 4;
    }
    else {
      uVar1 = 0x1c;
    }
    FUN_1402e1fc(0x120,&local_e,0);
    local_e = local_e & 0xffe3 | uVar1;
    FUN_1402e37c(0x120);
  }
  else if (*DAT_1402e7d0 == '\x01') {
    if (param_1 == 0) {
      uVar1 = 0x400;
    }
    else {
      uVar1 = 0x3c00;
    }
    FUN_1402e1fc(0x121,&local_e,0);
    local_e = local_e & 0xc3ff | uVar1;
    FUN_1402e37c(0x121);
  }
  else {
    if (param_1 == 0) {
      uVar1 = 0xc0;
    }
    else {
      uVar1 = 0;
    }
    FUN_1402e1fc(0xe,&local_e,0);
    local_e = local_e & 0xff3f | uVar1;
    FUN_1402e37c(0xe);
  }
  if (*DAT_1402e7d4 != local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

