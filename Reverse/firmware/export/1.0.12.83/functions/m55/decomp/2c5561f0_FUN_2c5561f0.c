/* FUN_2c5561f0 @ 0x2c5561f0 */

void FUN_2c5561f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    FUN_2c674268(*param_1,0,param_1[1] << 2);
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (*(int *)(iVar1 + 0x1c) != iVar1 + 0x24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 4) != iVar1 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar1);
}

