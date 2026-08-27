/* FUN_14007364 @ 0x14007364 */

int FUN_14007364(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 == -9)) {
    iVar1 = FUN_140072ec(param_1 + 0xc);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        FUN_14003cf0(param_1);
        return 0;
      }
      FUN_14003ce4(param_1,param_2);
      iVar2 = FUN_14005e70(0x73,param_2);
      if (iVar2 == 0) {
        FUN_14003ce8(param_1);
      }
      else {
        FUN_14005af4(param_1,*(undefined4 *)(DAT_140073c8 + 0x14));
      }
    }
    else {
      FUN_14003cec(param_1,iVar1);
    }
    return iVar1;
  }
  FUN_14003cd4(param_1,0xfffffffc);
  return 0;
}

