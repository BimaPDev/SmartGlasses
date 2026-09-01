/* FUN_10107550 @ 0x10107550 */

void FUN_10107550(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x12e) != 0) {
    iVar2 = *(int *)(param_1 + 0x84);
    *(int *)(*(int *)(param_1 + 0x7c) + param_2 * 8) =
         param_3 + *(int *)(*(int *)(param_1 + 0x7c) + param_2 * 8);
    *(byte *)(iVar2 + param_2) = *(byte *)(iVar2 + param_2) | 8;
  }
  if (*(short *)(param_1 + 0x130) != 0) {
    iVar1 = *(int *)(param_1 + 0x84);
    iVar2 = *(int *)(param_1 + 0x7c) + param_2 * 8;
    *(int *)(iVar2 + 4) = param_4 + *(int *)(iVar2 + 4);
    *(byte *)(iVar1 + param_2) = *(byte *)(iVar1 + param_2) | 0x10;
  }
  return;
}

