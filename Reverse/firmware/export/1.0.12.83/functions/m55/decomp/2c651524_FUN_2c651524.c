/* FUN_2c651524 @ 0x2c651524 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c651524(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = _LAB_2c651554;
  if (param_1 != 0) {
    iVar1 = FUN_2c6514c8(param_1,0,param_3,param_4,param_4);
    func_0x2c651418(iVar1 + 0xc,param_1,param_2);
    FUN_2c6514b0(iVar1,param_1);
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}

