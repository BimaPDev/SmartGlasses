/* FUN_2c649e9c @ 0x2c649e9c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c649e9c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined2 uStack_46;
  uint uStack_44;
  uint uStack_40;
  uint auStack_3c [3];
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c64a194;
  if (param_1 < 7) {
LAB_2c64a052:
    FUN_2c648600(_LAB_2c64a1b4);
    FUN_2c648600(_LAB_2c64a1b8);
    uVar14 = FUN_2c648600(_LAB_2c64a1bc);
    goto LAB_2c64a064;
  }
  bVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8),param_2,param_3,0);
  if (bVar2 < 2) {
    bVar3 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0xc));
    if (bVar3 < 2) {
      FUN_2c66b4f8(*(undefined4 *)(param_2 + 0x10),_LAB_2c64a198,&uStack_44);
      FUN_2c66b4f8(*(undefined4 *)(param_2 + 0x14),_LAB_2c64a198,&uStack_40);
      if (0xff < uStack_40) {
        uStack_40 = (uStack_40 & 0xff) << 8 | uStack_40 >> 8 & 0xff;
      }
      uVar4 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x18));
      uVar6 = (uint)uVar4;
      FUN_2c648600(_LAB_2c64a19c,bVar3,uStack_44,uStack_40,uVar6);
      uVar14 = *(undefined4 *)(param_2 + 4);
      iVar7 = FUN_2c66c540(uVar14,_LAB_2c64a1a0,4);
      if (iVar7 == 0) {
        uVar4 = FUN_2c6684cc(*(undefined4 *)(param_2 + 0x1c));
        uVar12 = (uint)uVar4;
        auStack_3c[0] = CONCAT22(auStack_3c[0]._2_2_,(short)uStack_40);
        iVar8 = FUN_2c669578(uVar12);
        uVar14 = 0;
        if (iVar8 != 0) {
          auStack_3c[2] = _LAB_2c64a1a8;
          iStack_30 = iVar7;
          if (bVar3 == 1) {
            auStack_3c[1] = 0x401;
            iVar7 = FUN_2c4bc9b4(bVar2,auStack_3c + 1);
            if (iVar7 != 0) goto LAB_2c64a1d0;
            iVar7 = FUN_2c4bd450(bVar2,uStack_44 & 0xff,auStack_3c,uVar6,iVar8,uVar12);
          }
          else {
            auStack_3c[1] = 0x700;
            iVar7 = FUN_2c4bc9b4(bVar2,auStack_3c + 1);
            if (iVar7 != 0) {
LAB_2c64a1d0:
              FUN_2c669588(iVar8);
              uVar14 = FUN_2c648600(_LAB_2c64a210,iVar7);
              goto LAB_2c64a064;
            }
            iVar7 = FUN_2c4bcf20(bVar2,uStack_44 & 0xff,auStack_3c,uVar6,iVar8,uVar12,0,0);
          }
          uVar14 = _LAB_2c64a214;
          if (iVar7 == 0) {
            if (uVar12 != 0) {
              puVar15 = (undefined1 *)(iVar8 + -1);
              puVar10 = puVar15 + uVar12;
              do {
                puVar11 = puVar15 + (1 - iVar8);
                puVar15 = puVar15 + 1;
                FUN_2c648600(uVar14,puVar11,*puVar15);
              } while (puVar15 != puVar10);
            }
          }
          else {
            FUN_2c648600(_LAB_2c64a1c0,bVar2);
          }
          FUN_2c669588(iVar8);
          uVar14 = FUN_2c4bce68(bVar2);
        }
      }
      else {
        iVar7 = FUN_2c66c540(uVar14,_LAB_2c64a1a4,5);
        if (iVar7 != 0) goto LAB_2c64a052;
        uVar12 = param_1 - 7U & 0xffff;
        iVar7 = FUN_2c669578(uVar12);
        uVar1 = _LAB_2c64a1cc;
        uVar14 = _LAB_2c64a198;
        if (iVar7 != 0) {
          if (uVar12 != 0) {
            puVar13 = (undefined4 *)(param_2 + 0x18);
            puVar15 = (undefined1 *)(iVar7 + -1);
            do {
              puVar13 = puVar13 + 1;
              FUN_2c66b4f8(*puVar13,uVar14,auStack_3c);
              puVar10 = puVar15 + (1 - iVar7);
              puVar15 = puVar15 + 1;
              *puVar15 = (char)auStack_3c[0];
              FUN_2c648600(uVar1,puVar10,auStack_3c[0] & 0xff);
            } while (puVar15 != (undefined1 *)((uVar12 - 1) + iVar7));
          }
          uStack_46 = (undefined2)uStack_40;
          iVar8 = FUN_2c669578(uVar6 + uVar12);
          if (iVar8 != 0) {
            iStack_30 = 0;
            auStack_3c[2] = _LAB_2c64a1a8;
            if (bVar3 == 1) {
              auStack_3c[1] = 0x401;
            }
            else {
              auStack_3c[1] = 0x700;
            }
            iVar9 = FUN_2c4bc9b4(bVar2,auStack_3c + 1);
            if (iVar9 == 0) {
              if (uVar6 != 0) {
                FUN_2c674668(iVar8,&uStack_46,uVar6);
              }
              if (uVar12 != 0) {
                FUN_2c674668(iVar8 + uVar6,iVar7,uVar12);
              }
              if (bVar3 == 1) {
                iVar9 = FUN_2c4bd438(bVar2,uStack_44 & 0xff,iVar8,uVar6 + uVar12 & 0xffff);
              }
              else {
                iVar9 = FUN_2c4bcfa0(bVar2,uStack_44 & 0xff,iVar8,uVar6,uVar12,0,0);
              }
              if (iVar9 != 0) {
                FUN_2c648600(_LAB_2c64a1ac,bVar2);
              }
              FUN_2c669588(iVar8);
              FUN_2c4bce68(bVar2);
            }
            else {
              FUN_2c669588(iVar8);
              FUN_2c648600(_LAB_2c64a1c8,iVar9);
            }
          }
          if (*_LAB_2c64a194 == iStack_2c) {
            uVar14 = FUN_2c669b3c(*DAT_2c669594,iVar7);
            return uVar14;
          }
          goto LAB_2c64a204;
        }
        uVar14 = FUN_2c648600(_LAB_2c64a218);
      }
LAB_2c64a064:
      if (*_LAB_2c64a194 == iStack_2c) {
        return uVar14;
      }
LAB_2c64a204:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    uVar14 = _LAB_2c64a1c4;
    if (*_LAB_2c64a194 != iStack_2c) goto LAB_2c64a204;
  }
  else {
    uVar14 = _LAB_2c64a1b0;
    if (*_LAB_2c64a194 != iStack_2c) goto LAB_2c64a204;
  }
  iVar8 = *DAT_2c648674;
  iVar7 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar14);
  if (-1 < iVar7) {
    if (iVar7 < 0x7ff) {
      if (iVar7 == 0) goto LAB_2c648630;
    }
    else {
      iVar7 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar5 = (code *)FUN_2c648328();
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(_LAB_2c648678,iVar7);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar7);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar8) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

