/* FUN_2c48e4c8 @ 0x2c48e4c8 */

int FUN_2c48e4c8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)*DAT_2c48e510)(0x28);
  if (iVar1 != 0) {
    FUN_2c674268(iVar1,0,0x28);
    if (param_3 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
  }
  iVar2 = FUN_2c48dd84(param_1,param_2,iVar1,0,param_4);
  if (iVar2 == 0) {
    FUN_2c48dea0(iVar1);
    return 0;
  }
  return iVar1;
}

