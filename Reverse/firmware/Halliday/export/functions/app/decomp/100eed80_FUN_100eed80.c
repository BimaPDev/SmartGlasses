/* FUN_100eed80 @ 0x100eed80 */

/* WARNING: Removing unreachable block (ram,0x100eed30) */
/* WARNING: Removing unreachable block (ram,0x100eed34) */
/* WARNING: Removing unreachable block (ram,0x100eed3c) */
/* WARNING: Removing unreachable block (ram,0x100eed46) */

uint FUN_100eed80(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  puVar3 = DAT_100eee0c;
  cVar2 = *(char *)((int)DAT_100eee0c + 9);
  bVar1 = *(byte *)(DAT_100eee0c + 2);
  iVar10 = (int)(char)(cVar2 + -1);
  iVar9 = (int)(char)(cVar2 + '\x01');
  if ((bVar1 & 1) != 0) {
    uVar4 = FUN_100eec68();
    iVar10 = FUN_100eec68(iVar10,uVar4);
    uVar11 = FUN_100eec68(iVar9);
    param_1 = (int)((ulonglong)uVar11 >> 0x20);
    iVar9 = (int)uVar11;
  }
  pcVar7 = (char *)*puVar3;
  if (*pcVar7 == '\0') {
    if (((bVar1 & 1) == 0) || (pcVar7[2] != '\x02')) {
      if (param_1 == iVar10) {
        uVar5 = 0x80;
      }
      else if (param_1 == iVar9) {
        uVar5 = 0x40;
      }
      else {
        uVar5 = 0;
      }
    }
    else if (cVar2 == param_1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0xc0;
    }
  }
  else if (((bVar1 & 1) == 0) || (pcVar7[2] != '\x02')) {
    if (param_1 == iVar10) {
      uVar5 = 0x10;
    }
    else if (param_1 == iVar9) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = 0;
    }
  }
  else if (cVar2 == param_1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x30;
  }
  iVar10 = FUN_100f4084();
  uVar8 = uVar5;
  if ((iVar10 != 0) && (uVar5 != 0)) {
    iVar9 = DAT_100eed7c;
    if ((iVar10 != 0x5a) && (iVar9 = DAT_100eed78, iVar10 != 0xb4)) {
      iVar9 = DAT_100eed78 + 4;
    }
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar6 = 4;
      do {
        if (((int)uVar5 >> (uVar6 & 0xff)) << 0x1f < 0) {
          uVar8 = uVar8 | (uint)*(byte *)(iVar9 + -4 + uVar6) << 4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 8);
    }
  }
  return uVar8;
}

