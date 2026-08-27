/* FUN_2c5f54d4 @ 0x2c5f54d4 */

void FUN_2c5f54d4(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  local_24 = *DAT_2c5f574c;
  if (-1 < (int)((uint)*(ushort *)(param_2 + 0x36) << 0x1f)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5f5754,0x150,DAT_2c5f5758,DAT_2c5f5764,DAT_2c5f5760);
  }
  *(ushort *)(param_2 + 0x36) = *(ushort *)(param_2 + 0x36) & 0xfffe;
  if (param_1[0xf] != 0) {
    cVar11 = *(char *)(param_2 + 0x34);
    if (cVar11 == '\x01') {
      *(undefined4 *)(param_2 + 0x2c) = param_1[4];
      iVar8 = param_1[0xf];
      *(int *)(param_2 + 0x30) = iVar8;
      if (iVar8 == 0) goto switchD_2c5f5516_caseD_4;
LAB_2c5f5732:
      cVar5 = *(char *)(param_1[0xd] + iVar8 + -1);
      iVar10 = iVar8;
      if (cVar5 == '\n') {
        iVar10 = iVar8 + -1;
        *(int *)(param_2 + 0x30) = iVar10;
        if (iVar10 == 0) goto LAB_2c5f550c;
        cVar5 = *(char *)(param_1[0xd] + iVar8 + -2);
      }
      if (cVar5 == '\r') {
        *(int *)(param_2 + 0x30) = iVar10 + -1;
      }
      goto LAB_2c5f550c;
    }
    if (cVar11 == '\x05') {
      cVar5 = *(char *)(param_2 + 0x3f);
      if (cVar5 == '\0') goto LAB_2c5f5646;
      *(undefined4 *)(param_2 + 0x2c) = param_1[4];
      iVar8 = param_1[0xf];
      *(int *)(param_2 + 0x30) = iVar8;
      if (iVar8 != 0) goto LAB_2c5f5732;
      goto LAB_2c5f5670;
    }
    if ((cVar11 != '\t') || (*(char *)(param_2 + 0x3d) == '\0')) {
LAB_2c5f5646:
      *(int *)(param_2 + 0x2c) = param_1[4] + -1;
      *(undefined4 *)(param_2 + 0x30) = param_1[0x10];
      goto LAB_2c5f550c;
    }
    *(undefined4 *)(param_2 + 0x2c) = param_1[4];
    iVar8 = param_1[0xf];
    *(int *)(param_2 + 0x30) = iVar8;
    if (iVar8 != 0) goto LAB_2c5f5732;
    goto switchD_2c5f5516_caseD_6;
  }
  cVar11 = *(char *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x2c) = param_1[4];
  *(undefined4 *)(param_2 + 0x30) = param_1[0x10];
LAB_2c5f550c:
  switch(cVar11) {
  case '\x03':
    iVar8 = *(int *)(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x47) = 1;
    if (iVar8 != 0) {
      while ((-1 < (int)((uint)*(ushort *)(iVar8 + 0x36) << 0x1e) || (*(int *)(iVar8 + 4) == 0))) {
        for (iVar10 = *(int *)(iVar8 + 0x10); iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
          if ((*(int *)(iVar8 + 4) == 0) && (*(int *)(iVar10 + 4) == 0))
          goto switchD_2c5f5516_caseD_4;
          uVar1 = *(ushort *)(iVar10 + 0x36);
          iVar4 = iVar10;
          while (-1 < (int)((uint)uVar1 << 0x1d)) {
            if ((1 < (*(short *)(iVar4 + 0x34) - 3U & 0xff)) ||
               (iVar12 = *(int *)(iVar4 + 0x14), iVar12 == 0)) {
              *(ushort *)(iVar4 + 0x36) = uVar1 | 4;
              break;
            }
            *(ushort *)(iVar4 + 0x36) = uVar1 | 4;
            iVar4 = iVar12;
            uVar1 = *(ushort *)(iVar12 + 0x36);
          }
          if ((int)((uint)uVar1 << 0x1e) < 0) goto LAB_2c5f562c;
        }
        if ((*(char *)(param_2 + 0x47) == '\0') || (iVar8 = *(int *)(iVar8 + 4), iVar8 == 0))
        goto switchD_2c5f5516_caseD_4;
      }
LAB_2c5f562c:
      *(undefined1 *)(param_2 + 0x47) = 0;
    }
    break;
  case '\x05':
    cVar5 = *(char *)(param_2 + 0x3f);
LAB_2c5f5670:
    puVar14 = param_1 + 0x15;
    if (cVar5 != '\0') {
      if ((int)param_1[0x18] < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5f582c,0x17f,DAT_2c5f5834,DAT_2c5f5830,DAT_2c5f5828);
      }
      iVar8 = 0;
      pcVar7 = (char *)(param_1[0x16] + -1);
      while( true ) {
        pcVar7 = pcVar7 + 1;
        if ((*pcVar7 == '\n') || (*pcVar7 == '\r')) break;
        iVar8 = iVar8 + 1;
        if (iVar8 == param_1[0x18]) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5f5754,0x17f,DAT_2c5f5758,DAT_2c5f5764,DAT_2c5f5768);
        }
      }
      if (iVar8 == 0) {
        *(undefined4 *)(param_2 + 0x38) = 0;
      }
      else {
        local_34 = *param_1;
        local_2c = 0;
        uStack_28 = 0;
        local_30 = DAT_2c5f576c;
        FUN_2c5f50c4(&local_34,param_1[0x16],iVar8);
        FUN_2c5f6c14(&local_34);
        FUN_2c5f6cec(&local_34);
        pcVar7 = (char *)FUN_2c5f6ba8(&local_34);
        *(char **)(param_2 + 0x38) = pcVar7;
        if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5f5754,0x18e,DAT_2c5f5758,DAT_2c5f5770,pcVar7);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f5754,0x18c,DAT_2c5f5758,DAT_2c5f5750);
    }
    iVar10 = param_1[0x18];
    iVar8 = iVar10 + -1;
    if (-1 < iVar8) {
      iVar4 = param_1[0x16];
      pbVar9 = (byte *)(iVar4 + iVar10);
      do {
        pbVar9 = pbVar9 + -1;
        uVar13 = *pbVar9 - 9 & 0xff;
        if ((0x17 < uVar13) || (-1 < (int)((DAT_2c5f5838 >> uVar13) << 0x1f))) {
          if (iVar10 <= iVar8) goto LAB_2c5f57d8;
          pbVar9 = (byte *)(iVar8 + iVar4);
          goto LAB_2c5f57be;
        }
        bVar15 = iVar8 != 0;
        iVar8 = iVar8 + -1;
      } while (bVar15);
    }
    FUN_2c5f6a78(puVar14);
    goto LAB_2c5f57d8;
  case '\b':
    iVar8 = FUN_2c5f52a4(param_1);
    if (iVar8 == 0) {
      FUN_2c5f9d24(param_2);
      break;
    }
  case '\x06':
  case '\t':
switchD_2c5f5516_caseD_6:
    *(undefined4 *)(param_2 + 0x20) = param_1[0x18];
    uVar2 = FUN_2c5f6ba8(param_1 + 0x15);
    *(undefined4 *)(param_2 + 0x1c) = uVar2;
  }
switchD_2c5f5516_caseD_4:
  uVar2 = DAT_2c5f575c;
  FUN_2c5f545c(*param_1,param_2,param_1[1],param_1[0x19]);
  uVar3 = FUN_2c5f9d70(param_2);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5f5754,0x1c6,DAT_2c5f5758,uVar2,param_2,uVar3);
  while( true ) {
    pbVar9 = pbVar9 + 1;
    if ((*pbVar9 == 10) || (*pbVar9 == 0xd)) break;
LAB_2c5f57be:
    pbVar6 = pbVar9 + (1 - iVar4);
    if ((byte *)(iVar4 + iVar10) + -1 == pbVar9) goto LAB_2c5f57d8;
  }
  FUN_2c5f6bcc(puVar14,pbVar6);
LAB_2c5f57d8:
  FUN_2c5f6b1c(puVar14,10);
  goto switchD_2c5f5516_caseD_6;
}

