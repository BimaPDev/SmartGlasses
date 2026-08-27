/* FUN_140cc314 @ 0x140cc314 */

void FUN_140cc314(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = *(undefined4 *)(iVar1 + 8);
  param_2[1] = *(undefined4 *)(iVar1 + 0xc);
  return;
}

