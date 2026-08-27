/* FUN_2c647434 @ 0x2c647434 */

int FUN_2c647434(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 == -9)) {
    iVar1 = FUN_2c6473bc(param_1 + 0xc);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        FUN_2c643b8c(param_1);
        return 0;
      }
      FUN_2c643b80(param_1,param_2);
      iVar2 = FUN_2c645ea4(0x73,param_2);
      if (iVar2 == 0) {
        FUN_2c643b84(param_1);
      }
      else {
        FUN_2c645b24(param_1,*(undefined4 *)(DAT_2c647498 + 0x14));
      }
    }
    else {
      FUN_2c643b88(param_1,iVar1);
    }
    return iVar1;
  }
  FUN_2c643b70(param_1,0xfffffffc);
  return 0;
}

