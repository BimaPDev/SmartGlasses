/* FUN_2c569c08 @ 0x2c569c08 */

int FUN_2c569c08(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[1];
  uVar1 = FUN_2c66c4ec(param_2);
  uVar3 = uVar1;
  if (uVar4 <= uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar3 == 0) || (iVar2 = FUN_2c66960c(*param_1,param_2), iVar2 == 0)) {
    iVar2 = uVar4 - uVar1;
  }
  return iVar2;
}

