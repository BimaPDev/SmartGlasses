/* FUN_2c141c48 @ 0x2c141c48 */

int FUN_2c141c48(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 == -9)) {
    iVar1 = FUN_2c141bd0(param_1 + 0xc);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        FUN_2c13ef08(param_1);
        return 0;
      }
      FUN_2c13eefc(param_1,param_2);
      iVar2 = FUN_2c140be8(0x73,param_2);
      if (iVar2 == 0) {
        FUN_2c13ef00(param_1);
      }
      else {
        FUN_2c14086c(param_1,*(undefined4 *)(DAT_2c141cac + 0x14));
      }
    }
    else {
      FUN_2c13ef04(param_1,iVar1);
    }
    return iVar1;
  }
  FUN_2c13eeec(param_1,0xfffffffc);
  return 0;
}

