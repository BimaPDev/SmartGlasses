/* FUN_2c141e74 @ 0x2c141e74 */

int FUN_2c141e74(byte *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = param_4;
  if ((param_1 == (byte *)0x0) || (uVar4 = (uint)*param_1, uVar4 != 0xf7)) {
    FUN_2c13eeec(param_1,0xfffffffc,param_3,uVar4,param_4);
    iVar1 = -4;
  }
  else {
    iVar1 = FUN_2c141cb0(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x2c13ef10();
      if ((*(int *)(param_1 + 8) != 0) && (iVar2 = FUN_2c141bd0(param_1 + 0xc), iVar2 != 0)) {
        uVar3 = FUN_2c14089c(param_1);
        FUN_2c140ec8(uVar3,iVar2,1);
        FUN_2c13ef04(param_1,iVar2);
        return 0;
      }
    }
    else {
      func_0x2c13ef14(param_1,param_2);
    }
  }
  return iVar1;
}

