/* FUN_10124e14 @ 0x10124e14 */

void FUN_10124e14(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  FUN_101256b2();
  FUN_1008a830(0);
  FUN_1008c088(param_1);
  FUN_10124db0(param_1);
  FUN_1008a830(1);
  FUN_1008a83c(param_1,0xf0000,0xffff);
  FUN_1008964c(param_1);
  uVar2 = FUN_10087308();
  if (((int)uVar2 != 0) &&
     (iVar1 = FUN_10124e00(param_1,(int)((ulonglong)uVar2 >> 0x20),(int)uVar2), iVar1 != 0)) {
    FUN_1008740c(extraout_r2,param_1);
  }
  iVar1 = FUN_10126fae(param_1);
  if (iVar1 != 0) {
    FUN_10086f50(iVar1,0x22,param_1);
    FUN_10086f50(iVar1,0x23,param_1);
    FUN_10125af4(param_1);
    return;
  }
  return;
}

