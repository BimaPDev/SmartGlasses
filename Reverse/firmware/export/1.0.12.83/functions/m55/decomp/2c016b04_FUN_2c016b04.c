/* FUN_2c016b04 @ 0x2c016b04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_2c016b04(uint param_1,uint param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  
  puVar4 = _DAT_2c016c00;
  pcVar3 = _DAT_2c016bf8;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c016c0c,DAT_2c016c08,0xa9e,param_4,param_4);
  }
  if (*_DAT_2c016bf8 != '\0') {
    if (0x1a < param_1) {
      return 3;
    }
    if (_DAT_2c016bf8[param_1 * 0x2c + 4] != '\0') {
      uVar8 = param_2 & 0x3ffffff;
      if ((uVar8 < (*(uint *)(_DAT_2c016bf8 + param_1 * 0x2c + 8) & 0x3ffffff)) &&
         ((*(uint *)(_DAT_2c016bf8 + param_1 * 0x2c + 8) & 0x3ffffff) +
          *(int *)(_DAT_2c016bf8 + param_1 * 0x2c + 0xc) < uVar8 + param_4)) {
        return 5;
      }
      if (param_4 != 0) {
        uVar5 = (uint)(byte)_DAT_2c016bf8[param_1 * 0x2c + 5];
        uVar6 = *(uint *)(_DAT_2c016bfc + uVar5 * 4);
        if (uVar8 / uVar6 == (uVar8 + param_4 + -1) / uVar6) {
          if (uVar5 == 0) {
            iVar7 = 0;
            bVar2 = (bool)isCurrentModePrivileged();
            if (bVar2) {
              iVar7 = isIRQinterruptsEnabled();
            }
            if (-1 < iVar7 << 0x1f) {
              *_DAT_2c016c00 = 0x2c016b7a;
              puVar4[1] = unaff_lr;
              disableIRQinterrupts();
              uVar5 = (uint)(byte)pcVar3[param_1 * 0x2c + 5];
            }
            *_DAT_2c016c04 = iVar7;
          }
          FUN_2c016004(uVar5,param_2,param_4);
          puVar9 = (undefined1 *)(param_3 + -1);
          do {
            puVar1 = puVar9 + ((param_2 + 1) - param_3);
            puVar9 = puVar9 + 1;
            *puVar9 = *puVar1;
          } while ((undefined1 *)(param_3 + param_4 + -1) != puVar9);
          FUN_2c016094(pcVar3[param_1 * 0x2c + 5],param_2,param_4);
          if (pcVar3[param_1 * 0x2c + 5] == '\0') {
            if (*_DAT_2c016c04 << 0x1f < 0) {
              return 0;
            }
            *_DAT_2c016c00 = 0xffffffff;
            enableIRQinterrupts();
            return 0;
          }
          return 0;
        }
      }
      return 6;
    }
  }
  return 7;
}

