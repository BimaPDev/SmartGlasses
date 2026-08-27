/* FUN_2c50e708 @ 0x2c50e708 */

void FUN_2c50e708(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = (uint)(param_3 << 2) <= DAT_2c50e750;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (bVar3) {
    param_3 = param_3 * 4;
    if (param_3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar1 = FUN_2c64ca5c(param_3);
      iVar2 = iVar1 + param_3;
      *param_1 = iVar1;
      param_1[2] = iVar2;
      FUN_2c674668(iVar1,param_2,param_3);
    }
    param_1[1] = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c658680(DAT_2c50e754);
}

