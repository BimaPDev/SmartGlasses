/* FUN_2c658612 @ 0x2c658612 */

int FUN_2c658612(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 != param_3; iVar3 = iVar3 + 1) {
    iVar1 = thunk_FUN_2c66fcc8(*(undefined4 *)(param_1 + 0x20));
    if (iVar1 == -1) break;
    *(int *)(param_2 + iVar3 * 4) = iVar1;
  }
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + (iVar3 + 0x3fffffff) * 4);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return iVar3;
}

