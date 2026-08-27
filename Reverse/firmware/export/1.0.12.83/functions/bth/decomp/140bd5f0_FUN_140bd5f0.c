/* FUN_140bd5f0 @ 0x140bd5f0 */

byte * FUN_140bd5f0(uint *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  param_2 = param_2 & 0xff;
  if ((int)param_3 < 0x10) {
joined_r0x140bd650:
    do {
      if (param_3 == 0) {
        return (byte *)0x0;
      }
      puVar6 = (uint *)((int)param_1 + 1);
      uVar8 = *param_1;
      param_3 = param_3 - 1;
      param_1 = puVar6;
    } while ((byte)uVar8 != param_2);
  }
  else {
    while( true ) {
      if (((uint)param_1 & 7) == 0) {
        uVar8 = param_2 | param_2 << 8;
        uVar8 = uVar8 | uVar8 << 0x10;
        uVar9 = param_3 & 0xfffffff8;
        do {
          puVar6 = param_1 + 2;
          uVar9 = uVar9 - 8;
          uVar10 = *param_1 ^ uVar8;
          uVar11 = param_1[1] ^ uVar8;
          cVar1 = -((char)uVar10 == '\0');
          cVar2 = -((char)(uVar10 >> 8) == '\0');
          cVar3 = -((char)(uVar10 >> 0x10) == '\0');
          cVar4 = -((char)(uVar10 >> 0x18) == '\0');
          uVar10 = CONCAT13(cVar4,CONCAT12(cVar3,CONCAT11(cVar2,cVar1)));
          bVar12 = (char)uVar11 != '\0';
          bVar13 = (char)(uVar11 >> 8) != '\0';
          bVar14 = (char)(uVar11 >> 0x10) != '\0';
          bVar15 = (char)(uVar11 >> 0x18) != '\0';
          uVar11 = CONCAT13(bVar15 * cVar4 - !bVar15,
                            CONCAT12(bVar14 * cVar3 - !bVar14,
                                     CONCAT11(bVar13 * cVar2 - !bVar13,bVar12 * cVar1 - !bVar12)));
          if (uVar11 != 0) {
            if (uVar10 == 0) {
              pbVar7 = (byte *)((int)param_1 + 5);
              uVar10 = uVar11;
            }
            else {
              pbVar7 = (byte *)((int)param_1 + 1);
            }
            if ((uVar10 & 1) == 0) {
              bVar12 = (uVar10 & 0x100) == 0;
              pbVar5 = pbVar7 + 1;
              if (bVar12) {
                pbVar5 = pbVar7 + 2;
              }
              pbVar7 = pbVar5;
              if (bVar12 && (uVar10 & 0x18000) == 0) {
                pbVar7 = pbVar7 + 1;
              }
            }
            return pbVar7 + -1;
          }
          param_1 = puVar6;
        } while (uVar9 != 0);
        param_3 = param_3 & 7;
        goto joined_r0x140bd650;
      }
      puVar6 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
      if ((byte)*param_1 == param_2) break;
      param_1 = puVar6;
      if (param_3 == 0) {
        return (byte *)0x0;
      }
    }
  }
  return (byte *)((int)puVar6 + -1);
}

