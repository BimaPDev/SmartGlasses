/* FUN_2c651a64 @ 0x2c651a64 */

undefined4 * FUN_2c651a64(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = param_1;
  uVar2 = param_3;
  if (param_2 == 0) {
    iVar1 = -4;
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_2c66ea0c(param_2);
    iVar1 = param_2 + iVar1 * 4;
    uVar4 = param_3;
  }
  uVar2 = FUN_2c651a0c(param_2,iVar1,param_3,0,puVar3,uVar4,uVar2);
  *param_1 = uVar2;
  return param_1;
}

