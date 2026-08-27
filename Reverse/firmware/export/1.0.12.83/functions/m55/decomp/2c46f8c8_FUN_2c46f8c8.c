/* FUN_2c46f8c8 @ 0x2c46f8c8 */

void FUN_2c46f8c8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_2c47245c(0,0x80);
  FUN_2c674268(iVar3,1,0x81);
  puVar2 = DAT_2c4726d4;
  piVar1 = DAT_2c4726d0;
  if (iVar3 == 0) {
    return;
  }
  if (*DAT_2c4726d0 != 0) {
    FUN_2c644044(*DAT_2c4726d4,0xffffffff);
    FUN_2c47231c(*piVar1,DAT_2c4726d8,0,iVar3);
    FUN_2c644080(*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4,DAT_2c4726e0,DAT_2c4726dc);
}

