/* FUN_100f15c0 @ 0x100f15c0 */

ushort FUN_100f15c0(uint param_1)

{
  ushort uVar1;
  int *piVar2;
  
  piVar2 = DAT_100f15e4;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      return 0;
    }
  } while (*(ushort *)(piVar2[1] + 0xc) != param_1);
  uVar1 = *(ushort *)((int)piVar2 + 0x1a) & 0xf0;
  if ((*(ushort *)((int)piVar2 + 0x1a) & 0xf0) != 0) {
    uVar1 = 1;
  }
  return uVar1;
}

