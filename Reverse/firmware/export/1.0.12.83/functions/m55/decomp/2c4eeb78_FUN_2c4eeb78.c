/* FUN_2c4eeb78 @ 0x2c4eeb78 */

void FUN_2c4eeb78(short param_1,short param_2,undefined4 param_3,short param_4,char param_5,
                 byte param_6,byte param_7,undefined4 param_8)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 local_40;
  ushort local_3c;
  undefined1 local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  int local_2c;
  
  local_2c = *DAT_2c4eec04;
  if (param_5 != '\0') {
    cVar2 = '\0';
    do {
      cVar2 = cVar2 + '\x01';
      FUN_2c6120a0(&local_40);
      local_40 = param_8;
      local_36 = 0xff;
      local_3c = (ushort)param_6;
      local_34 = param_1;
      local_32 = param_2;
      local_30 = param_1;
      local_2e = param_4 + param_2;
      uVar1 = FUN_2c4eda80();
      FUN_2c639ab4(uVar1,&local_34,2,&local_40);
      param_1 = param_1 + (ushort)param_7 + (ushort)param_6;
    } while (param_5 != cVar2);
  }
  if (*DAT_2c4eec04 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

