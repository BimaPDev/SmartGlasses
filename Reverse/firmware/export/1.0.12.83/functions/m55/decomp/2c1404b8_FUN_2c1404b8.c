/* FUN_2c1404b8 @ 0x2c1404b8 */

/* WARNING: Removing unreachable block (ram,0x2c1405b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1404b8(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = _DAT_2c1405cc;
  if (*(char *)(_DAT_2c1405cc + 8) == '\x04') {
    uVar3 = func_0x2c141780();
    iVar4 = FUN_2c14486c();
    uVar5 = *_DAT_2c1405d4;
    lVar1 = (ulonglong)(iVar4 - _DAT_2c1405d4[1]) * (ulonglong)*_DAT_2c1405d0;
    uVar8 = (uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12;
    if (uVar5 == 0) {
      uVar7 = uVar8 / uVar3;
      uVar8 = uVar8 - uVar3 * uVar7;
    }
    else if (uVar8 < uVar5) {
      uVar7 = 0;
      uVar8 = uVar5 - uVar8;
    }
    else {
      uVar6 = (uVar8 - uVar5) / uVar3;
      uVar7 = uVar6 + 1;
      uVar8 = uVar3 - ((uVar8 - uVar5) - uVar3 * uVar6);
    }
    *(uint *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + uVar7;
    *(uint *)(*(int *)(iVar2 + 0x14) + 0x4c) = *(int *)(*(int *)(iVar2 + 0x14) + 0x4c) + uVar7;
    iVar4 = *(int *)(iVar2 + 0x2c);
    uVar5 = uVar7;
    if (iVar4 != 0) {
      while (uVar6 = *(uint *)(iVar4 + 0x1c), uVar6 <= uVar5) {
        *(undefined4 *)(iVar4 + 0x1c) = 1;
        uVar5 = uVar5 - uVar6;
        func_0x2c14095c();
        iVar4 = *(int *)(iVar2 + 0x2c);
        if ((iVar4 == 0) || (uVar5 == 0)) goto LAB_2c140524;
      }
      *(uint *)(iVar4 + 0x1c) = uVar6 - uVar5;
    }
LAB_2c140524:
    iVar4 = *(int *)(iVar2 + 0x44);
    if (iVar4 != 0) {
      while (uVar5 = *(uint *)(iVar4 + 0x10), uVar5 <= uVar7) {
        *(undefined4 *)(iVar4 + 0x10) = 1;
        uVar7 = uVar7 - uVar5;
        (**(code **)(iVar2 + 0x50))();
        iVar4 = *(int *)(iVar2 + 0x44);
        if ((iVar4 == 0) || (uVar7 == 0)) goto LAB_2c140544;
      }
      *(uint *)(iVar4 + 0x10) = uVar5 - uVar7;
    }
LAB_2c140544:
    *(undefined1 *)(iVar2 + 8) = 2;
    func_0x2c140db8(0);
    if ((uVar3 != uVar8) && (uVar8 != 0)) {
      do {
      } while( true );
    }
    uRame000e018 = 0;
    *(undefined1 *)(iVar2 + 9) = 0;
    iVar4 = _DAT_2c1405d8;
    DataSynchronizationBarrier(0xf);
    if (*(char *)(iVar2 + 10) != '\0') {
      *(undefined1 *)(iVar2 + 10) = 0;
      *(undefined4 *)(iVar4 + 4) = 0x10000000;
    }
    func_0x2c14171c();
  }
  return;
}

