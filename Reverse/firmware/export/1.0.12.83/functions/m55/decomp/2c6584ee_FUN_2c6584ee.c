/* FUN_2c6584ee @ 0x2c6584ee */

void FUN_2c6584ee(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x2c668a98(param_2,1,param_3,*(undefined4 *)(param_1 + 0x20),param_4);
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(byte *)(param_2 + iVar1 + -1);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  return;
}

