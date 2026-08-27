/* FUN_2c6387a8 @ 0x2c6387a8 */

void FUN_2c6387a8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((int)((uint)*(byte *)(param_1 + 0x52) << 0x1c) < 0) {
    return;
  }
  FUN_2c607df0();
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  iVar1 = FUN_2c66c4ec(uVar3);
  iVar2 = FUN_2c66c4ec(param_3);
  iVar1 = FUN_2c62bebc(uVar3,iVar1 + iVar2 + 1);
  *(int *)(param_1 + 0x24) = iVar1;
  if (iVar1 != 0) {
    if (param_2 == 0xffff) {
      param_2 = (*(code *)*DAT_2c638810)();
      iVar1 = *(int *)(param_1 + 0x24);
    }
    FUN_2c62ba80(iVar1,param_2,param_3);
    FUN_2c638730(param_1,0);
    return;
  }
  return;
}

