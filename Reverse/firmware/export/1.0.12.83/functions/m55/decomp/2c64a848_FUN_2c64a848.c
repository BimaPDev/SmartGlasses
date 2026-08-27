/* FUN_2c64a848 @ 0x2c64a848 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c64a848(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint3 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c64aa3c;
  if (param_1 == 7) {
    iVar9 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc),param_2,param_3,0);
    bVar7 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x10));
    puVar5 = _DAT_2c64aa78;
    puVar4 = _DAT_2c64aa74;
    bVar8 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x14));
    uVar11 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x18));
    uVar12 = _LAB_2c64aa48;
    *puVar5 = uVar11;
    FUN_2c66b4f8(*(undefined4 *)(param_2 + 4),uVar12,puVar4);
    FUN_2c66b4f8(*(undefined4 *)(param_2 + 8),_LAB_2c64aa48,_DAT_2c64aa4c);
    puVar2 = _DAT_2c64aa4c;
    uVar11 = *puVar4;
    if ((uVar11 & 3) != 0) {
      uVar11 = (uVar11 & 0xfffffffc) + 4;
    }
    *puVar4 = uVar11;
    uVar14 = *puVar2;
    if ((uVar14 & 3) != 0) {
      uVar14 = (uVar14 & 0xfffffffc) + 4;
    }
    *_DAT_2c64aa4c = uVar14;
    piVar3 = _DAT_2c64aa50;
    if (iVar9 == 0) {
      iVar9 = *_LAB_2c64aa3c;
      uVar12 = _LAB_2c64aa68;
    }
    else if (bVar7 < 8) {
      if (bVar8 < 3) {
        if (bVar8 == 0) {
          *_DAT_2c64aa50 = iVar9;
        }
        else {
          if (bVar8 == 1) {
            iVar13 = iVar9 << 1;
          }
          else {
            iVar13 = iVar9 << 2;
          }
          *_DAT_2c64aa50 = iVar13;
        }
        uVar12 = FUN_2c648600(_LAB_2c64aa54,uVar11,uVar14,iVar9,bVar7,bVar8);
        uVar6 = _DAT_2c64aa7c;
        if (*puVar5 != 0) {
          uVar11 = 0;
          do {
            uVar15 = *puVar4;
            iVar9 = *piVar3;
            uVar14 = *_DAT_2c64aa4c;
            uStack_30 = 0;
            uStack_48 = 0;
            uStack_44 = 0;
            _uStack_40 = 0;
            uStack_3c = 0;
            uStack_38 = 0;
            uStack_34 = 0;
            FUN_2c674268(uVar14,0);
            if (iVar9 != 0) {
              iVar13 = 0;
              do {
                *(char *)(iVar13 + uVar15) = (char)iVar13;
                iVar13 = iVar13 + 1;
              } while (iVar13 != iVar9);
            }
            FUN_2c4bf258();
            uVar15 = (uint)_uStack_40 >> 0x18;
            uVar1 = (ushort)_uStack_40;
            uStack_40 = (uint3)(uVar1 & 0xff00);
            _uStack_40 = CONCAT13((char)uVar15,uStack_40);
            uStack_44 = CONCAT13(bVar7,CONCAT12(bVar7,CONCAT11(bVar8,(undefined1)uStack_44)));
            uStack_48._0_2_ = CONCAT11(1,(undefined1)uStack_48);
            uStack_34 = _LAB_2c64aa58;
            uStack_30 = 0;
            uStack_38 = uVar14;
            iVar9 = func_0x2c4beebc(2,0);
            uStack_48 = CONCAT31(uStack_48._1_3_,(char)iVar9);
            if (iVar9 == 0xff) {
              uVar12 = FUN_2c648600(_LAB_2c64aa64);
            }
            else {
              iVar9 = FUN_2c4be910(uVar6,&uStack_48,0,1);
              if (iVar9 != 0) {
                FUN_2c648600(_LAB_2c64aa60,iVar9);
              }
              iVar9 = FUN_2c4bed8c(uVar6,&uStack_48);
              uVar12 = 0;
              if (iVar9 != 0) {
                uVar12 = FUN_2c648600(_LAB_2c64aa5c,iVar9);
              }
            }
            uVar11 = uVar11 + 1 & 0xff;
          } while (uVar11 < *puVar5);
        }
        if (*_LAB_2c64aa3c == iStack_2c) {
          return uVar12;
        }
        goto LAB_2c64aa36;
      }
      iVar9 = *_LAB_2c64aa3c;
      uVar12 = _LAB_2c64aa70;
    }
    else {
      iVar9 = *_LAB_2c64aa3c;
      uVar12 = _LAB_2c64aa6c;
    }
    if (iVar9 != iStack_2c) goto LAB_2c64aa36;
  }
  else {
    FUN_2c648600(_LAB_2c64aa40);
    uVar12 = _LAB_2c64aa44;
    if (*_LAB_2c64aa3c != iStack_2c) {
LAB_2c64aa36:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
  iVar13 = *DAT_2c648674;
  iVar9 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar12);
  if (-1 < iVar9) {
    if (iVar9 < 0x7ff) {
      if (iVar9 == 0) goto LAB_2c648630;
    }
    else {
      iVar9 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar10 = (code *)FUN_2c648328();
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(_LAB_2c648678,iVar9);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar9);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar13) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

