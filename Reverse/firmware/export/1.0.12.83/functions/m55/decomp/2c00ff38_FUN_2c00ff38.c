/* FUN_2c00ff38 @ 0x2c00ff38 */

void FUN_2c00ff38(void)

{
  ushort *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  ushort local_16;
  int local_14;
  
  puVar1 = DAT_2c00ffa8;
  local_14 = *DAT_2c00ffa4;
  FUN_2c013e0c();
  pcVar2 = DAT_2c00ffac;
  if (*puVar1 != 0) {
    if ((*DAT_2c00ffac == '\0') || (*DAT_2c00ffac == '\x03')) {
      uVar3 = 0x60;
    }
    else {
      uVar3 = 0x101;
    }
    FUN_2c008e4c(uVar3,&local_16);
    local_16 = local_16 & ~*puVar1;
    if ((*pcVar2 == '\0') || (*pcVar2 == '\x03')) {
      uVar3 = 0x60;
    }
    else {
      uVar3 = 0x101;
    }
    FUN_2c008f74(uVar3);
  }
  if (*DAT_2c00ffa4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

