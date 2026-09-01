/* FUN_10134596 @ 0x10134596 */

int FUN_10134596(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  iVar1 = FUN_100d04d8(param_1,iVar1,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18),
                       param_4);
  if (iVar1 < 0) {
    FUN_100c1c90(*param_2);
  }
  *param_2 = 0;
  return iVar1;
}

