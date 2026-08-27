/* FUN_2c61c098 @ 0x2c61c098 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61c098(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  short sStack_28;
  short sStack_26;
  int iStack_24;
  
  iStack_24 = *_LAB_2c61c188;
  iVar1 = FUN_2c602408();
  iVar2 = FUN_2c602400(param_1);
  if ((iVar1 == 10) && ((iVar1 = FUN_2c5ff4d8(), iVar1 == 0 || (*(char *)(iVar1 + 4) != '\x01')))) {
    uVar11 = 0;
    iVar3 = FUN_2c607404(iVar2);
    iVar4 = FUN_2c607440(iVar2);
    FUN_2c6050b8(iVar2,&sStack_28);
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 1;
    }
    iVar9 = iVar4;
    if (iVar4 < 0) {
      iVar9 = iVar4 + 1;
    }
    for (; uVar8 = FUN_2c6041fc(iVar2), uVar11 < uVar8; uVar11 = uVar11 + 1) {
      iVar5 = FUN_2c6041dc(iVar2,uVar11);
      iVar6 = FUN_2c607354();
      iVar7 = FUN_2c607394(iVar5);
      if (((short)((short)(((int)sStack_28 + ((iVar1 << 0xf) >> 0x10)) / iVar3) * (short)iVar3) ==
           iVar6) &&
         ((short)((short)(((int)sStack_26 + ((iVar9 << 0xf) >> 0x10)) / iVar4) * (short)iVar4) ==
          iVar7)) {
        *(int *)(iVar2 + 0x24) = iVar5;
        uVar10 = *(undefined1 *)(iVar5 + 0x24);
        FUN_2c602340(iVar2,0x1c,0);
        goto LAB_2c61c168;
      }
    }
    uVar10 = 0xf;
LAB_2c61c168:
    FUN_2c6049a4(iVar2,uVar10);
  }
  if (*_LAB_2c61c188 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

