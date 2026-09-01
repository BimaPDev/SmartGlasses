/* FUN_100e5e5c @ 0x100e5e5c */

void FUN_100e5e5c(undefined4 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  ushort uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  code *pcVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  bool bVar21;
  char local_35 [5];
  char local_30;
  undefined4 local_2c;
  
  bVar1 = PTR_DAT_100e60e4[3];
  if ((*(byte *)((int)param_1 + 0xd) & 0xfd) != 5) {
    if (*(byte *)((int)param_1 + 0xd) == 8) {
      if ((bVar1 & 0x10) != 0) {
        FUN_10119dc2(PTR_s_pbap_search__d_100e6100,param_3);
      }
      uVar7 = DAT_100e6110;
      uVar5 = DAT_100e60f4;
      uVar15 = 0;
      iVar8 = (int)PTR_DAT_100e60ec - (int)PTR_DAT_100e60f0;
      puVar19 = param_1 + 6;
      while (uVar15 < param_3) {
        iVar10 = FUN_10138a72(param_2 + uVar15,param_3 - uVar15 & 0xffff,puVar19);
        uVar15 = iVar10 + uVar15 & 0xffff;
LAB_100e606c:
        do {
          local_35[0] = '\n';
          FUN_100e5bf8(puVar19,DAT_100e60f4,local_35);
          if (local_35[0] != '\0') {
            if ((param_1[5] == 0) ||
               (pcVar17 = *(code **)(param_1[5] + 0xc), pcVar17 == (code *)0x0)) goto LAB_100e606c;
            local_30 = local_35[0];
            local_35[1] = 3;
            local_2c = uVar5;
            (*pcVar17)(*param_1,*(undefined1 *)(param_1 + 3),local_35 + 1);
            if (local_35[0] != '\0') goto LAB_100e606c;
          }
          if ((uint)*(ushort *)(param_1 + 6) - (uint)*(ushort *)((int)param_1 + 0x1a) != 0x200)
          break;
          param_1[6] = 0;
          FUN_100a5b78(iVar8 * 0x20 & 0xff00U | 0x29c0011,uVar7);
        } while (local_35[0] != '\0');
        FUN_10138a9e(puVar19);
      }
    }
    else if ((bVar1 & 0x10) != 0) {
      FUN_10119dc2(PTR_s_Parse_vcard_err_state__d_100e6104);
    }
    return;
  }
  if ((bVar1 & 0x10) != 0) {
    FUN_10119dc2(PTR_s_pbap_vcard__d_100e60e8,param_3);
  }
  uVar18 = 0;
  uVar15 = ((int)PTR_DAT_100e60ec - (int)PTR_DAT_100e60f0) * 0x20 & 0xff00;
  uVar20 = uVar15 | DAT_100e6108;
  uVar15 = uVar15 | DAT_100e610c;
LAB_100e5ea6:
  if (param_3 <= uVar18) {
    return;
  }
  puVar19 = param_1 + 6;
  iVar8 = FUN_10138a72(param_2 + uVar18,param_3 - uVar18 & 0xffff,puVar19);
  uVar18 = iVar8 + uVar18 & 0xffff;
LAB_100e5ec6:
  local_35[0] = '\n';
  FUN_100e59e4(puVar19,DAT_100e60f4,local_35);
  if (local_35[0] != '\0') {
    if ((param_1[5] == 0) || (pcVar17 = *(code **)(param_1[5] + 0xc), pcVar17 == (code *)0x0))
    goto LAB_100e5ec6;
    local_35[1] = 1;
    local_30 = local_35[0];
    local_2c = DAT_100e60f4;
    (*pcVar17)(*param_1,*(undefined1 *)(param_1 + 3),local_35 + 1);
    if (local_35[0] != '\0') goto LAB_100e5ec6;
  }
  uVar4 = *(ushort *)(param_1 + 6);
  if ((uint)uVar4 - (uint)*(ushort *)((int)param_1 + 0x1a) == 0x200) {
    uVar11 = 0;
    uVar16 = 0;
    do {
      cVar2 = *(char *)((int)param_1 + uVar16 + 0x1c);
      if (cVar2 == '=') {
        if (0x1ff < uVar16 + 2) goto LAB_100e5f88;
        cVar2 = *(char *)((int)param_1 + uVar16 + 0x1d);
        if (cVar2 != '\r') {
          if (cVar2 == '\n') {
            bVar21 = *(char *)((int)param_1 + uVar16 + 0x1e) == '\r';
            goto LAB_100e5f0e;
          }
LAB_100e5f84:
          uVar11 = uVar11 + 2;
          goto LAB_100e5f88;
        }
        bVar21 = *(char *)((int)param_1 + uVar16 + 0x1e) == '\n';
LAB_100e5f0e:
        if (!bVar21) goto LAB_100e5f84;
        uVar11 = uVar11 + 3;
        if (uVar11 < 0x81) {
          uVar16 = uVar16 + 2 & 0xffff;
          goto LAB_100e5f1a;
        }
LAB_100e5f90:
        if (uVar16 != 0) {
          pcVar12 = (char *)(uVar16 + 0x1a + (int)param_1);
          uVar14 = uVar16;
          goto LAB_100e5f9c;
        }
        break;
      }
      if ((cVar2 == '\r') || (cVar2 == '\n')) {
        uVar11 = 0;
      }
      else {
LAB_100e5f88:
        uVar11 = uVar11 + 1;
        if (0x80 < uVar11) goto LAB_100e5f90;
      }
LAB_100e5f1a:
      uVar16 = uVar16 + 1 & 0xffff;
    } while (uVar16 < 0x200);
    goto LAB_100e5f24;
  }
  goto LAB_100e5f38;
LAB_100e5f9c:
  if (0x1ff < uVar14) goto code_r0x100e5fa2;
  cVar3 = pcVar12[1];
  cVar2 = pcVar12[2];
  if ((((cVar3 != '=') || ((cVar2 != '\r' && (cVar2 != '\n')))) &&
      ((*pcVar12 != '=' || ((cVar3 != '\r' && (cVar3 != '\n')))))) &&
     ((cVar2 == '\r' || (cVar2 == '\n')))) goto LAB_100e5fa6;
  uVar14 = uVar14 + 1 & 0xffff;
  pcVar12 = pcVar12 + 1;
  goto LAB_100e5f9c;
code_r0x100e5fa2:
  if (uVar14 != 0x200) {
    uVar14 = 0;
LAB_100e5fa6:
    puVar9 = (undefined1 *)(uVar16 + 0x1c + (int)param_1);
    for (uVar13 = uVar14; uVar13 != 0x200; uVar13 = uVar13 + 1 & 0xffff) {
      *puVar9 = puVar9[uVar14 - uVar16];
      puVar9 = puVar9 + 1;
    }
  }
  puVar6 = PTR_s_Vcard_do_cut_short__d_100e60fc;
  *(ushort *)(param_1 + 6) = uVar4 + ((short)uVar16 - (short)uVar14);
  FUN_100a5b78(uVar20,puVar6,uVar14 - uVar16);
  if ((uint)*(ushort *)(param_1 + 6) - (uint)*(ushort *)((int)param_1 + 0x1a) == 0x200) {
LAB_100e5f24:
    puVar6 = PTR_s_Vcard_too_larger_100e60f8;
    param_1[6] = 0;
    FUN_100a5b78(uVar15,puVar6);
  }
  if (local_35[0] == '\0') goto LAB_100e5f38;
  goto LAB_100e5ec6;
LAB_100e5f38:
  FUN_10138a9e(puVar19);
  goto LAB_100e5ea6;
}

