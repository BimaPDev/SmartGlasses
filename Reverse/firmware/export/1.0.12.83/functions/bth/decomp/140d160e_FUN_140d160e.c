/* FUN_140d160e @ 0x140d160e */

uint FUN_140d160e(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x24))();
  if (uVar1 != 0xffffffff) {
    uVar1 = (uint)*(byte *)param_1[2];
    param_1[2] = (int)((byte *)param_1[2] + 1);
  }
  return uVar1;
}

