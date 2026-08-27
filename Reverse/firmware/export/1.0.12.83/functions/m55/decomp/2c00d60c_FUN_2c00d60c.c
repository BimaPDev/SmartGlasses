/* FUN_2c00d60c @ 0x2c00d60c */

void FUN_2c00d60c(void)

{
  char *pcVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined4 extraout_r1;
  ushort local_10;
  undefined1 auStack_e [2];
  uint local_c;
  
  pcVar1 = DAT_2c00d68c;
  local_c = *DAT_2c00d688;
  if (*DAT_2c00d68c == '\0') {
    FUN_2c013b4c();
    puVar3 = DAT_2c00d694;
    puVar2 = DAT_2c00d690;
    *pcVar1 = '\x01';
    *puVar2 = 1;
    *puVar3 = 0xf;
  }
  FUN_2c008e4c(0x2073,&local_10);
  FUN_2c008e4c(0x20ad,auStack_e);
  uVar4 = local_10 & 0x10;
  if ((local_10 & 0x10) != 0) {
    if (*DAT_2c00d690 < (local_10 & 0xf)) {
      if ((local_10 & 0xf) < *DAT_2c00d694) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  if ((*DAT_2c00d688 ^ local_c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8(uVar4,extraout_r1,*DAT_2c00d688 ^ local_c,0);
  }
  return;
}

