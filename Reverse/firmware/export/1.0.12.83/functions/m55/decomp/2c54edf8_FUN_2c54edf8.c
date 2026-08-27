/* FUN_2c54edf8 @ 0x2c54edf8 */

undefined4 FUN_2c54edf8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c48e3b8();
  iVar2 = FUN_2c54ec88(uVar1,param_2);
  if (iVar2 < 0) {
    FUN_2c48dea0(uVar1);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_2c48dea0(uVar1);
    uVar1 = 0;
  }
  return uVar1;
}

