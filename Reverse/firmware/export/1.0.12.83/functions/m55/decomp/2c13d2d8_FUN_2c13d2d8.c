/* FUN_2c13d2d8 @ 0x2c13d2d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13d2d8(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  short sVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *_DAT_2c13d4c8;
  uVar7 = func_0x2c141318();
  uVar6 = _DAT_2c13d4f8;
  iVar5 = _DAT_2c13d4f4;
  uVar4 = _DAT_2c13d4dc;
  piVar3 = _DAT_2c13d4d8;
  piVar2 = _DAT_2c13d4d4;
  pcVar1 = _DAT_2c13d4d0;
  *_DAT_2c13d4cc = uVar7;
LAB_2c13d300:
  do {
    func_0x2c14142c(0x40);
    func_0x2c141468(0x40,0,0xffffffff);
    if (((*pcVar1 != '\x01') && (*piVar2 != 10)) && (*piVar3 != 10)) {
      sVar14 = 0x540;
      uStack_24 = 0;
      iStack_20 = 0;
      uStack_1c = 0;
      iStack_18 = 0;
      puVar16 = &uStack_24;
      do {
        iVar8 = FUN_2c13bc94(sVar14,puVar16);
        sVar14 = sVar14 + 4;
        puVar16 = puVar16 + 1;
        if (iVar8 != 0) {
          FUN_2c135988(4,0x5ff,_DAT_2c13d4e4,uVar4,_DAT_2c13d4f0);
          goto LAB_2c13d300;
        }
      } while (sVar14 != 0x550);
      if (*(int *)(iVar5 + 0x80) == 0) {
        uVar12 = *(undefined4 *)(iVar5 + 0xf0);
        iVar8 = iStack_20;
        iVar11 = iStack_18;
        uVar7 = uStack_24;
        uVar15 = uStack_1c;
        FUN_2c135988(4,0x60d,_DAT_2c13d4e4,uVar4,_DAT_2c13d4e0,uVar12,iStack_20,iStack_18,uStack_24,
                     uStack_1c);
        if ((iStack_20 < 3000) && (iStack_18 < 3000)) {
          uVar13 = *(int *)(iVar5 + 0xf0) + 1;
          *(uint *)(iVar5 + 0xf0) = uVar13;
          if (9 < uVar13) {
            FUN_2c135988(4,0x611,_DAT_2c13d4e4,uVar4,_DAT_2c13d4e8,uVar12,iVar8,iVar11,uVar7,uVar15)
            ;
            *(undefined4 *)(iVar5 + 0xf0) = 0;
            *(undefined1 *)(iVar5 + 0xf4) = 1;
            FUN_2c13d040();
          }
        }
        else {
          *(undefined4 *)(iVar5 + 0xf0) = 0;
        }
      }
      goto LAB_2c13d300;
    }
    uStack_28 = 0;
    *pcVar1 = '\0';
    iVar8 = FUN_2c13bc94(0,&uStack_28);
    if (iVar8 == 0) {
      iVar8 = *piVar2;
      uVar7 = 0;
      uVar15 = 0;
      if (iVar8 != 10) goto LAB_2c13d3e6;
LAB_2c13d436:
      func_0x2c13f650(0x14);
      iVar11 = func_0x2c13c7fc(iVar5);
      if (iVar11 == 0) {
        *piVar2 = 5;
        if (*piVar3 == 10) goto LAB_2c13d452;
        goto LAB_2c13d472;
      }
      iVar10 = *piVar3;
      if (iVar10 == 10) {
        func_0x2c13f650(0x14);
        iVar9 = FUN_2c13cd38(iVar5);
        if (iVar9 == 0) {
          iVar10 = 5;
          iVar8 = *piVar2;
          *piVar3 = 5;
          goto LAB_2c13d3f0;
        }
        goto LAB_2c13d462;
      }
      iVar9 = 0;
      iVar8 = *piVar2;
    }
    else {
      func_0x2c137bec(1);
      func_0x2c13bbd4();
      func_0x2c13f650(0x14);
      uVar7 = FUN_2c13bc94(0,&uStack_28);
      iVar8 = *piVar2;
      uVar15 = uVar7;
      if (iVar8 == 10) goto LAB_2c13d436;
LAB_2c13d3e6:
      iVar10 = *piVar3;
      uVar7 = uVar15;
      if (iVar10 == 10) {
LAB_2c13d452:
        func_0x2c13f650(0x14);
        iVar9 = FUN_2c13cd38(iVar5);
        if (iVar9 == 0) {
          *piVar3 = 5;
LAB_2c13d472:
          func_0x2c13f650(0x14);
          FUN_2c13ca40(iVar5,1);
          iVar9 = 0;
          iVar8 = *piVar2;
          iVar10 = *piVar3;
          iVar11 = iVar9;
        }
        else {
          iVar11 = 0;
LAB_2c13d462:
          iVar8 = *piVar2;
          iVar10 = *piVar3;
        }
      }
      else {
        iVar9 = 0;
        iVar11 = 0;
      }
    }
LAB_2c13d3f0:
    FUN_2c135988(4,0x642,_DAT_2c13d4e4,uVar4,_DAT_2c13d4ec,uVar6,uStack_28,uVar7,iVar11,iVar9,iVar8,
                 iVar10);
  } while( true );
}

