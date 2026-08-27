/* FUN_2c00fec0 @ 0x2c00fec0 */

void FUN_2c00fec0(void)

{
  ushort *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  ushort local_16;
  int local_14;
  
  pcVar2 = DAT_2c00ff34;
  puVar1 = DAT_2c00ff30;
  local_14 = *DAT_2c00ff2c;
  if (*DAT_2c00ff30 != 0) {
    if ((*DAT_2c00ff34 == '\0') || (*DAT_2c00ff34 == '\x03')) {
      uVar3 = 0x60;
    }
    else {
      uVar3 = 0x101;
    }
    FUN_2c008e4c(uVar3,&local_16);
    local_16 = local_16 | *puVar1;
    if ((*pcVar2 == '\0') || (*pcVar2 == '\x03')) {
      uVar3 = 0x60;
    }
    else {
      uVar3 = 0x101;
    }
    FUN_2c008f74(uVar3);
  }
  FUN_2c013acc();
  if (*DAT_2c00ff2c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

