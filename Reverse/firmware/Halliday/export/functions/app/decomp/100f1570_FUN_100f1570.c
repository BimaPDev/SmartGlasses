/* FUN_100f1570 @ 0x100f1570 */

undefined4 FUN_100f1570(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)*DAT_100f159c;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0xfffffffd;
    }
    if (*(ushort *)(piVar1[1] + 0xc) == param_1) break;
    piVar1 = (int *)*piVar1;
  }
  uVar2 = FUN_100f1034();
  return uVar2;
}

