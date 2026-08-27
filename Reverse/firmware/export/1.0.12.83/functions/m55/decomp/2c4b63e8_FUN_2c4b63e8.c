/* FUN_2c4b63e8 @ 0x2c4b63e8 */

undefined4 FUN_2c4b63e8(undefined4 param_1)

{
  char *pcVar1;
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b6490;
  if ((*DAT_2c4b648c == '\0') || (*DAT_2c4b6494 != '\0')) {
    if (*DAT_2c4b6498 != '\0') {
      *DAT_2c4b6498 = '\0';
      FUN_2c4ba6b8();
      FUN_2c673e88(0x1074,&local_e);
      local_e = local_e & 0xfdff;
      param_1 = FUN_2c673d68(0x1074);
    }
  }
  else if (*DAT_2c4b6498 == '\0') {
    *DAT_2c4b6498 = '\x01';
    FUN_2c673e88(0x1074,&local_e);
    local_e = local_e | 0x200;
    FUN_2c673d68(0x1074);
    pcVar1 = DAT_2c4ba7d4;
    if (*DAT_2c4b6490 == local_c) {
      if (*DAT_2c4ba7d0 == '\0') {
        return 0;
      }
      FUN_2c6444fc(1);
      *(uint *)(DAT_2c4ba7d8 + 0xbc) = *(uint *)(DAT_2c4ba7d8 + 0xbc) & 0xffffffef;
      if ((int)pcVar1[1] != (int)*pcVar1) {
        FUN_2c4b7a4c(1);
        FUN_2c4b7a4c(2,(int)pcVar1[1]);
        return 0;
      }
      FUN_2c4b7a4c(3,(int)pcVar1[1]);
      return 0;
    }
    goto LAB_2c4b6488;
  }
  if (*DAT_2c4b6490 == local_c) {
    return param_1;
  }
LAB_2c4b6488:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

