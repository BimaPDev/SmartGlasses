/* FUN_1009dc20 @ 0x1009dc20 */

int FUN_1009dc20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_1009dc58;
  iVar2 = FUN_1012cdb0(DAT_1009dc58,param_1,param_2,param_3,param_4,param_2);
  if ((iVar2 != 0) && (iVar3 = FUN_10138cfa(param_1,0), iVar3 == 0)) {
    FUN_1011e848(param_1,*(int *)(iVar1 + 8) * *(int *)(iVar1 + 4));
    FUN_1011e8f6();
  }
  return iVar2;
}

