/* FUN_140a1804 @ 0x140a1804 */

char FUN_140a1804(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = DAT_140a192c;
  puVar1 = DAT_140a1924;
  uVar11 = *DAT_140a1924;
  uVar9 = uVar11;
  FUN_1402a6e8(4,900,DAT_140a1934,DAT_140a1930,DAT_140a1928,DAT_140a192c,uVar11);
  pcVar8 = DAT_140a1944;
  uVar7 = DAT_140a1940;
  pcVar6 = DAT_140a193c;
  uVar5 = DAT_140a1938;
  uVar4 = DAT_140a1934;
  uVar3 = DAT_140a1930;
  if (((uVar11 & 0xffff) != 0xba80) || (0x2ffff < uVar11)) {
    *DAT_140a193c = '\0';
    FUN_1402a6e8(4,0x389,uVar4,uVar3,uVar5,uVar2,uVar9);
    return *pcVar6;
  }
  *DAT_140a1944 = (char)(uVar11 >> 0x10);
  FUN_1402a6e8(4,0x390,DAT_140a1934,uVar3,uVar7,uVar11 >> 0x10,uVar9);
  if (*pcVar8 == '\x01') {
    uVar11 = puVar1[1];
    uVar9 = FUN_140a2edc(0,puVar1 + 2,0x120);
  }
  else {
    if (0x1000 < puVar1[0x4b] + 0x134) {
      FUN_1402a6e8(4,0x39c,DAT_140a1934,DAT_140a1930,DAT_140a1950,puVar1[0x4b],uVar9);
      *DAT_140a193c = '\0';
      return '\0';
    }
    uVar11 = puVar1[0x4c];
    uVar9 = FUN_140a2edc(0,puVar1 + 0x4d);
  }
  uVar10 = puVar1[0x4b];
  uVar12 = uVar11;
  uVar13 = uVar9;
  FUN_1402a6e8(4,0x3a9,DAT_140a1934,DAT_140a1930,DAT_140a1948,uVar2,uVar10,uVar11,uVar9);
  pcVar6 = DAT_140a193c;
  if (uVar9 == uVar11) {
    *DAT_140a193c = '\x01';
  }
  else if (*DAT_140a193c == '\0') {
    FUN_1402a6e8(4,0x3b6,DAT_140a1934,DAT_140a1930,DAT_140a194c,uVar2,uVar10,uVar12,uVar13);
    goto LAB_140a18d0;
  }
  FUN_1402a6e8(4,0x3b2,DAT_140a1934,DAT_140a1930,DAT_140a1954,uVar2,uVar10,uVar12,uVar13);
LAB_140a18d0:
  return *pcVar6;
}

