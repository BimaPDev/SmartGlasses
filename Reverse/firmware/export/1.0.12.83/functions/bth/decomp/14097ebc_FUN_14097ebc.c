/* FUN_14097ebc @ 0x14097ebc */

void FUN_14097ebc(undefined1 *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_2 + 0x34);
  *param_1 = *(undefined1 *)(param_2 + 0x30);
  uVar2 = *(undefined1 *)(param_2 + 0x31);
  param_1[4] = bVar1 ^ 1;
  param_1[1] = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x32);
  param_1[3] = *(undefined1 *)(param_2 + 0x33);
  param_1[2] = uVar2;
  return;
}

