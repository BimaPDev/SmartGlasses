/* FUN_10130958 @ 0x10130958 */

int FUN_10130958(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_1012d654(*(undefined4 *)(param_1 + 0xcc));
  piVar3 = *(int **)(param_1 + 0x48);
  if ((piVar3 != (int *)0x0) && (iVar2 = (piVar3[2] + *piVar3) - piVar3[1], iVar2 <= iVar1)) {
    iVar1 = iVar2;
  }
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar1 <= *(int *)(param_2 + 0x18)) {
    iVar2 = iVar1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    if (piVar3 != (int *)0x0) {
      FUN_1012d2f0(piVar3,*(undefined4 *)(param_2 + 0x14),iVar2);
    }
    FUN_100a07a0(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_2 + 0x14),iVar2);
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + iVar2;
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) - iVar2;
  }
  return iVar2;
}

