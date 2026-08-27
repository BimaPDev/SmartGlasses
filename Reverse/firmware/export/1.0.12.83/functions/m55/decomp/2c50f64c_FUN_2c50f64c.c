/* FUN_2c50f64c @ 0x2c50f64c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50f64c(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  int aiStack_128 [64];
  byte bStack_28;
  int iStack_24;
  short sStack_20;
  short sStack_1e;
  int iStack_1c;
  
  fVar5 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  iStack_1c = *_LAB_2c50f704;
  FUN_2c674668(aiStack_128,param_1 + 0x30c,0x10c,0);
  fVar5 = fVar5 / fRam2c50f708;
  if (sStack_20 != 0) {
    fVar4 = (float)VectorSignedToFloat((int)sStack_20,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = (undefined2)(int)(fVar4 * fVar5);
    if (bStack_28 != 0) {
      piVar2 = aiStack_128 + bStack_28;
      do {
        piVar2 = piVar2 + -1;
        *(undefined2 *)(*piVar2 + 0x8e) = uVar1;
        *piVar2 = 0;
      } while (piVar2 != aiStack_128);
      bStack_28 = 0;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x3c) + 0x1a) = uVar1;
    }
  }
  if (sStack_1e != 0) {
    fVar4 = (float)VectorSignedToFloat((int)sStack_1e,(byte)(in_fpscr >> 0x16) & 3);
    *(short *)(iStack_24 + 0x8c) = (short)(int)(fVar4 * fVar5);
  }
  if (*_LAB_2c50f704 == iStack_1c) {
    iVar3 = *DAT_2c607e4c;
    FUN_2c600c2c();
    FUN_2c6078f0(param_1,&stack0xffffffec);
    if (*DAT_2c607e4c == iVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

