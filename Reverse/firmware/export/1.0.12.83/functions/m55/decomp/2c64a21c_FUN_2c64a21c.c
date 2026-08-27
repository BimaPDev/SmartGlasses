/* FUN_2c64a21c @ 0x2c64a21c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64a21c(ushort *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar4;
  char cStack_19;
  undefined4 uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = *_LAB_2c64a304;
  uVar3 = _LAB_2c64a308[1];
  uStack_18 = *_LAB_2c64a308;
  uStack_14 = uVar3;
  uStack_10 = _LAB_2c64a308[2];
  bVar2 = 0xb < (byte)param_1[1] - 1;
  if (bVar2) {
    FUN_2c648600(0,_LAB_2c64a318);
    uVar3 = extraout_r1_02;
  }
  bVar1 = 6 < (byte)param_1[2] - 1;
  if (bVar1) {
    FUN_2c648600(0,_LAB_2c64a314);
    uVar3 = extraout_r1_01;
  }
  bVar2 = !bVar1 && !bVar2;
  if ((byte)param_1[1] == 2) {
    uVar4 = (uint)*param_1;
    if (((*param_1 & 3) == 0) &&
       (uVar3 = (uVar4 * -0xa3d7 & 0xffff) >> 2 | uVar4 * -0x28f5c000 & 0xffff, 0x28f < uVar3)) {
      uStack_18._0_2_ = CONCAT11(0x1d,(undefined1)uStack_18);
    }
    else {
      uVar3 = (uVar4 * -0xa3d7 & 0xffff) >> 4;
      if ((uVar3 | uVar4 * -0xa3d7000 & 0xffff) < 0xa4) {
        uStack_18._0_2_ = CONCAT11(0x1d,(undefined1)uStack_18);
      }
    }
  }
  if (((int)(&cStack_19)[(byte)param_1[1]] < (int)(uint)*(byte *)((int)param_1 + 3)) ||
     (*(byte *)((int)param_1 + 3) == 0)) {
    FUN_2c648600(0,_LAB_2c64a310);
    bVar2 = false;
    uVar3 = extraout_r1_00;
  }
  if (((0x17 < *(byte *)((int)param_1 + 5)) || (0x3b < (byte)param_1[3])) ||
     (0x3b < *(byte *)((int)param_1 + 7))) {
    FUN_2c648600(0,_LAB_2c64a30c);
    bVar2 = false;
    uVar3 = extraout_r1;
  }
  if ((*_LAB_2c64a304 ^ uStack_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(bVar2,uVar3,*_LAB_2c64a304 ^ uStack_c,0);
  }
  return;
}

