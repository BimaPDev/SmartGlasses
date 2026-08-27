/* FUN_2c142300 @ 0x2c142300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c142300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (iRam2c142320 != 0) {
    func_0x2c14295c(param_1,0,param_3,iRam2c142320,param_4);
  }
  if (*(code **)(*piRam2c142324 + 0x28) != (code *)0x0) {
    (**(code **)(*piRam2c142324 + 0x28))();
  }
  func_0x2c1446b8(param_1);
  iVar1 = _DAT_2c142348;
  uVar2 = 0x65;
  iVar3 = _DAT_2c14234c - _DAT_2c142348 >> 2;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    uVar2 = (**(code **)(iVar1 + iVar3 * 4))(uVar2);
  }
  return;
}

