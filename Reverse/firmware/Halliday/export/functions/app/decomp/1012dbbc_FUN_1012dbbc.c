/* FUN_1012dbbc @ 0x1012dbbc */

void FUN_1012dbbc(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb | (param_2 & 1) << 2;
  return;
}

