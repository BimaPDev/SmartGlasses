/* FUN_140a6dec @ 0x140a6dec */

void FUN_140a6dec(void)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int iVar2;
  int local_18;
  uint local_14;
  uint local_c;
  
  local_c = *DAT_140a6e34;
  iVar2 = 0;
  while( true ) {
    do {
      FUN_140e53d8(&local_18,0,0xffffffff,iVar2);
      iVar2 = local_18;
    } while (local_18 != 8);
    if ((local_14 & 1) != 0) break;
    iVar2 = local_14 << 0x1e;
    uVar1 = 0;
    if (iVar2 < 0) {
LAB_140a6e18:
      if ((*DAT_140a6e34 ^ local_c) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc(uVar1,extraout_r1,*DAT_140a6e34 ^ local_c,0);
    }
  }
  uVar1 = 1;
  goto LAB_140a6e18;
}

