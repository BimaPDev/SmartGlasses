/* FUN_100d4778 @ 0x100d4778 */

undefined4 FUN_100d4778(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = 0;
  for (piVar2 = *(int **)*DAT_100d479c; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    if (((int)((uint)*(byte *)(piVar2 + 0xe) << 0x1f) < 0) && ((DAT_100d47a0 & piVar2[0xe]) == 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

