/* FUN_1402fc00 @ 0x1402fc00 */

void FUN_1402fc00(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_1402fcac;
  FUN_1402e1fc(0x44,&local_e,param_3,0);
  if (param_1 == 0) {
    local_e = local_e & 0xffdf;
    FUN_1402e37c(0x44);
    FUN_140307d0(0);
    if (1 < *DAT_1402fcb0 - 1) goto LAB_1402fc3e;
    FUN_1402e1fc(0x70,&local_e);
    local_e = local_e & 0xfffe;
  }
  else {
    local_e = local_e | 0x20;
    FUN_1402e37c(0x44);
    FUN_140307d0(param_1);
    if (1 < *DAT_1402fcb0 - 1) goto LAB_1402fc3e;
    FUN_1402e1fc(0x70,&local_e);
    local_e = local_e | 1;
  }
  FUN_1402e37c(0x70);
LAB_1402fc3e:
  if (*DAT_1402fcac == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

