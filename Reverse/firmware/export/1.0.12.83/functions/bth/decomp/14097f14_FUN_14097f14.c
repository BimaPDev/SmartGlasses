/* FUN_14097f14 @ 0x14097f14 */

void FUN_14097f14(undefined1 *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_2 + 0x70);
  *param_1 = *(undefined1 *)(param_2 + 0x6c);
  uVar2 = *(undefined1 *)(param_2 + 0x6d);
  param_1[4] = bVar1 ^ 1;
  param_1[1] = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x6e);
  param_1[3] = *(undefined1 *)(param_2 + 0x6f);
  param_1[2] = uVar2;
  return;
}

