/* FUN_2c518d5c @ 0x2c518d5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c518d5c(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  iVar5 = param_1 + 0x34;
  iVar2 = FUN_2c629e10(*(undefined4 *)(param_1 + 0xa8));
  fVar1 = fRam2c518e28;
  uVar3 = iVar2 + *(int *)(param_1 + 0xac);
  *(uint *)(param_1 + 0xac) =
       uVar3 + (uint)((ulonglong)_LAB_2c518e2c * (ulonglong)uVar3 >> 0x28) * -0x29c;
  uVar4 = FUN_2c629df4();
  *(undefined4 *)(param_1 + 0xa8) = uVar4;
  do {
    iVar2 = *(int *)(iVar5 + -0xc) + *(int *)(param_1 + 0xac);
    if ((iVar2 < 0) || (*(int *)(iVar5 + -8) < iVar2)) {
      *(undefined2 *)(iVar5 + -0x10) = 0;
    }
    else {
      uVar4 = FUN_2c62e4a8(iVar2,0,*(int *)(iVar5 + -8),0,0x400);
      uVar4 = FUN_2c62e2d0(uVar4,0,0,0,0x3b8);
      iVar2 = FUN_2c62e27c(uVar4,0,0,0,0x3b8);
      fVar6 = (float)VectorSignedToFloat(iVar2 * -100 >> 10,(byte)(in_fpscr >> 0x16) & 3);
      uVar4 = VectorFloatToSignedFixed(fVar6 / fVar1,0x20,2);
      *(short *)(iVar5 + -0x10) = (short)uVar4;
    }
    iVar5 = iVar5 + 0x10;
  } while (iVar5 != param_1 + 100);
  FUN_2c607df0(param_1);
  return;
}

