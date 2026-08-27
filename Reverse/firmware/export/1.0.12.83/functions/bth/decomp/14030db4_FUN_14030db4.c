/* FUN_14030db4 @ 0x14030db4 */

void FUN_14030db4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_14030e38;
  FUN_1402e1fc(0x200c,DAT_14030e3c,param_3,0);
  FUN_1402e1fc(0x2076,DAT_14030e40);
  FUN_1402e1fc(0x200c,&local_e);
  local_e = local_e & 0xfffc | 1;
  FUN_1402e37c(0x200c);
  FUN_1402e1fc(0x2076,&local_e);
  local_e = local_e & 0xfff | 0x5000;
  FUN_1402e37c(0x2076);
  if (*DAT_14030e38 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

