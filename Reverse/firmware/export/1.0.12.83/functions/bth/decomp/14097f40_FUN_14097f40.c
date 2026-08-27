/* FUN_14097f40 @ 0x14097f40 */

void FUN_14097f40(undefined1 *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_2 + 0x7c);
  *param_1 = *(undefined1 *)(param_2 + 0x78);
  uVar2 = *(undefined1 *)(param_2 + 0x79);
  param_1[4] = bVar1 ^ 1;
  param_1[1] = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x7a);
  param_1[3] = *(undefined1 *)(param_2 + 0x7b);
  param_1[2] = uVar2;
  return;
}

