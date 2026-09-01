/* FUN_10070bf4 @ 0x10070bf4 */

undefined4 FUN_10070bf4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10068cf4(DAT_10070c28,0x10,0);
  *param_1 = iVar1 + -0x2ff18000;
  uVar2 = 0;
  if (iVar1 + -0x2ff18000 != 0) {
    uVar2 = FUN_1011ea48(*(ushort *)(iVar1 + 8) + 0x2ff18000,0,0x10);
  }
  return uVar2;
}

