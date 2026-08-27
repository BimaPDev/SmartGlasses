/* FUN_2c5f9cf0 @ 0x2c5f9cf0 */

void FUN_2c5f9cf0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)*param_2)(1,0x4c,param_3,(code *)*param_2,param_4);
  *puVar1 = param_2;
  *(short *)(puVar1 + 0xd) = (short)param_1;
  if (param_1 != 3) {
    if (param_1 == 9) {
      *(undefined1 *)(puVar1 + 0xf) = 1;
    }
    return;
  }
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 1;
  *(undefined1 *)((int)puVar1 + 0x47) = 0;
  return;
}

