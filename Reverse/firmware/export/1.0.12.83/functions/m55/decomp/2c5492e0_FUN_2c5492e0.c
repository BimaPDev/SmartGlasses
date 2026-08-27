/* FUN_2c5492e0 @ 0x2c5492e0 */

undefined4 FUN_2c5492e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_2c48e3b8();
  iVar2 = FUN_2c549280(uVar1,param_2);
  if (-1 < iVar2) {
    FUN_2c48dea0(uVar1);
    return 0;
  }
  FUN_2c48dea0(uVar1);
  return 0xffffffff;
}

