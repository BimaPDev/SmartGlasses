/* FUN_2c491b08 @ 0x2c491b08 */

void FUN_2c491b08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = DAT_2c491b7c;
  if ((*DAT_2c491b74 != 0) && (*DAT_2c491b78 != -1)) {
    FUN_2c674268(*DAT_2c491b7c,0,0xf2);
    *(undefined1 *)*piVar1 = 0;
    *(char *)(*piVar1 + 1) = (char)param_3;
    FUN_2c674668(*piVar1 + 2,param_2,param_3);
    FUN_2c5fddc4(1,DAT_2c491b80,*piVar1,0xf2);
    *DAT_2c491b84 = *DAT_2c491b84 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x612,DAT_2c491b94,DAT_2c491b90,DAT_2c491b8c,DAT_2c491b88);
}

