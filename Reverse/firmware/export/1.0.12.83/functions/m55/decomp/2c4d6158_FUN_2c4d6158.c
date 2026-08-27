/* FUN_2c4d6158 @ 0x2c4d6158 */

void FUN_2c4d6158(int param_1,int param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  undefined1 **ppuVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 **ppuVar15;
  int iVar16;
  int *piVar17;
  byte *pbVar18;
  char *pcVar19;
  int local_94;
  int local_80 [6];
  undefined1 *local_68;
  int local_64;
  int local_60;
  undefined1 *local_5c;
  int local_58 [4];
  int local_48 [3];
  int local_3c [4];
  uint local_2c;
  
  local_2c = *DAT_2c4d6320;
  local_68 = (undefined1 *)0x0;
  ppuVar10 = &local_68;
  local_64 = 0;
  local_60 = 0;
  FUN_2c674268(&local_5c,0,0x30,0);
  puVar7 = (undefined1 *)0x0;
  local_80[0] = param_1 + 0x30;
  local_94 = 1;
  local_80[3] = param_1 + 0x10;
  local_80[1] = param_1 + 0x60;
  local_80[4] = param_1 + 0x40;
  local_80[2] = param_1 + 0x90;
  local_80[5] = param_1 + 0x70;
  ppuVar15 = &local_5c;
  do {
    piVar5 = local_80;
    piVar17 = local_80 + 3;
    ppuVar12 = ppuVar15;
    pbVar18 = (byte *)(param_1 + 2);
    do {
      pbVar18 = pbVar18 + 1;
      bVar2 = *pbVar18;
      if (bVar2 != 0) {
        iVar4 = *piVar5;
        pbVar8 = (byte *)(iVar4 + -1);
        pbVar9 = pbVar8;
        do {
          pbVar1 = pbVar9 + 1;
          if ((undefined1 *)(uint)*pbVar1 == puVar7) {
            puVar11 = *ppuVar10;
            if (pbVar9[*piVar17 + (1 - iVar4)] == 0) {
              iVar16 = 1;
            }
            else {
              iVar16 = 2;
            }
            *ppuVar12 = *ppuVar12 + iVar16;
            *ppuVar10 = puVar11 + iVar16;
          }
          pbVar9 = pbVar1;
        } while (pbVar8 + bVar2 != pbVar1);
      }
      ppuVar12 = ppuVar12 + 1;
      piVar5 = piVar5 + 1;
      piVar17 = piVar17 + 1;
    } while (pbVar18 != (byte *)(param_1 + 5));
    if (puVar7 == (undefined1 *)0x0) {
      local_58[2] = local_58[2] + (uint)*(byte *)(param_1 + 6);
      local_68 = local_68 + *(byte *)(param_1 + 6);
    }
    else if (local_94 == 3) {
      if (param_3 < local_68 + local_60 + local_64) {
        uVar6 = 0xffffffff;
LAB_2c4d62e0:
        if ((*DAT_2c4d6320 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail(uVar6,puVar7,*DAT_2c4d6320 ^ local_2c,0);
        }
        return;
      }
      if (local_68 != (undefined1 *)0x0) {
        iVar4 = 0;
        pcVar19 = (char *)(param_2 + -1);
        uVar14 = 0;
        puVar13 = (undefined1 *)0x0;
        puVar11 = local_5c;
        do {
          if ((puVar11 <= puVar13) && (uVar14 < 3)) {
            piVar5 = local_58 + uVar14;
            do {
              uVar14 = uVar14 + 1;
              puVar7 = (undefined1 *)*piVar5;
              puVar11 = puVar11 + (int)puVar7;
              iVar4 = iVar4 + piVar5[3] + piVar5[7];
              if (puVar13 < puVar11) break;
              piVar5 = piVar5 + 1;
            } while (uVar14 < 3);
          }
          cVar3 = (char)puVar13;
          puVar13 = puVar13 + 1;
          pcVar19 = pcVar19 + 1;
          *pcVar19 = (char)iVar4 + cVar3;
        } while (local_68 != puVar13);
      }
      piVar5 = local_58;
      puVar11 = local_68;
      if (local_58[3] == 0) goto LAB_2c4d62d0;
      do {
        puVar13 = local_5c + local_58[3];
        puVar7 = puVar11 + param_2 + -1;
        do {
          puVar7 = puVar7 + 1;
          *puVar7 = (char)local_5c;
          local_5c = local_5c + 1;
        } while (puVar13 != local_5c);
        puVar11 = puVar11 + local_58[3];
        iVar4 = piVar5[7];
        local_5c = puVar13;
        piVar17 = piVar5;
        while( true ) {
          if (iVar4 != 0) {
            puVar13 = local_5c + iVar4;
            puVar7 = puVar11 + param_2 + -1;
            do {
              puVar7 = puVar7 + 1;
              *puVar7 = (char)local_5c;
              local_5c = local_5c + 1;
            } while (puVar13 != local_5c);
            puVar11 = puVar11 + iVar4;
            local_5c = puVar13;
          }
          if (local_58 + 3 == piVar17) {
            uVar6 = 0;
            goto LAB_2c4d62e0;
          }
          piVar5 = piVar17 + 1;
          local_58[3] = piVar17[4];
          local_5c = local_5c + *piVar17;
          if (local_58[3] != 0) break;
LAB_2c4d62d0:
          iVar4 = piVar5[7];
          piVar17 = piVar5;
        }
      } while( true );
    }
    puVar7 = puVar7 + 1;
    ppuVar15 = ppuVar15 + 4;
    ppuVar10 = ppuVar10 + 1;
    local_94 = local_94 + 1;
  } while( true );
}

