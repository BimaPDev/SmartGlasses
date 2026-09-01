/* FUN_1009f5d4 @ 0x1009f5d4 */

undefined4 FUN_1009f5d4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x40) != 0) {
    FUN_1012d1f4();
  }
  piVar3 = (int *)(iVar1 + 8);
  for (iVar2 = 0; iVar2 < (int)(uint)*(ushort *)(iVar1 + 4); iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      FUN_1012d1f4();
    }
    piVar3 = piVar3 + 1;
  }
  if (*(int *)(iVar1 + 0x2c) != 0) {
    FUN_1012d1f4();
  }
  if (*(int *)(iVar1 + 0x34) != 0) {
    FUN_1012d1f4();
  }
  piVar3 = DAT_1009f640;
  FUN_1012d1f4(iVar1);
  if (*piVar3 != 0) {
    iVar1 = 0;
    do {
      if (*(int *)(*piVar3 + iVar1 * 4) != 0) {
        FUN_1012d1f4();
        *(undefined4 *)(*piVar3 + iVar1 * 4) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 100);
    FUN_1012d1f4(*piVar3);
    *piVar3 = 0;
  }
  return 0;
}

