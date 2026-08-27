/* FUN_2c4c5598 @ 0x2c4c5598 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c5598(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;
  
  iVar1 = FUN_2c4bfdb8(param_3);
  if (iVar1 == 0) {
    fVar4 = 1.0;
  }
  else {
    cVar2 = (char)iVar1;
    fVar4 = fRam2c4c55f4;
    if (-99 < iVar1) {
      if (0x31 < iVar1) {
        cVar2 = '2';
      }
      uVar3 = VectorSignedToFloat((int)cVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = (float)FUN_2c49ab84(uVar3);
    }
  }
  if (3 < (int)*(char *)(_LAB_2c4c5574 + param_1 * 2 + param_2) - 1U) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x29c,_LAB_2c4c5588,_LAB_2c4c5584,_LAB_2c4c5580,_LAB_2c4c557c,param_1,param_2,
        (int)(fVar4 * fRam2c4c5578));
}

