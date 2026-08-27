/* FUN_2c4b4f50 @ 0x2c4b4f50 */

void FUN_2c4b4f50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c4b4f9c;
  if (*DAT_2c4b4f9c == 0) {
    iVar2 = FUN_2c4b4ef8(DAT_2c4b4fb4,0,DAT_2c4b4fb0);
    *piVar1 = iVar2;
  }
  FUN_2c674278(0xf,0x13);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_2c6448b4(iVar2,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x5b,DAT_2c4b4fac,DAT_2c4b4fa8,DAT_2c4b4fa4,DAT_2c4b4fa0,0);
}

