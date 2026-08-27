/* FUN_2c62bbea @ 0x2c62bbea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c62bbea(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  
  if (*param_3 != '\0') {
    return 1;
  }
  uVar13 = 1;
  cVar12 = *_LAB_2c62bdb4;
  *param_3 = '\x01';
  if (cVar12 != '\0') {
    iVar5 = FUN_2c629df4();
    pcVar1 = _LAB_2c62bdd4;
    uVar10 = _LAB_2c62bdc0;
    piVar2 = _LAB_2c62bdbc;
    pcVar3 = _LAB_2c62bdb8;
    if (iVar5 == 0) {
      uVar13 = 0;
      if (*_LAB_2c62bdd0 + 1 < 0x65) {
        uVar13 = *_LAB_2c62bdd0 + 1;
      }
      *_LAB_2c62bdd0 = uVar13;
      pcVar1 = _LAB_2c62bdd4;
      uVar10 = _LAB_2c62bdc0;
      piVar2 = _LAB_2c62bdbc;
      pcVar3 = _LAB_2c62bdb8;
    }
LAB_2c62bc28:
    *pcVar3 = '\0';
    *pcVar1 = '\0';
    iVar6 = FUN_2c62ca10(uVar10);
LAB_2c62bc38:
    *piVar2 = iVar6;
    do {
      if (iVar6 == 0) {
LAB_2c62bc88:
        puVar15 = (uint *)FUN_2c62ca10(_LAB_2c62bdc0);
        uVar10 = _LAB_2c62bdc0;
        uVar13 = 0xffffffff;
        piVar2 = _LAB_2c62bdc4;
        goto joined_r0x2c62bc94;
      }
      iVar6 = FUN_2c62ca20(uVar10,iVar6);
      puVar15 = (uint *)*piVar2;
      if ((int)((uint)(byte)puVar15[5] << 0x1f) < 0) goto LAB_2c62bc38;
      uVar13 = FUN_2c629e10(puVar15[1]);
      if (*puVar15 <= uVar13) {
        uVar13 = puVar15[4];
        if ((int)uVar13 < 1) {
          uVar9 = FUN_2c629df4();
          pcVar11 = (code *)puVar15[2];
          puVar15[1] = uVar9;
          if ((pcVar11 != (code *)0x0) && (uVar13 != 0)) goto LAB_2c62bd34;
LAB_2c62bd5a:
          cVar12 = *pcVar3;
        }
        else {
          puVar15[4] = uVar13 - 1;
          uVar13 = FUN_2c629df4();
          pcVar11 = (code *)puVar15[2];
          puVar15[1] = uVar13;
          if (pcVar11 == (code *)0x0) goto LAB_2c62bd5a;
LAB_2c62bd34:
          (*pcVar11)(puVar15);
          cVar12 = *pcVar3;
        }
        if (cVar12 == '\0') {
          if (puVar15[4] == 0) {
            FUN_2c62c998(uVar10,puVar15);
            *pcVar3 = '\x01';
            FUN_2c62bea8(puVar15);
          }
          if ((*pcVar1 == '\0') && (*pcVar3 == '\0')) goto LAB_2c62bc38;
        }
        if (*piVar2 == 0) goto LAB_2c62bc88;
        goto LAB_2c62bc28;
      }
      if ((*pcVar3 != '\0') || (puVar15[4] != 0)) goto LAB_2c62bc38;
      FUN_2c62c998(uVar10,puVar15);
      *pcVar3 = '\x01';
      FUN_2c62bea8(puVar15);
      *piVar2 = iVar6;
    } while( true );
  }
LAB_2c62bc02:
  *param_3 = '\0';
  return uVar13;
joined_r0x2c62bc94:
  _LAB_2c62bdc4 = piVar2;
  if (puVar15 == (uint *)0x0) goto LAB_2c62bcd2;
  uVar9 = puVar15[5];
  uVar14 = uVar13;
  if (((byte)uVar9 & 1) == 0) {
    uVar7 = FUN_2c629e10(puVar15[1]);
    uVar8 = *puVar15 - uVar7;
    uVar14 = (byte)uVar9 & 1;
    if (uVar7 < *puVar15) {
      if (uVar8 <= uVar13) {
        uVar13 = uVar8;
      }
      puVar15 = (uint *)FUN_2c62ca20(uVar10,puVar15);
      piVar2 = _LAB_2c62bdc4;
      goto joined_r0x2c62bc94;
    }
  }
  puVar15 = (uint *)FUN_2c62ca20(uVar10,puVar15);
  uVar13 = uVar14;
  piVar2 = _LAB_2c62bdc4;
  goto joined_r0x2c62bc94;
LAB_2c62bcd2:
  iVar5 = FUN_2c629e10(iVar5);
  puVar4 = _LAB_2c62bdc8;
  *piVar2 = iVar5 + *piVar2;
  uVar9 = FUN_2c629e10(*puVar4);
  param_3 = _LAB_2c62bdb0;
  if (uVar9 != 0) {
    uVar9 = (uint)(*piVar2 * 100) / uVar9;
    if ((uVar9 & 0xff) < 0x65) {
      cVar12 = 'd' - (char)uVar9;
    }
    else {
      cVar12 = '\0';
    }
    *_LAB_2c62bdcc = cVar12;
    *piVar2 = 0;
    uVar10 = FUN_2c629df4();
    *puVar4 = uVar10;
    param_3 = _LAB_2c62bdb0;
  }
  goto LAB_2c62bc02;
}

