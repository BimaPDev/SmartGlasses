/* FUN_2c1352d4 @ 0x2c1352d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c1352d4(uint param_1)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_lr;
  
  puVar3 = _DAT_2c13539c;
  pbVar2 = _DAT_2c13537c;
  if (*_DAT_2c13537c < 4) {
    iVar8 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar8 = getBasePriority();
    }
    if (iVar8 != 0x40) {
      *_DAT_2c13539c = 0x2c13534e;
      puVar3[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    uVar7 = (uint)*pbVar2;
    if (uVar7 < 4) {
      uVar6 = 0;
      if (param_1 != uVar7) {
        *pbVar2 = (byte)param_1;
      }
    }
    else {
      uVar6 = 1;
    }
    if (iVar8 == 0) {
      *_DAT_2c13539c = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar8);
    }
    return uVar6;
  }
  *_DAT_2c13537c = (byte)param_1;
  puVar4 = _DAT_2c135388;
  puVar3 = _DAT_2c135384;
  *_DAT_2c135380 = 0;
  pcVar5 = _DAT_2c13538c;
  *puVar3 = 0xffffffff;
  puVar3[1] = 0xffffffff;
  *puVar4 = 4;
  func_0x2c134218(_DAT_2c135390);
  if (*pcVar5 != '\0') {
    FUN_2c1351d0(_DAT_2c135394,1);
    if (*pcVar5 != '\0') {
      FUN_2c1351d0(_DAT_2c135394,1);
      uVar6 = FUN_2c1427e8(_DAT_2c135398);
      if (*pcVar5 != '\0') {
        FUN_2c1351d0(_DAT_2c135398,uVar6);
        if (*pcVar5 != '\0') {
          FUN_2c1351d0(_DAT_2c135394,1);
          return 0;
        }
      }
    }
  }
  return 0;
}

