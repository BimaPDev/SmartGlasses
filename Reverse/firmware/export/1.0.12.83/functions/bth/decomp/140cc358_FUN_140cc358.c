/* FUN_140cc358 @ 0x140cc358 */

void FUN_140cc358(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = *(undefined4 *)(iVar1 + 0x48);
  param_2[1] = *(undefined4 *)(iVar1 + 0x4c);
  param_2[2] = *(undefined4 *)(iVar1 + 0x50);
  param_2[3] = *(undefined4 *)(iVar1 + 0x54);
  param_2[4] = *(undefined4 *)(iVar1 + 0x58);
  param_2[5] = *(undefined4 *)(iVar1 + 0x5c);
  param_2[6] = *(undefined4 *)(iVar1 + 0x60);
  return;
}

