/* FUN_2c4f895c @ 0x2c4f895c */

void FUN_2c4f895c(undefined2 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_2c4f89c0;
  iVar2 = FUN_2c6442f0(*DAT_2c4f89c0,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x87,DAT_2c4f89d0,DAT_2c4f89cc,DAT_2c4f89d4,DAT_2c4f89c4,*param_1,param_1[1]);
  }
  FUN_2c674668(iVar2,param_1,0x84);
  iVar2 = FUN_2c6442fc(*puVar1,iVar2);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x84,DAT_2c4f89d0,DAT_2c4f89cc,DAT_2c4f89c8,DAT_2c4f89c4,iVar2);
}

