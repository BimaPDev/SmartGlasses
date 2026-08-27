/* FUN_2c01699c @ 0x2c01699c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_2c01699c(uint param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 unaff_lr;
  
  puVar4 = _DAT_2c016af4;
  pcVar3 = _DAT_2c016aec;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(_DAT_2c016b00,_DAT_2c016afc);
  }
  if (*_DAT_2c016aec != '\0') {
    if (0x1a < param_1) {
      return 3;
    }
    if (_DAT_2c016aec[param_1 * 0x2c + 4] != '\0') {
      uVar9 = param_2 & 0x3ffffff;
      if ((uVar9 < (*(uint *)(_DAT_2c016aec + param_1 * 0x2c + 8) & 0x3ffffff)) &&
         ((*(uint *)(_DAT_2c016aec + param_1 * 0x2c + 8) & 0x3ffffff) +
          *(int *)(_DAT_2c016aec + param_1 * 0x2c + 0xc) < uVar9 + param_4)) {
        return 5;
      }
      if (param_4 != 0) {
        iVar11 = param_4 + -1;
        uVar6 = *(uint *)(_DAT_2c016af0 + (uint)(byte)_DAT_2c016aec[param_1 * 0x2c + 5] * 4);
        if (uVar9 / uVar6 == (uVar9 + iVar11) / uVar6) {
          if ((byte)_DAT_2c016aec[param_1 * 0x2c + 5] == 0) {
            iVar7 = 0;
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              iVar7 = isIRQinterruptsEnabled();
            }
            if (-1 < iVar7 << 0x1f) {
              *_DAT_2c016af4 = 0x2c016a16;
              puVar4[1] = unaff_lr;
              disableIRQinterrupts();
            }
            *_DAT_2c016af8 = iVar7;
          }
          uVar9 = *(uint *)(pcVar3 + param_1 * 0x2c + 0x14);
          pcVar5 = *(char **)(pcVar3 + param_1 * 0x2c + 0x24);
          do {
            pcVar2 = pcVar5;
            if (pcVar2 == (char *)0x0) {
              FUN_2c016004(pcVar3[param_1 * 0x2c + 5],param_2,param_4);
              FUN_2c00669c(pcVar3[param_1 * 0x2c + 5],param_2,param_3,param_4);
              FUN_2c016094(pcVar3[param_1 * 0x2c + 5],param_2,param_4);
              goto LAB_2c016a6e;
            }
            pcVar5 = *(char **)(pcVar2 + 0x1c);
          } while (uVar9 * (param_2 / uVar9) - *(int *)(pcVar2 + 4) != 0);
          if (*pcVar2 == '\x01') {
            puVar10 = (undefined1 *)(param_3 + -1);
            puVar8 = (undefined1 *)
                     (*(int *)(pcVar2 + 0x14) + (param_2 - uVar9 * (param_2 / uVar9)) + -1);
            do {
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
              *puVar10 = *puVar8;
            } while (puVar10 != (undefined1 *)(iVar11 + param_3));
          }
          else {
            puVar8 = (undefined1 *)(param_3 + -1);
            do {
              puVar8 = puVar8 + 1;
              *puVar8 = 0xff;
            } while ((undefined1 *)(param_3 + iVar11) != puVar8);
          }
LAB_2c016a6e:
          if (pcVar3[param_1 * 0x2c + 5] != '\0') {
            return 0;
          }
          if (*_DAT_2c016af8 << 0x1f < 0) {
            return 0;
          }
          *_DAT_2c016af4 = 0xffffffff;
          enableIRQinterrupts();
          return 0;
        }
      }
      return 6;
    }
  }
  return 7;
}

