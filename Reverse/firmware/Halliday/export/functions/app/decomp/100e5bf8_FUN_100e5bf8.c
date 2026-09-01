/* FUN_100e5bf8 @ 0x100e5bf8 */

void FUN_100e5bf8(ushort *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  uint local_40;
  
  uVar2 = DAT_100e5da4;
  bVar16 = 0;
  uVar11 = 0;
  bVar1 = *param_3;
LAB_100e5c14:
  if (bVar16 < bVar1 >> 1) {
    uVar14 = (uint)param_1[1];
    pcVar8 = (char *)(uVar14 + 4 + (int)param_1);
    local_40 = 0;
    do {
      if (*param_1 <= uVar14) break;
      if (local_40 == 0) {
        param_1[1] = (ushort)uVar14;
        local_40 = (uint)(*pcVar8 == '<');
      }
      else if (*pcVar8 == '>') goto code_r0x100e5c5e;
      uVar14 = uVar14 + 1 & 0xffff;
      pcVar8 = pcVar8 + 1;
    } while( true );
  }
LAB_100e5c32:
  *param_3 = (byte)uVar11;
  return;
code_r0x100e5c5e:
  if (uVar14 == 0) goto LAB_100e5c32;
  iVar15 = param_1[1] + 4;
  uVar9 = (uVar14 - param_1[1]) + 1 & 0xffff;
  for (uVar12 = 0; uVar12 < uVar9; uVar12 = uVar12 + 1 & 0xffff) {
    if (*(char *)((int)param_1 + uVar12 + iVar15) == 'c') {
      uVar4 = FUN_1011ea10(DAT_100e5da0);
      iVar5 = FUN_1011ea20((int)param_1 + uVar12 + iVar15,DAT_100e5da0,uVar4);
      if (iVar5 == 0) {
        iVar5 = FUN_1011ea10(DAT_100e5da0);
        uVar6 = iVar5 + uVar12 & 0xffff;
        uVar7 = uVar6;
        while( true ) {
          uVar10 = uVar7 & 0xffff;
          if (uVar9 <= uVar10) break;
          if ((*(char *)((int)param_1 + uVar7 + iVar15) == '\"') && (uVar6 != uVar10)) {
            *(undefined1 *)((int)param_1 + uVar7 + iVar15) = 0;
            if (uVar11 < *param_3) {
              iVar13 = (int)param_1 + uVar6 + iVar15;
              iVar5 = param_2 + uVar11 * 8;
              *(undefined1 *)(param_2 + uVar11 * 8) = 0x1f;
              uVar3 = FUN_1011ea10(iVar13);
              *(undefined2 *)(iVar5 + 2) = uVar3;
              *(int *)(iVar5 + 4) = iVar13;
              uVar12 = local_40;
            }
            else {
              uVar12 = 0;
            }
            uVar11 = uVar11 + uVar12 & 0xff;
            uVar12 = uVar10;
            break;
          }
          uVar7 = uVar7 + 1;
        }
      }
    }
    if (*param_3 <= uVar11) break;
    if (*(char *)((int)param_1 + uVar12 + iVar15) == 'n') {
      uVar4 = FUN_1011ea10(uVar2);
      iVar5 = FUN_1011ea20((int)param_1 + uVar12 + iVar15,uVar2,uVar4);
      if (iVar5 == 0) {
        iVar5 = FUN_1011ea10(uVar2);
        uVar6 = iVar5 + uVar12 & 0xffff;
        uVar7 = uVar6;
        while( true ) {
          uVar10 = uVar7 & 0xffff;
          if (uVar9 <= uVar10) break;
          if ((*(char *)((int)param_1 + uVar7 + iVar15) == '\"') && (uVar10 != uVar6)) {
            *(undefined1 *)((int)param_1 + uVar7 + iVar15) = 0;
            if (uVar11 < *param_3) {
              iVar13 = (int)param_1 + uVar6 + iVar15;
              iVar5 = param_2 + uVar11 * 8;
              *(undefined1 *)(param_2 + uVar11 * 8) = 2;
              uVar3 = FUN_1011ea10(iVar13);
              *(undefined2 *)(iVar5 + 2) = uVar3;
              *(int *)(iVar5 + 4) = iVar13;
              uVar12 = local_40;
            }
            else {
              uVar12 = 0;
            }
            uVar11 = uVar11 + uVar12 & 0xff;
            uVar12 = uVar10;
            break;
          }
          uVar7 = uVar7 + 1;
        }
      }
    }
    if (*param_3 <= uVar11) break;
  }
  param_1[1] = (ushort)uVar14 + 1;
  bVar16 = bVar16 + 1;
  goto LAB_100e5c14;
}

