/* FUN_2c669b10 @ 0x2c669b10 */

int FUN_2c669b10(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)param_2 * (ulonglong)param_3);
  if ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) {
    iVar1 = FUN_2c669c14(param_1,uVar2,uVar2,param_4,param_1,uVar2,param_3);
    if (iVar1 != 0) {
      FUN_2c674268(iVar1,0,uVar2);
    }
  }
  else {
    iVar1 = 0;
    *param_1 = 0xc;
  }
  return iVar1;
}

