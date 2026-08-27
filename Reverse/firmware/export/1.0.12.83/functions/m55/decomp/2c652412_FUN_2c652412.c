/* FUN_2c652412 @ 0x2c652412 */

uint FUN_2c652412(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((int)param_1 + param_2 + 0x11d);
  if ((uVar1 == 0) && (uVar1 = (**(code **)(*param_1 + 0x20))(), param_3 != uVar1)) {
    *(char *)((int)param_1 + param_2 + 0x11d) = (char)uVar1;
  }
  return uVar1;
}

