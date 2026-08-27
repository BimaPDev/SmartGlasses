/* FUN_2c66d864 @ 0x2c66d864 */

void FUN_2c66d864(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  char *pcVar9;
  bool bVar10;
  ushort *puVar11;
  int *piVar12;
  ushort *puVar13;
  int *piVar14;
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  int local_30;
  char *local_2c [2];
  
  uVar3 = *DAT_2c66d86c;
  iVar4 = FUN_2c6705d0();
  pcVar5 = (char *)FUN_2c67059c(uVar3,DAT_2c66db48);
  uVar1 = DAT_2c66db54;
  piVar12 = DAT_2c66db4c;
  if (pcVar5 == (char *)0x0) {
    *DAT_2c66db50 = 0;
    *DAT_2c66db58 = 0;
    puVar2 = DAT_2c66db5c;
    iVar4 = *piVar12;
    *DAT_2c66db5c = uVar1;
    puVar2[1] = uVar1;
    FUN_2c669588(iVar4);
    *piVar12 = 0;
  }
  else if ((*DAT_2c66db4c == 0) || (iVar6 = FUN_2c66b624(), iVar6 != 0)) {
    FUN_2c669588(*piVar12);
    iVar6 = FUN_2c66c4ec(pcVar5);
    iVar6 = FUN_2c669c14(uVar3,iVar6 + 1);
    *piVar12 = iVar6;
    if (iVar6 != 0) {
      FUN_2c6435c4(iVar6,pcVar5);
    }
    if (*pcVar5 == ':') {
      pcVar5 = pcVar5 + 1;
    }
    iVar6 = FUN_2c66b4f8(pcVar5,DAT_2c66db64,DAT_2c66db60,&local_30);
    if (0 < iVar6) {
      pcVar9 = pcVar5 + local_30;
      if (pcVar5[local_30] == '-') {
        pcVar9 = pcVar9 + 1;
        iVar6 = -1;
      }
      else {
        iVar6 = 1;
        if (pcVar5[local_30] == '+') {
          pcVar9 = pcVar9 + 1;
        }
      }
      local_3a = 0;
      local_38 = 0;
      puVar11 = &local_3a;
      piVar12 = &local_30;
      puVar13 = &local_38;
      piVar14 = &local_30;
      iVar7 = FUN_2c66b4f8(pcVar9,DAT_2c66db68,&local_3c,&local_30,&local_3a,&local_30,&local_38,
                           &local_30);
      uVar3 = DAT_2c66db74;
      uVar1 = DAT_2c66db64;
      puVar2 = DAT_2c66db5c;
      if (0 < iVar7) {
        *(uint *)(iVar4 + 0x28) =
             iVar6 * ((uint)local_3c * 0xe10 + (uint)local_3a * 0x3c + (uint)local_38);
        *puVar2 = DAT_2c66db60;
        pcVar9 = pcVar9 + local_30;
        iVar6 = FUN_2c66b4f8(pcVar9,uVar1,uVar3,&local_30,puVar11,piVar12,puVar13,piVar14);
        if (iVar6 < 1) {
          iVar4 = *(int *)(iVar4 + 0x28);
          puVar2[1] = *puVar2;
          *DAT_2c66db50 = iVar4;
          *DAT_2c66db58 = 0;
        }
        else {
          puVar2[1] = uVar3;
          pcVar5 = pcVar9 + local_30;
          if (pcVar9[local_30] == '-') {
            pcVar5 = pcVar5 + 1;
            iVar6 = -1;
          }
          else {
            iVar6 = 1;
            if (pcVar9[local_30] == '+') {
              pcVar5 = pcVar5 + 1;
            }
          }
          local_3c = 0;
          local_3a = 0;
          local_38 = 0;
          local_30 = 0;
          iVar7 = FUN_2c66b4f8(pcVar5,DAT_2c66db68,&local_3c,&local_30,&local_3a,&local_30,&local_38
                               ,&local_30);
          if (iVar7 < 1) {
            iVar6 = *(int *)(iVar4 + 0x28) + -0xe10;
          }
          else {
            iVar6 = iVar6 * ((uint)local_3c * 0xe10 + (uint)local_3a * 0x3c + (uint)local_38);
          }
          *(int *)(iVar4 + 0x50) = iVar6;
          bVar10 = false;
          pcVar5 = pcVar5 + local_30;
          iVar6 = iVar4;
          while( true ) {
            if (*pcVar5 == ',') {
              pcVar5 = pcVar5 + 1;
            }
            if (*pcVar5 == 'M') {
              iVar7 = FUN_2c66b4f8(pcVar5,DAT_2c66db6c,&local_36,&local_30,&local_34,&local_30,
                                   &local_32,&local_30);
              if (iVar7 != 3) {
                return;
              }
              if (0xb < local_36 - 1) {
                return;
              }
              if (4 < local_34 - 1) {
                return;
              }
              if (6 < local_32) {
                return;
              }
              *(undefined1 *)(iVar6 + 8) = 0x4d;
              *(uint *)(iVar6 + 0x14) = (uint)local_32;
              *(uint *)(iVar6 + 0xc) = (uint)local_36;
              *(uint *)(iVar6 + 0x10) = (uint)local_34;
              pcVar9 = pcVar5 + local_30;
            }
            else {
              if (*pcVar5 == 'J') {
                pcVar5 = pcVar5 + 1;
                uVar8 = 0x4a;
              }
              else {
                uVar8 = 0x44;
              }
              local_32 = FUN_2c66d654(pcVar5,local_2c,10);
              pcVar9 = local_2c[0];
              if (local_2c[0] == pcVar5) {
                if (bVar10) {
                  *(undefined1 *)(iVar4 + 0x30) = 0x4d;
                  *(undefined4 *)(iVar4 + 0x34) = 0xb;
                  *(undefined4 *)(iVar4 + 0x38) = 1;
                  *(undefined4 *)(iVar4 + 0x3c) = 0;
                }
                else {
                  *(undefined1 *)(iVar4 + 8) = 0x4d;
                  *(undefined4 *)(iVar4 + 0x14) = 0;
                  *(undefined4 *)(iVar4 + 0xc) = 3;
                  *(undefined4 *)(iVar4 + 0x10) = 2;
                }
              }
              else {
                *(undefined1 *)(iVar6 + 8) = uVar8;
                *(uint *)(iVar6 + 0x14) = (uint)local_32;
              }
            }
            local_3c = 2;
            local_3a = 0;
            local_38 = 0;
            local_30 = 0;
            if (*pcVar9 == '/') {
              FUN_2c66b4f8(pcVar9,DAT_2c66db70,&local_3c,&local_30,&local_3a,&local_30,&local_38,
                           &local_30);
            }
            *(uint *)(iVar6 + 0x18) =
                 (uint)local_3c * 0xe10 + (uint)local_3a * 0x3c + (uint)local_38;
            pcVar5 = pcVar9 + local_30;
            if (bVar10) break;
            bVar10 = true;
            iVar6 = iVar6 + 0x28;
          }
          FUN_2c66d6f8(*(undefined4 *)(iVar4 + 4));
          iVar6 = *(int *)(iVar4 + 0x28);
          *DAT_2c66db50 = iVar6;
          *DAT_2c66db58 = (uint)(*(int *)(iVar4 + 0x50) != iVar6);
        }
      }
    }
  }
  return;
}

