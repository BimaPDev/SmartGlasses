/* FUN_100c1df0 @ 0x100c1df0 */

int FUN_100c1df0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_10119dc2(DAT_100c1e38,DAT_100c1e34,DAT_100c1e30,0x2a8,param_1,0);
    FUN_1011a1f0(DAT_100c1e30,0x2a8,param_3,param_4);
  }
  if (param_1 == 0) {
    iVar1 = FUN_100c1d1c(param_2);
    return iVar1;
  }
  uVar2 = FUN_100c1d54(param_1);
  FUN_100c1d8c(uVar2,param_2);
  return param_1;
}

