/* FUN_2c5d898c @ 0x2c5d898c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5d898c(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint in_fpscr;
  undefined1 *apuStack_80 [2];
  int iStack_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined1 *puStack_70;
  int iStack_6c;
  
  if (in_ZR || in_NG != in_OV) {
    VectorSignedToFloat(((int)((longlong)_LAB_2c5d8a10 * (longlong)param_3 >> 0x26) -
                        (param_3 >> 0x1f)) * 1000,(byte)(in_fpscr >> 0x16) & 3);
    iVar1 = FUN_2c66b450(param_1,param_2,_LAB_2c5d8a18);
    return iVar1;
  }
  puVar2 = (undefined4 *)*DAT_2c66b4b4;
  if (param_2 < 0) {
    iVar1 = -1;
    *puVar2 = 0x8b;
  }
  else {
    uStack_74 = 0x208;
    if (param_2 == 0) {
      iStack_78 = 0;
    }
    else {
      iStack_78 = param_2 + -1;
    }
    uStack_72 = 0xffff;
    apuStack_80[0] = param_1;
    puStack_70 = param_1;
    iStack_6c = iStack_78;
    iVar1 = FUN_2c671178(puVar2,apuStack_80,_LAB_2c5d8a0c);
    if (iVar1 < -1) {
      *puVar2 = 0x8b;
    }
    if (param_2 != 0) {
      *apuStack_80[0] = 0;
    }
  }
  return iVar1;
}

