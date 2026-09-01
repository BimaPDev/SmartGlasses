/* FUN_100e1594 @ 0x100e1594 */

ushort * FUN_100e1594(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  ushort *puVar2;
  
  FUN_10113cfc(DAT_100e15d0,param_2,0xffffffff,0xffffffff,param_4);
  for (piVar1 = (int *)*DAT_100e15d4;
      (piVar1 != (int *)0x0 && (puVar2 = (ushort *)(piVar1 + -2), puVar2 != (ushort *)0x0));
      piVar1 = (int *)*piVar1) {
    if (*puVar2 == param_1) {
      FUN_100e14a0();
      return puVar2;
    }
    if (puVar2 == (ushort *)0xfffffff8) break;
  }
  FUN_100e14a0();
  return (ushort *)0x0;
}

