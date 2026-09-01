/* FUN_101208f0 @ 0x101208f0 */

undefined4
FUN_101208f0(int param_1,uint *param_2,undefined4 *param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(**(int **)(param_1 + 0xc) + 9);
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*(char *)(**(int **)(param_1 + 0xc) + 10) != '\0') {
      uVar1 = 1;
      *param_2 = param_4 / uVar2;
      *param_3 = param_5;
    }
  }
  return uVar1;
}

