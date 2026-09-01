/* FUN_100d6950 @ 0x100d6950 */

void FUN_100d6950(undefined4 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  piVar3 = DAT_100d6b5c;
  uVar9 = 0;
LAB_100d6964:
  uVar8 = uVar9 & 0xff;
  if (-1 < (int)((uint)*(byte *)(*piVar3 + uVar9 * 0x12 + 0x1e) << 0x1f)) goto LAB_100d6976;
  iVar10 = uVar9 * 0x12 + 0x18;
  iVar4 = FUN_1011ea30(*piVar3 + iVar10,param_1,6);
  if (iVar4 != 0) goto LAB_100d6976;
  switch(param_2) {
  case 0:
    iVar4 = *piVar3;
    iVar6 = uVar9 * 0x12 + iVar4;
    if (*(byte *)(iVar6 + 0x24) < 3) {
      *(undefined1 *)(iVar6 + 0x24) = 3;
      FUN_100d6268(iVar4 + iVar10,(*(byte *)(iVar6 + 0x1e) & 0x1f) >> 4);
    }
    if ((*(byte *)(*piVar3 + 0x6c) & 7) != uVar8) {
      return;
    }
    uVar5 = 200;
    goto LAB_100d6a12;
  case 1:
  case 2:
    iVar4 = *piVar3;
    iVar10 = uVar9 * 0x12 + iVar4;
    if (*(char *)(iVar10 + 0x24) != '\x02') {
      return;
    }
    uVar7 = *(byte *)(iVar4 + 0x6c) & 7;
    if (uVar7 != uVar8) {
      return;
    }
    cVar2 = *(char *)(iVar10 + 0x21);
    *(undefined1 *)(iVar10 + 0x24) = 0;
    *(char *)(iVar10 + 0x21) = cVar2 + -1;
    if (((cVar2 == '\x01') &&
        (*(byte *)(iVar10 + 0x1e) = *(byte *)(iVar10 + 0x1e) & 0xfe,
        *(char *)(iVar10 + 0x21) == '\0')) || (*(char *)(uVar9 * 0x12 + iVar4 + 0x20) == '\0')) {
      uVar9 = uVar7 + 1 & 7;
      *(byte *)(iVar4 + 0x6c) =
           *(byte *)(iVar4 + 0x6c) & 0xf8 | (char)uVar9 + (char)(uVar9 / 3) * -3 & 7U;
    }
    if (param_2 != 2) {
      return;
    }
    break;
  case 3:
    iVar4 = *piVar3;
    iVar10 = uVar9 * 0x12 + iVar4;
    *(byte *)(iVar10 + 0x1e) = *(byte *)(iVar10 + 0x1e) & 0xfe;
    *(undefined1 *)(iVar10 + 0x24) = 0;
    if ((*(byte *)(iVar4 + 0x6c) & 7) != uVar8) {
      return;
    }
    uVar9 = uVar8 + 1 & 7;
    bVar1 = *(byte *)(iVar10 + 0x1e);
    *(byte *)(iVar4 + 0x6c) =
         *(byte *)(iVar4 + 0x6c) & 0xf8 | (char)uVar9 + (char)(uVar9 / 3) * -3 & 7U;
    if ((bVar1 & 0xf) >> 1 == 2) {
      uVar5 = 2000;
    }
    else {
      uVar5 = 100;
    }
    goto LAB_100d6a12;
  case 4:
    iVar4 = *piVar3;
    iVar6 = uVar9 * 0x12 + iVar4;
    if (*(byte *)(iVar6 + 0x24) < 4) {
      *(undefined1 *)(iVar6 + 0x24) = 4;
    }
    if ((*(byte *)(iVar4 + 0x6c) & 7) != uVar8) {
      return;
    }
    if (((int)((uint)*(byte *)(uVar9 * 0x12 + iVar4 + 0x1e) << 0x1b) < 0) &&
       (iVar4 = FUN_1013663e(iVar4 + iVar10), iVar4 == 1)) {
      uVar5 = 3000;
      goto LAB_100d6a12;
    }
    break;
  case 5:
  case 7:
  case 9:
  case 0xf:
    iVar4 = uVar9 * 0x12 + *piVar3;
    if (*(char *)(iVar4 + 0x24) != '\x04') {
      return;
    }
    if ((*(byte *)(*piVar3 + 0x6c) & 7) != uVar8) {
      return;
    }
    *(char *)(iVar4 + 0x22) = *(char *)(iVar4 + 0x22) + '\x01';
    break;
  default:
    goto switchD_100d6996_caseD_6;
  }
  uVar5 = 100;
LAB_100d6a12:
  FUN_100d68e8(uVar5);
  return;
LAB_100d6976:
  uVar9 = uVar9 + 1;
  if (uVar9 == 3) {
switchD_100d6996_caseD_6:
    return;
  }
  goto LAB_100d6964;
}

