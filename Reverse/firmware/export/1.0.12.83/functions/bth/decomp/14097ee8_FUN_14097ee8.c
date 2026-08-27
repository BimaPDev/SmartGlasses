/* FUN_14097ee8 @ 0x14097ee8 */

void FUN_14097ee8(undefined1 *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_2 + 100);
  *param_1 = *(undefined1 *)(param_2 + 0x60);
  uVar2 = *(undefined1 *)(param_2 + 0x61);
  param_1[4] = bVar1 ^ 1;
  param_1[1] = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x62);
  param_1[3] = *(undefined1 *)(param_2 + 99);
  param_1[2] = uVar2;
  return;
}

