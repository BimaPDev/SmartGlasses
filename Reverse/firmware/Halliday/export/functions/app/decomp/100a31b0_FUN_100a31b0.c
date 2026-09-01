/* FUN_100a31b0 @ 0x100a31b0 */

undefined4 FUN_100a31b0(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  int *piVar2;
  
  piVar2 = (int *)*DAT_100a31e8;
  if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
    FUN_100a5b78(DAT_100a31f4 | (DAT_100a31f0 - DAT_100a31ec) * 0x20 & 0xff00U,DAT_100a31fc,
                 DAT_100a31f8);
    uVar1 = 0xffffffed;
  }
  else {
    FUN_1012d994(*piVar2,0xc,0,piVar2,in_r3);
    uVar1 = 0;
  }
  return uVar1;
}

