/* FUN_2c5037fc @ 0x2c5037fc */

/* WARNING: Removing unreachable block (ram,0x2c639370) */

void FUN_2c5037fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_14;
  undefined4 uStack_10;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x16c);
  if ((*(short *)(*(int *)(iVar1 + 0xa0) + 0x1a) == 3) && (*(int *)(iVar3 + 0x160) != 0)) {
    iVar2 = *(int *)(iVar3 + 0x170);
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x170) + 1;
    *(int *)(iVar3 + 0x170) = iVar2;
  }
  uStack_10 = param_4;
  if (iVar2 == 100) {
    iVar1 = func_0x2c4fefdc(*(undefined4 *)(iVar3 + 0x14));
    if (*(int *)(iVar1 + 4) == 0) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x16c) + 0xa0);
      if ((*(short *)(iVar1 + 0x1a) == 3) && (*(int *)(iVar1 + 0x20) < *(int *)(iVar1 + 0x1c) + -1))
      {
        if (*(char *)(*(int *)(iVar3 + 0x16c) + 5) == '\x06') {
          func_0x2c5033c4(iVar3 + 0x160,1);
        }
        else {
          FUN_2c62be40(param_1);
          registry_lookup(0x1010);
          FUN_2c5e4068();
        }
      }
      else {
        *(undefined1 *)(iVar1 + 0xe) = 1;
        *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x16c) + 0xa0) + 0xd) = 0;
        FUN_2c50216c(iVar3);
        FUN_2c4fffac(*(undefined4 *)(iVar3 + 0x16c));
        FUN_2c63bbfc(0xb);
      }
    }
    else {
      func_0x2c4ff048(*(undefined4 *)(iVar3 + 0x14));
    }
    fVar4 = fRam2c5038e4;
    iVar1 = *(int *)(iVar3 + 0x16c);
    *(undefined4 *)(iVar3 + 0x170) = 0;
  }
  else {
    fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = fVar4 / fRam2c5038e0;
  }
  *(float *)(*(int *)(iVar1 + 0xa0) + 8) = fVar4;
  iVar1 = *(int *)(iVar3 + 0x170);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (*(int *)(iVar3 + 0x24) != iVar1) {
    if (*(int *)(iVar3 + 0x2c) <= iVar1) {
      iVar1 = *(int *)(iVar3 + 0x2c);
    }
    iVar2 = *(int *)(iVar3 + 0x28);
    if (*(int *)(iVar3 + 0x28) < *(int *)(iVar3 + 0x30)) {
      iVar2 = *(int *)(iVar3 + 0x30);
    }
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    if (*(int *)(iVar3 + 0x24) != iVar1) {
      iStack_14 = *DAT_2c6392a4;
      if (*(int *)(iVar3 + 0x48) == -1) {
        iVar2 = *(int *)(iVar3 + 0x24);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0x44);
      }
      *(int *)(iVar3 + 0x40) = iVar2;
      *(int *)(iVar3 + 0x44) = iVar1;
      *(int *)(iVar3 + 0x24) = iVar1;
      FUN_2c62e838(iVar3 + 0x3c,0);
      FUN_2c62e7b4(&iStack_58);
      uStack_54 = DAT_2c6392a8;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0x100;
      uStack_4c = DAT_2c6392ac;
      iStack_58 = iVar3 + 0x3c;
      uStack_2c = FUN_2c6033b4(iVar3,0,100);
      if (*(int *)(iVar3 + 0x4c) != 0) {
        iStack_3c = *(int *)(iVar3 + 0x4c);
      }
      FUN_2c62e8ec(&iStack_58);
      if (*DAT_2c6392a4 == iStack_14) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
  return;
}

