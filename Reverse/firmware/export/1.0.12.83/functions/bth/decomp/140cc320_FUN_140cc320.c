/* FUN_140cc320 @ 0x140cc320 */

void FUN_140cc320(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  param_2[1] = *(undefined4 *)(iVar1 + 0x14);
  return;
}

