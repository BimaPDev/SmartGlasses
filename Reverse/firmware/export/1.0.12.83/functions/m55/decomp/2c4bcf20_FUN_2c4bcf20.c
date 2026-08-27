/* FUN_2c4bcf20 @ 0x2c4bcf20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4bcf20(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined4 unaff_lr;
  
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bcf9c,param_1,param_3,param_5);
  }
  if (*(char *)(_LAB_2c4bcf98 + param_1 * 0x70) == '\0') {
    uVar8 = FUN_2c4bc030(param_1,param_3,param_4,param_5,param_6,1,param_2,2,param_7,param_8);
    if (uVar8 < 2) {
      FUN_2c4bc884(param_1);
      iVar6 = _LAB_2c4bc9b0;
      iVar9 = param_1 << 3;
      bVar1 = *(byte *)(_LAB_2c4bc9b0 + param_1 * 0x70 + 1);
      uVar7 = bVar1 & 1;
      if ((bVar1 & 1) != 0) {
        iVar10 = uVar8 + 1;
        iVar13 = 2000;
        pcVar12 = (char *)(param_1 * 0x70 + iVar10 * 0x30 + _LAB_2c4bc9b0);
        while( true ) {
          puVar5 = _LAB_2c4bc9ac;
          iVar11 = 0;
          bVar3 = (bool)isCurrentModePrivileged();
          if (bVar3) {
            iVar11 = getBasePriority();
          }
          if (iVar11 != 0x40) {
            *_LAB_2c4bc9ac = 0x2c4bc922;
            puVar5[1] = unaff_lr;
          }
          bVar3 = (bool)isCurrentModePrivileged();
          if (bVar3) {
            setBasePriority(0x40);
          }
          cVar2 = *pcVar12;
          bVar3 = iVar13 == 0;
          if ((cVar2 == '\x02') && (bVar3)) {
            *(undefined4 *)(param_1 * 0x70 + uVar8 * 0x30 + iVar6 + 0x38) = 0x10000000;
            FUN_2c4bbb80(param_1,0x40);
            FUN_2c4bc22c(param_1);
          }
          if (iVar11 == 0) {
            *_LAB_2c4bc9ac = 0xffffffff;
          }
          bVar4 = (bool)isCurrentModePrivileged();
          if (bVar4) {
            setBasePriority(iVar11);
          }
          iVar13 = iVar13 + -1;
          if ((cVar2 != '\x02') || (bVar3)) break;
          FUN_2c6444fc(1);
        }
        iVar9 = (iVar9 - param_1) * 0x10;
        *(undefined1 *)(iVar6 + iVar9 + iVar10 * 0x30) = 0;
        uVar7 = *(uint *)(iVar9 + uVar8 * 0x30 + iVar6 + 0x38);
      }
      return uVar7;
    }
    return 0x40000000;
  }
  return 0x80000000;
}

