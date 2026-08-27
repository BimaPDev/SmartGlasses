/* FUN_2c5bda5c @ 0x2c5bda5c */

void FUN_2c5bda5c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    FUN_2c674268(*param_1,0,param_1[1] << 2);
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (*(int *)(iVar1 + 0x54) != iVar1 + 0x5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x3c) != iVar1 + 0x44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x24) != iVar1 + 0x2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0xc) != iVar1 + 0x14) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar1);
}

