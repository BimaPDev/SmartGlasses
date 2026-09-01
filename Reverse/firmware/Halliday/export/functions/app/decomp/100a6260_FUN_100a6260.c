/* FUN_100a6260 @ 0x100a6260 */

undefined4 FUN_100a6260(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  
  piVar1 = DAT_100a62c4;
  FUN_1011ea48(DAT_100a62c4 + 4,0,0x20,in_r3,in_r3);
  piVar1[8] = 0x800;
  piVar1[10] = 0x7ff;
  piVar1[9] = (int)(piVar1 + 0xc);
  FUN_100a66c0();
  iVar2 = FUN_100a676c(0xfb,1,1,0);
  piVar1[3] = iVar2;
  iVar2 = FUN_100a676c(0,1,1,piVar1 + 4);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_100a676c(0xfa,1,1,piVar1 + 4);
    piVar1[1] = iVar2;
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xfffffffb;
}

