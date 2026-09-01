/* FUN_10133764 @ 0x10133764 */

undefined4 FUN_10133764(int param_1)

{
  int iVar1;
  int *piVar2;
  int *extraout_r2;
  undefined4 extraout_r3;
  
  piVar2 = (int *)(param_1 + 0xcc);
  do {
    iVar1 = FUN_101334a4(piVar2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = extraout_r2;
  } while (*extraout_r2 != iVar1);
  *extraout_r2 = iVar1 + 1;
  return extraout_r3;
}

