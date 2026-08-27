/* FUN_2c46cb94 @ 0x2c46cb94 */

undefined4 FUN_2c46cb94(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = FUN_2c66b624(uVar2,DAT_2c46cbf0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x97,DAT_2c46cc00,DAT_2c46cbfc,DAT_2c46cc04);
  }
  iVar1 = FUN_2c66b624(uVar2,DAT_2c46cbf4);
  if (iVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x9f,DAT_2c46cc00,DAT_2c46cbfc,DAT_2c46cbf8,uVar2);
}

