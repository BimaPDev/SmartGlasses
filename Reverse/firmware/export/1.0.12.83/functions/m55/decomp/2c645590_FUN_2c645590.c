/* FUN_2c645590 @ 0x2c645590 */

/* WARNING: Removing unreachable block (ram,0x2c645692) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c645590(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  
  puVar2 = _LAB_2c6456ac;
  iVar1 = _LAB_2c6456a8;
  if (*(char *)(_LAB_2c6456a8 + 8) == '\x04') {
    uVar3 = func_0x2c646ec0();
    iVar4 = FUN_2c673c88();
    fVar9 = (float)VectorUnsignedToFloat(iVar4 - puVar2[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = (float)VectorUnsignedToFloat(*_LAB_2c6456b0,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)func_0x2c6743b8();
    uVar7 = *puVar2;
    uVar10 = VectorFloatToUnsigned((fVar9 * fVar11) / fVar8 + 0.5,3);
    if (uVar7 == 0) {
      uVar5 = uVar10 / uVar3;
      uVar10 = uVar10 - uVar3 * uVar5;
    }
    else if (uVar10 < uVar7) {
      uVar10 = uVar7 - uVar10;
      uVar5 = 0;
    }
    else {
      uVar6 = (uVar10 - uVar7) / uVar3;
      uVar5 = uVar6 + 1;
      uVar10 = uVar3 - ((uVar10 - uVar7) - uVar3 * uVar6);
    }
    *(uint *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + uVar5;
    *(uint *)(*(int *)(iVar1 + 0x14) + 0x4c) = *(int *)(*(int *)(iVar1 + 0x14) + 0x4c) + uVar5;
    iVar4 = *(int *)(iVar1 + 0x2c);
    if (iVar4 != 0) {
      while (uVar7 = *(uint *)(iVar4 + 0x1c), uVar7 <= uVar5) {
        *(undefined4 *)(iVar4 + 0x1c) = 1;
        uVar5 = uVar5 - uVar7;
        func_0x2c645c14();
        iVar4 = *(int *)(iVar1 + 0x2c);
        if ((iVar4 == 0) || (uVar5 == 0)) goto LAB_2c64560c;
      }
      *(uint *)(iVar4 + 0x1c) = uVar7 - uVar5;
    }
LAB_2c64560c:
    FUN_2c645264(*(undefined4 *)(iVar1 + 0x4c));
    *(undefined1 *)(iVar1 + 8) = 2;
    FUN_2c64610c(0);
    if ((uVar10 != 0) && (uVar3 != uVar10)) {
      do {
      } while( true );
    }
    uRame000e018 = 0;
    *(undefined1 *)(iVar1 + 9) = 0;
    iVar4 = _LAB_2c6456b4;
    DataSynchronizationBarrier(0xf);
    if (*(char *)(iVar1 + 10) != '\0') {
      *(undefined1 *)(iVar1 + 10) = 0;
      *(undefined4 *)(iVar4 + 4) = 0x10000000;
    }
    func_0x2c646e5c();
  }
  return;
}

