/* FUN_14030968 @ 0x14030968 */

undefined4 FUN_14030968(undefined4 param_1)

{
  char *pcVar1;
  ushort local_e;
  int local_c;
  
  local_c = *DAT_14030a10;
  if ((*DAT_14030a0c == '\0') || (*DAT_14030a14 != '\0')) {
    if (*DAT_14030a18 != '\0') {
      *DAT_14030a18 = '\0';
      FUN_1402d918();
      FUN_1402e1fc(0x1074,&local_e);
      local_e = local_e & 0xfdff;
      param_1 = FUN_1402e37c(0x1074);
    }
  }
  else if (*DAT_14030a18 == '\0') {
    *DAT_14030a18 = '\x01';
    FUN_1402e1fc(0x1074,&local_e);
    local_e = local_e | 0x200;
    FUN_1402e37c(0x1074);
    if (*DAT_14030a10 == local_c) {
      if (*DAT_1402da30 == '\0') {
        return 0;
      }
      FUN_140e5818(1);
      pcVar1 = DAT_1402da38;
      *(uint *)(DAT_1402da34 + 0xbc) = *(uint *)(DAT_1402da34 + 0xbc) & 0xffffffef;
      if ((int)pcVar1[1] != (int)*pcVar1) {
        FUN_1402d7e8(1);
        FUN_1402d7e8(2,(int)pcVar1[1]);
        return 0;
      }
      FUN_1402d7e8(3,(int)pcVar1[1]);
      return 0;
    }
    goto LAB_14030a08;
  }
  if (*DAT_14030a10 == local_c) {
    return param_1;
  }
LAB_14030a08:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

