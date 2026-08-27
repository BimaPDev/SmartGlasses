/* FUN_2c4c28cc @ 0x2c4c28cc */

undefined4 FUN_2c4c28cc(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r3;
  int iVar4;
  int unaff_r6;
  int unaff_r7;
  
  piVar1 = piRam2c4c2930;
  iVar3 = *piRam2c4c2930;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1f,uRam2c4c2948,uRam2c4c2944,uRam2c4c2950,uRam2c4c294c,iVar3,iVar3 - *piRam2c4c293c);
  }
  if (uRam2c4c2934 < uRam2c4c2938) {
    iVar4 = uRam2c4c2938 - uRam2c4c2934;
    iVar3 = uRam2c4c2934 - 0x200;
    *piRam2c4c293c = 0;
    *piVar1 = iVar4;
    uVar2 = FUN_2c674268(iVar3,0,iVar4);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1d,uRam2c4c2948,uRam2c4c2944,uRam2c4c2940,uVar2,iVar4);
  }
  FUN_2c4c28a4();
  *(char *)(unaff_r6 + unaff_r7) = (char)*(undefined2 *)(extraout_r3 + 0x2a) + -0x12;
  return *DAT_2c4c295c;
}

