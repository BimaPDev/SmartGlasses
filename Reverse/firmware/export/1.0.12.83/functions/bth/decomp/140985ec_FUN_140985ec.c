/* FUN_140985ec @ 0x140985ec */

void FUN_140985ec(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char cVar15;
  undefined4 local_3c;
  
  iVar5 = param_2 + 0x3c;
  if (*(char *)(param_2 + 0x26) == '\x0f') {
    *(undefined2 *)(param_2 + 0x82) = 0;
    *(undefined1 *)(param_2 + 0x7d) = 0;
  }
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)(param_2 + 0x10) = iVar1;
  uVar2 = *(uint *)(param_3 + 0x20);
  *(uint *)(param_2 + 0x14) = uVar2;
  cVar15 = *(char *)(param_3 + 0xd);
  if ((cVar15 == '\x18') || (cVar15 == ' ')) {
    cVar15 = *(char *)(param_3 + 0x15);
    uVar11 = 2;
    uVar6 = 4;
  }
  else {
    if (cVar15 != '\x10') {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14098788,DAT_1409877c,cVar15);
    }
    cVar15 = *(char *)(param_3 + 0x15);
    uVar11 = 1;
    uVar6 = 2;
  }
  if (cVar15 == '\0') {
    uVar8 = 4;
    uVar10 = 0;
    goto LAB_14098648;
  }
  uVar8 = (uint)*(byte *)(param_3 + 0xc);
  if (uVar8 < 2) {
    cVar15 = '\0';
    uVar8 = 4;
    uVar10 = 0;
    goto LAB_14098648;
  }
  uVar10 = (uVar2 >> 2) / uVar8;
  if (param_1 == 0) {
    cVar7 = *(char *)(param_2 + 0x82);
    if (cVar7 != '\0') goto LAB_14098708;
LAB_14098754:
    iVar9 = 1;
  }
  else {
    cVar7 = *(char *)(param_2 + 0x83);
    if (cVar7 == '\0') goto LAB_14098754;
LAB_14098708:
    if (cVar7 == '\x01') {
      iVar9 = 4;
    }
    else {
      iVar9 = 8;
    }
  }
  uVar8 = uVar8 * uVar6 * iVar9;
  if ((int)(uVar8 * 0x40000000) < 0) {
    uVar8 = uVar8 * 2;
  }
LAB_14098648:
  uVar14 = uVar2 >> 2;
  if (((uVar2 & 3) != 0) || (uVar14 != uVar8 * (uVar14 / uVar8))) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098784,DAT_1409877c,uVar2,4,uVar8);
  }
  *(undefined1 *)(param_2 + 0x81) = uVar11;
  *(undefined1 *)(param_2 + 0x80) = uVar11;
  *(short *)(param_2 + 0x7e) = (short)(uVar14 / uVar6);
  iVar9 = 0;
  iVar13 = 0;
  local_3c = 0;
  iVar12 = iVar5;
LAB_1409867e:
  bVar4 = iVar9 == 1;
  iVar3 = iVar12 + 0x10;
  if (param_1 != 0) goto LAB_140986ce;
  do {
    if (cVar15 == '\0') {
      *(int *)(param_2 + 0x88) = iVar1 + iVar13;
    }
    else {
      *(int *)(param_2 + 0x88) = iVar1 + local_3c;
    }
    while( true ) {
      iVar1 = FUN_14028228(iVar12,param_2 + 0x7c,iVar3,bVar4);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14098780,DAT_1409877c,param_1,iVar1);
      }
      iVar9 = iVar9 + 1;
      local_3c = local_3c + uVar10;
      iVar12 = iVar12 + 0x10;
      iVar13 = iVar13 + uVar14;
      if (iVar9 == 4) {
        FUN_140984b4(param_2,param_3);
        return;
      }
      iVar1 = *(int *)(param_2 + 0x10);
      if (iVar9 != 3) goto LAB_1409867e;
      bVar4 = true;
      iVar3 = iVar5;
      if (param_1 == 0) break;
LAB_140986ce:
      if (cVar15 == '\0') {
        *(int *)(param_2 + 0x8c) = iVar1 + iVar13;
      }
      else {
        *(int *)(param_2 + 0x8c) = iVar1 + local_3c;
      }
    }
  } while( true );
}

