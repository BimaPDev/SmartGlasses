/* FUN_1402d7e8 @ 0x1402d7e8 */

void FUN_1402d7e8(uint param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  undefined4 uVar5;
  
  puVar1 = DAT_1402d89c;
  if ((param_1 & 1) != 0) {
    *DAT_1402d89c = (char)param_2;
    param_4 = puVar1;
  }
  uVar3 = param_1 & 2;
  if (uVar3 != 0) {
    param_4 = DAT_1402d89c;
  }
  if (uVar3 != 0) {
    param_4[1] = (char)param_2;
  }
  if ((*(uint *)(DAT_1402d8a0 + 0xbc) & 0x10) == 0) {
    uVar4 = 0;
    if (*DAT_1402d8a4 == '\0') {
      if (param_2 == 0) {
        uVar5 = 0x4000;
      }
      else {
        uVar5 = 0;
        if (-99 < param_2) {
          uVar5 = DAT_1402d8a8;
          if (param_2 < 0x33) {
            uVar5 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
          }
          uVar5 = FUN_14039cec(uVar5);
          uVar5 = VectorFloatToSignedFixed(uVar5,0x20,0xe);
        }
      }
      uVar4 = SignedSaturate(uVar5,0x13);
      SignedDoesSaturate(uVar5,0x13);
    }
  }
  else {
    uVar4 = 0;
  }
  iVar2 = DAT_1402d8a0;
  *(uint *)(DAT_1402d8a0 + 0xb4) = *(uint *)(DAT_1402d8a0 + 0xb4) & 0xffdfffff;
  FUN_140e5908(2);
  if ((param_1 & 1) != 0) {
    *(uint *)(iVar2 + 0xb4) = *(uint *)(iVar2 + 0xb4) & 0xfff00000 | uVar4 & 0xfffff;
  }
  if (uVar3 != 0) {
    *(uint *)(DAT_1402d8a0 + 0xb8) = *(uint *)(DAT_1402d8a0 + 0xb8) & 0xfff00000 | uVar4 & 0xfffff;
  }
  *(uint *)(DAT_1402d8a0 + 0xb4) = *(uint *)(DAT_1402d8a0 + 0xb4) | 0x200000;
  return;
}

