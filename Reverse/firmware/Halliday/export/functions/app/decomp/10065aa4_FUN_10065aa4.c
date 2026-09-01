/* FUN_10065aa4 @ 0x10065aa4 */

undefined4 FUN_10065aa4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10112e84(DAT_10065ac8);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    (**(code **)(*(int *)(iVar1 + 8) + 0x10))(iVar1,DAT_10065acc,param_1);
    uVar2 = 0;
  }
  return uVar2;
}

