/* FUN_2c48e484 @ 0x2c48e484 */

int FUN_2c48e484(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)*DAT_2c48e4c4)(0x28);
  if (iVar1 != 0) {
    FUN_2c674268(iVar1,0,0x28);
    *(undefined4 *)(iVar1 + 0xc) = 1;
  }
  iVar2 = FUN_2c48dd84(param_1,param_2,iVar1,0);
  if (iVar2 != 0) {
    return iVar1;
  }
  FUN_2c48dea0(iVar1);
  return 0;
}

