/* FUN_100e2758 @ 0x100e2758 */

undefined4 FUN_100e2758(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1011ea10(DAT_100e277c);
  iVar2 = FUN_1011ea30(param_1,DAT_100e277c,uVar1);
  uVar1 = 6000;
  if (iVar2 != 0) {
    uVar1 = 2000;
  }
  return uVar1;
}

