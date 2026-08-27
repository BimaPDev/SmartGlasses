/* FUN_2c135f50 @ 0x2c135f50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c135f50(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  pcVar2 = _DAT_2c136070;
  if (_DAT_2c136068 + (param_1 & 0xfffffffc) <= _DAT_2c13606c) {
    if ((*_DAT_2c136070 != '\0') && (FUN_2c1351d0(_DAT_2c136074,1), *pcVar2 != '\0')) {
      FUN_2c1351d0(_DAT_2c136078,7);
    }
    puVar3 = _DAT_2c13607c;
    if (*(char *)(_DAT_2c13607c + 10) != '\0') {
      iVar8 = 0;
      puVar7 = _DAT_2c13607c;
      do {
        (*(code *)*puVar7)(6,0);
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar8 < (int)(uint)*(byte *)(puVar3 + 10));
    }
    iVar4 = _DAT_2c136088;
    uVar1 = _DAT_2c13606c;
    iVar8 = _DAT_2c136068;
    uVar9 = 0;
    uVar10 = 0;
    puVar7 = (undefined4 *)((param_1 & 0xfffffffc) - 0x40);
    do {
      if (uVar1 < (uint)((int)puVar7 + iVar8)) {
        return;
      }
      if ((uVar9 & 3) == 0) {
        if (uVar9 == 0x10) {
          uVar6 = 0x2a;
        }
        else {
          uVar6 = 0x20;
        }
        uVar10 = FUN_2c135620(iVar4,100,_DAT_2c136080,uVar6,puVar7,*puVar7);
      }
      else {
        iVar5 = FUN_2c135620(iVar4 + uVar10,100 - uVar10,_DAT_2c136084,*puVar7);
        uVar11 = uVar10 + iVar5;
        uVar10 = uVar11;
        if ((uVar9 & 3) == 3) {
          uVar10 = uVar11 + 1;
          if (100 < uVar10) {
            uVar11 = 99;
            uVar10 = 100;
          }
          *(undefined1 *)(iVar4 + uVar11) = 10;
          if (*(char *)(puVar3 + 10) != '\0') {
            iVar5 = 0;
            puVar12 = _DAT_2c13607c;
            do {
              (*(code *)*puVar12)(7,iVar4,uVar10);
              iVar5 = iVar5 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar5 < (int)(uint)*(byte *)(puVar3 + 10));
          }
          if (*pcVar2 != '\0') {
            FUN_2c1351d0(iVar4,uVar10);
          }
        }
      }
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar9 != 0x30);
  }
  return;
}

