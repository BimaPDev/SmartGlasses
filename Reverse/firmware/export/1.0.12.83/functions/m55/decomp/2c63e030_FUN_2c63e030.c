/* FUN_2c63e030 @ 0x2c63e030 */

/* WARNING: Removing unreachable block (ram,0x2c63d930) */
/* WARNING: Removing unreachable block (ram,0x2c63d93e) */
/* WARNING: Removing unreachable block (ram,0x2c63d9b8) */

void FUN_2c63e030(void)

{
  ulonglong uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_18;
  
  iVar5 = *DAT_2c63e0cc;
  iVar3 = FUN_2c6411ac();
  if (iVar3 == 0) {
    if (*DAT_2c63e0cc == iVar5) {
      return;
    }
  }
  else {
    iVar3 = FUN_2c5e31b4(0x1f,&local_18);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c63e0dc,0x178,DAT_2c63e0d8,DAT_2c63e0d4);
    }
    local_18 = local_18 & 0xff;
    uVar4 = 0;
    if (local_18 != 0) {
      if (((local_18 * 0xcd & 0xff) >> 1 | local_18 * 0x6680 & 0xff) < 0x1a) {
        uVar4 = local_18 - 10 & 0xff;
      }
      else {
        uVar4 = (uint)((ulonglong)DAT_2c63e0d0 * (ulonglong)local_18 >> 0x23) * 10 - 10 & 0xff;
      }
    }
    if (*DAT_2c63e0cc == iVar5) {
      uVar2 = FUN_2c489b44();
      FUN_2c63b92c(1);
      FUN_2c63eb94();
      iVar3 = FUN_2c63e864();
      if (iVar3 == 0) {
        FUN_2c6411e0();
        iVar3 = FUN_2c640208();
        if (iVar3 != 0) {
          FUN_2c63f744(0,1);
        }
        iVar3 = FUN_2c63e954(uVar2,0);
        if (iVar3 == 0) {
          uVar1 = (ulonglong)DAT_2c63da80;
          FUN_2c5e317c(0x1f,1,uVar4,0,1);
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,DAT_2c63da6c,0xa1,DAT_2c63da8c,DAT_2c63da84,
                       (uint)(uVar1 * uVar4 >> 0x23) * 10);
        }
      }
      FUN_2c63e8a0(uVar4,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c63da6c,0x18,DAT_2c63da70,DAT_2c63da68,uVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

