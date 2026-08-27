/* FUN_2c47f728 @ 0x2c47f728 */

undefined4 FUN_2c47f728(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(short *)(param_4 + 2);
  iVar2 = uVar4 + 0x1f;
  if (iVar2 < 0) {
    iVar2 = uVar4 + 0x3e;
  }
  iVar1 = FUN_2c47f410(param_2,param_1);
  if (iVar1 != 0) {
    FUN_2c47f410(param_3,param_2,param_4 + 0x24);
    return 1;
  }
  uVar3 = 0;
  if ((int)uVar4 < ((iVar2 << 0x13) >> 0x18) * 0x20) {
    if ((1 << (uVar4 & 0x1f) & *(uint *)(param_2 + ((int)uVar4 >> 5) * 4)) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  FUN_2c47f410(param_3,param_2,param_4 + 0x24);
  return uVar3;
}

