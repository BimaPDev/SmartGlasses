/* FUN_100f15a0 @ 0x100f15a0 */

undefined2 FUN_100f15a0(uint param_1)

{
  int *piVar1;
  
  piVar1 = DAT_100f15bc;
  do {
    piVar1 = (int *)*piVar1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  } while (*(ushort *)(piVar1[1] + 0xc) != param_1);
  return *(undefined2 *)((int)piVar1 + 0x1a);
}

