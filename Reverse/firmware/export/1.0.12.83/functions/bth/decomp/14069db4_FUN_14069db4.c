/* FUN_14069db4 @ 0x14069db4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14069db4(undefined4 param_1,int param_2,int *param_3)

{
  undefined2 uVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  undefined1 uVar5;
  short sVar6;
  ushort uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  ushort uVar11;
  int iVar12;
  undefined2 *puVar13;
  ushort uVar14;
  ushort uVar15;
  char *pcVar16;
  ushort uVar17;
  bool bVar18;
  byte local_45;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  
  pcVar9 = *(char **)(param_2 + 0x20);
  local_34 = *DAT_1406a04c;
  if ((pcVar9 == (char *)0x0) || ((int)((uint)(byte)pcVar9[0x2d] << 0x1c) < 0)) {
    pcVar16 = (char *)0x0;
  }
  else {
    pcVar16 = pcVar9 + (((byte)pcVar9[0x2d] & 0xf) + 3) * 4;
  }
  uVar11 = (ushort)(byte)(*pcVar16 + 4);
  if (*pcVar16 == '\0') {
    uStack_38 = *(undefined4 *)(param_2 + 0x39);
    local_44 = *(undefined4 *)(param_2 + 0x2d);
    uStack_40 = *(undefined4 *)(param_2 + 0x31);
    uStack_3c = *(undefined4 *)(param_2 + 0x35);
    local_45 = (byte)(((uint)*(byte *)(param_2 + 0x2c) << 0x1a) >> 0x1e);
  }
  bVar3 = 10;
LAB_14069e1c:
  if (pcVar9 == (char *)0x0) goto LAB_14069edc;
LAB_14069e20:
  uVar14 = *(ushort *)(pcVar9 + 4);
  if (uVar14 < uVar11) {
LAB_14069ffe:
    if (uVar14 < uVar11) {
LAB_14069ede:
      FUN_140735a8(pcVar9);
      *(undefined4 *)(param_2 + 0x20) = 0;
    }
    else if (pcVar16[1] == '\0') {
      cVar2 = *pcVar16;
      FUN_140738bc(pcVar9);
      if (pcVar9 != (char *)0x0) {
        if ((int)((uint)(byte)pcVar9[0x2d] << 0x1c) < 0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = pcVar9 + (((byte)pcVar9[0x2d] & 0xf) + 3) * 4;
        }
      }
      *pcVar9 = cVar2;
      pcVar9[1] = '\x01';
    }
    if (*DAT_1406a04c == local_34) {
      return bVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  uVar14 = *(ushort *)(pcVar9 + *(ushort *)(pcVar9 + 6) + 0x30);
  FUN_140736fc(pcVar9,2);
  uVar15 = *(ushort *)(pcVar9 + *(ushort *)(pcVar9 + 6) + 0x30);
  FUN_140736fc(pcVar9,2);
  if (*pcVar16 == '\0') goto LAB_14069e86;
  pcVar4 = pcVar9 + *(ushort *)(pcVar9 + 6) + 0x30;
  do {
    FUN_14065dd4(&local_44,&local_45,pcVar4);
    FUN_140736fc(pcVar9,*pcVar16);
LAB_14069e86:
    do {
      if ((uVar14 < *(ushort *)(param_2 + 0x26)) || (uVar15 < uVar14)) goto LAB_14069e1c;
      if (uVar15 == 0xffff) {
        sVar6 = -1;
      }
      else {
        sVar6 = uVar15 + 1;
      }
      *(short *)(param_2 + 0x26) = sVar6;
      bVar3 = *(byte *)(param_2 + 0x2c) & 8;
      if ((*(byte *)(param_2 + 0x2c) & 8) != 0) {
        iVar12 = *(int *)(param_2 + 0x40);
        uVar17 = (uVar15 + 1) - uVar14 & 0xff;
        if (iVar12 == 0) {
          puVar10 = (undefined1 *)0x0;
          puVar13 = (undefined2 *)0x0;
        }
        else {
          puVar10 = (undefined1 *)(iVar12 + *(ushort *)(iVar12 + 6) + 0x30);
          if ((int)((uint)*(byte *)(iVar12 + 0x2d) << 0x1c) < 0) {
            puVar13 = (undefined2 *)0x0;
          }
          else {
            puVar13 = (undefined2 *)(iVar12 + ((*(byte *)(iVar12 + 0x2d) & 0xf) + 3) * 4);
          }
        }
        uVar7 = (ushort)*(byte *)((int)puVar13 + 0xd);
        bVar18 = uVar7 < uVar17;
        if (!bVar18) {
          uVar7 = uVar17;
        }
        *(bool *)(puVar13 + 7) = bVar18;
        if ((*(byte *)(param_2 + 0x2c) & 2) == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = 2;
        }
        *puVar10 = uVar5;
        puVar10[1] = local_45;
        *(ushort *)(puVar10 + 0x12) = uVar14;
        *(undefined4 *)(puVar10 + 2) = local_44;
        *(undefined4 *)(puVar10 + 6) = uStack_40;
        *(undefined4 *)(puVar10 + 10) = uStack_3c;
        *(undefined4 *)(puVar10 + 0xe) = uStack_38;
        *(ushort *)(puVar10 + 0x14) = uVar15;
        if (1 < uVar7) {
          puVar8 = (undefined4 *)(puVar10 + 0x18);
          do {
            *(undefined1 *)((int)puVar8 + -2) = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 0x16);
          } while ((undefined4 *)(puVar10 + (short)(uVar7 - 2 & 0xff) * 0x16 + 0x2e) != puVar8);
        }
        puVar13[2] = *(undefined2 *)(param_2 + 0x26);
        uVar1 = *(undefined2 *)(param_2 + 0x28);
        puVar13[4] = uVar14;
        puVar13[5] = uVar15;
        puVar13[3] = uVar1;
        *(char *)(puVar13 + 6) = (char)uVar7;
        puVar13[1] = 0;
        *puVar13 = 0;
        *(undefined1 *)(param_2 + 0x11) = 0xd0;
        *(short *)(param_2 + 0x26) = puVar13[4] + 1;
        *(undefined2 *)(param_2 + 0x28) = puVar13[5];
        if (pcVar9 == (char *)0x0) {
          uVar14 = 0;
          bVar3 = 0;
        }
        else {
          bVar3 = 0;
          uVar14 = *(ushort *)(pcVar9 + 4);
        }
        goto LAB_14069ffe;
      }
      (**(code **)(*param_3 + 0x14))
                (param_1,*(undefined1 *)(param_2 + 0x13),*(undefined2 *)(param_2 + 0x16),uVar14,
                 uVar15,local_45,&local_44);
      *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) | 4;
      if (pcVar9 != (char *)0x0) goto LAB_14069e20;
LAB_14069edc:
      uVar14 = _MasterStackPointer;
      if (uVar11 != 0) goto LAB_14069ede;
      FUN_140736fc(0,2);
      uVar15 = _MasterStackPointer;
      FUN_140736fc(0,2);
    } while (*pcVar16 == '\0');
    pcVar4 = (char *)0x0;
  } while( true );
}

