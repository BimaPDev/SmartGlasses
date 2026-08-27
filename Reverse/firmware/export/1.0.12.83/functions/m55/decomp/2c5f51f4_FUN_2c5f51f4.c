/* FUN_2c5f51f4 @ 0x2c5f51f4 */

void FUN_2c5f51f4(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_2 + 0x2d) != '\0') {
    iVar2 = 0;
    uVar1 = -*(uint *)(param_2 + 0x18);
    uVar3 = *(uint *)(param_2 + 0x18) & 3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    if (-1 < (int)uVar1) {
      uVar3 = -(uVar1 & 3);
    }
    do {
      iVar2 = iVar2 + 1;
      FUN_2c5f6b1c(param_2 + 0x54,0x20);
    } while (4 - uVar3 != iVar2);
  }
  FUN_2c5f6b40(param_2 + 0x54,*param_1 + *(int *)(param_2 + 0x14),
               param_1[1] - *(int *)(param_2 + 0x14));
  return;
}

