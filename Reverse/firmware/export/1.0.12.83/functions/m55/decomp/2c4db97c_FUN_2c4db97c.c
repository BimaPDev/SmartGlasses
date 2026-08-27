/* FUN_2c4db97c @ 0x2c4db97c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4db97c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_2c4e0504(_LAB_2c4db9c8,7,0,0,_DAT_2c4db9d0,0x28,_LAB_2c4db9cc,0x1300,0);
  iVar2 = param_1[0x67];
  if (iVar2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    *_LAB_2c4db9d4 = uVar1;
    func_0x2c4cb8a8(iVar2);
    param_1[0x67] = 0;
  }
  return 1;
}

