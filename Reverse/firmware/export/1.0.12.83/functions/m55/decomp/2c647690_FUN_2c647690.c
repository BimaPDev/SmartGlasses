/* FUN_2c647690 @ 0x2c647690 */

int FUN_2c647690(char *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == (char *)0x0) || (*param_1 != -9)) {
    iVar1 = -4;
    FUN_2c643b70(param_1);
  }
  else {
    iVar1 = FUN_2c64749c(param_1 + 0xc);
    if (iVar1 == 0) {
      FUN_2c643b94();
      if ((*(int *)(param_1 + 8) != 0) && (iVar2 = FUN_2c6473bc(param_1 + 0xc), iVar2 != 0)) {
        uVar3 = FUN_2c645b54(param_1);
        FUN_2c64621c(uVar3,iVar2,1);
        FUN_2c643b88(param_1,iVar2);
        return 0;
      }
    }
    else {
      FUN_2c643b98(param_1,param_2);
    }
  }
  return iVar1;
}

