/* FUN_100f151c @ 0x100f151c */

bool FUN_100f151c(uint param_1)

{
  int *piVar1;
  
  piVar1 = DAT_100f1544;
  do {
    piVar1 = (int *)*piVar1;
    if (piVar1 == (int *)0x0) {
      return false;
    }
  } while (*(ushort *)(piVar1[1] + 0xc) != param_1);
  return (*(byte *)((int)piVar1 + 0x16) & 0x48) == 0x40;
}

