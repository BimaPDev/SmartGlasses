/* FUN_2c488af4 @ 0x2c488af4 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c488af4(uint param_1,uint *param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  code *pcVar9;
  ushort *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined1 auStack_170 [96];
  undefined4 uStack_110;
  undefined4 uStack_104;
  undefined1 *puStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  uint auStack_f7 [11];
  undefined1 auStack_c8 [13];
  undefined1 uStack_bb;
  uint auStack_ba [8];
  undefined1 auStack_98 [8];
  char *pcStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint auStack_78 [6];
  uint *puStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint auStack_50 [3];
  char *pcStack_44;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  
  uStack_1c = *_LAB_2c488dc0;
  uVar11 = param_1 & 0xff;
  uVar14 = param_3 & 0xffff;
  auStack_78[5] = param_1;
  puStack_60 = param_2;
  uStack_5c = param_3;
  pcVar4 = (char *)func_0x2c48a894(uVar11);
  puVar12 = _LAB_2c488dfc;
  if (pcVar4 == (char *)0x0) {
    pcStack_90 = (char *)_LAB_2c488dcc;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1af,_LAB_2c488dd4,_LAB_2c488dd0);
  }
  if (uVar11 == 0x24) {
    FUN_2c674668(&uStack_54,param_2,uVar14);
    pcStack_90 = pcStack_44;
    uStack_8c = auStack_40[0];
    uStack_88 = auStack_40[1];
    uStack_84 = auStack_40[2];
    uStack_80 = auStack_40[3];
    uStack_7c = uStack_30;
    auStack_78[0] = uStack_2c;
    auStack_78[1] = uStack_28;
    auStack_78[2] = uStack_24;
    auStack_78[3] = uStack_20;
    pcVar4 = (char *)FUN_2c4884dc(uStack_54,auStack_50[0],auStack_50[1],auStack_50[2]);
  }
  else {
    if (uVar11 == 0x25) {
      uVar11 = (uint)(byte)*param_2;
      if (4 < uVar11) {
        pcStack_90 = (char *)_LAB_2c488de0;
        uStack_8c = uVar11;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1bf,_LAB_2c488dd4,_LAB_2c488dd0);
      }
      *(bool *)(_LAB_2c488dc4 + uVar11) = *(byte *)((int)param_2 + 1) != 0;
      puVar8 = _LAB_2c488dc8;
      if (*_LAB_2c488dc0 == uStack_1c) {
LAB_2c488b98:
        uVar11 = FUN_2c646ab8(*puVar8);
        if ((int)uVar11 < 0) {
          pcVar4 = (char *)0x80000000;
        }
        else {
          pcVar4 = (char *)(uVar11 & 0xfffffff7);
        }
        return pcVar4;
      }
      goto LAB_2c488e4a;
    }
    if ((uVar14 == 0x31) && (uVar11 == 0x26)) {
      puVar12 = param_2;
      puVar15 = &uStack_54;
      do {
        puVar13 = puVar12 + 4;
        uVar11 = puVar12[1];
        uVar14 = puVar12[2];
        puVar16 = puVar15 + 4;
        uVar7 = puVar12[3];
        *puVar15 = *puVar12;
        puVar15[1] = uVar11;
        puVar15[2] = uVar14;
        puVar15[3] = uVar7;
        puVar12 = puVar13;
        puVar15 = puVar16;
      } while (puVar13 != param_2 + 0xc);
      *(byte *)puVar16 = (byte)*puVar13;
      uVar11 = (uint)(byte)*param_2;
      if (5 < uVar11) {
        pcStack_90 = (char *)_LAB_2c488de0;
        uStack_8c = uVar11;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1cb,_LAB_2c488dd4,_LAB_2c488dd0);
      }
      puVar12 = (uint *)(_LAB_2c488df0 + uVar11 * 0x31);
      puVar15 = &uStack_54;
      do {
        puVar13 = puVar12 + 4;
        puVar16 = puVar15 + 4;
        uVar11 = puVar15[1];
        uVar14 = puVar15[2];
        uVar7 = puVar15[3];
        puVar17 = puVar15 + 4;
        *puVar12 = *puVar15;
        puVar12[1] = uVar11;
        puVar12[2] = uVar14;
        puVar12[3] = uVar7;
        puVar12 = puVar13;
        puVar15 = puVar16;
      } while (puVar17 != &uStack_24);
      *(char *)puVar13 = (char)*puVar16;
      puVar8 = _LAB_2c488df4;
      if (*_LAB_2c488dc0 == uStack_1c) goto LAB_2c488b98;
      goto LAB_2c488e4a;
    }
    if ((uVar14 == 0x20) && (uVar11 == 0x27)) {
      uStack_54 = *param_2;
      auStack_50[0] = param_2[1];
      auStack_50[1] = param_2[2];
      auStack_50[2] = param_2[3];
      pcVar4 = (char *)param_2[4];
      auStack_40[0] = param_2[5];
      auStack_40[1] = param_2[6];
      auStack_40[2] = param_2[7];
      uVar11 = uStack_54 >> 8 & 0xff;
      pcStack_44 = pcVar4;
      if (3 < uVar11) {
        pcStack_90 = (char *)_LAB_2c488e54;
        uStack_8c = uVar11;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1da,_LAB_2c488e5c,_LAB_2c488e58);
      }
      pcVar5 = (char *)*_LAB_2c488df8;
      *_LAB_2c488dfc = uStack_54;
      puVar12[1] = auStack_50[0];
      puVar12[2] = auStack_50[1];
      puVar12[3] = auStack_50[2];
      puVar12[4] = (uint)pcVar4;
      puVar12[5] = auStack_40[0];
      puVar12[6] = auStack_40[1];
      puVar12[7] = auStack_40[2];
      if (pcVar5 != (char *)0x0) {
        if (*_LAB_2c488dc0 != uStack_1c) goto LAB_2c488e4a;
        goto LAB_2c488bfa;
      }
    }
    else if (uVar11 == 0x2c) {
      FUN_2c674668(&uStack_54,param_2,uVar14);
      puVar8 = _LAB_2c488de8;
      if (*_LAB_2c488de4 == '\0') {
        pcStack_90 = (char *)_LAB_2c488e04;
        uStack_8c = _LAB_2c488e00;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xab,_LAB_2c488dd4,_LAB_2c488dd0);
      }
      FUN_2c644044(*_LAB_2c488de8,0xffffffff);
      if (uStack_54 == 1) {
        pcVar9 = (code *)_LAB_2c488e50[1];
      }
      else if (uStack_54 == 2) {
        pcVar9 = (code *)_LAB_2c488e50[2];
      }
      else {
        if (uStack_54 != 0) {
          pcStack_90 = (char *)_LAB_2c488dec;
          uStack_8c = uStack_54;
                    /* WARNING: Subroutine does not return */
          TRACE(4,0xbf,_LAB_2c488dd4,_LAB_2c488dd0);
        }
        pcVar9 = (code *)*_LAB_2c488e50;
      }
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(&uStack_54);
      }
      pcVar4 = (char *)FUN_2c644080(*puVar8);
    }
    else if (uVar11 == 0x16) {
      if (3 < (char)(byte)*param_2) {
        pcStack_90 = (char *)_LAB_2c488de0;
        uStack_8c = (int)(char)(byte)*param_2;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1ee,_LAB_2c488dd4,_LAB_2c488dd0);
      }
      pcVar5 = (char *)*_LAB_2c488dd8;
      *(bool *)_LAB_2c488ddc = *(byte *)((int)param_2 + 1) != 0;
      pcVar4 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
LAB_2c488bea:
        if (*_LAB_2c488dc0 == uStack_1c) {
LAB_2c488bfa:
          FUN_2c643b5c();
          uVar11 = 0;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            uVar11 = getCurrentExceptionNumber();
            uVar11 = uVar11 & 0x1ff;
          }
          if (uVar11 == 0) {
            iVar3 = 0;
            bVar2 = (bool)isCurrentModePrivileged();
            if (bVar2) {
              iVar3 = isIRQinterruptsEnabled();
            }
            if (iVar3 == 0) {
              iVar3 = 0;
              bVar2 = (bool)isCurrentModePrivileged();
              if (bVar2) {
                iVar3 = getBasePriority();
              }
              if (iVar3 == 0) {
                software_interrupt(0);
                return pcVar5;
              }
            }
          }
          if ((pcVar5 == (char *)0x0) || (*pcVar5 != -10)) {
            FUN_2c643b3c(pcVar5,0xfffffffc);
            return (char *)0xfffffffc;
          }
          puVar10 = (ushort *)(pcVar5 + 0xc);
          do {
            ExclusiveAccess(puVar10);
            uVar1 = *puVar10;
            if (*(ushort *)(pcVar5 + 0xe) <= uVar1) {
              ClearExclusiveLocal();
              goto LAB_2c647278;
            }
            bVar2 = (bool)hasExclusiveAccess(puVar10);
          } while (!bVar2);
          *puVar10 = uVar1 + 1;
LAB_2c647278:
          if (*(ushort *)(pcVar5 + 0xe) <= uVar1) {
            FUN_2c643b3c(pcVar5,0xffffffef);
            return (char *)0xfffffffd;
          }
          FUN_2c646d24(pcVar5);
          FUN_2c643b60(pcVar5,*(undefined2 *)(pcVar5 + 0xc));
          return (char *)0x0;
        }
        goto LAB_2c488e4a;
      }
    }
    else {
      if (uVar11 == 0x17) {
        if (*_LAB_2c488dc0 == uStack_1c) {
          iVar6 = *_LAB_2c488ae0;
          auStack_78[0] = 0;
          FUN_2c674268(auStack_78 + 1,0,0x24,0);
          auStack_50[0] = 0;
          FUN_2c674268(auStack_50 + 1,0,0x38);
          FUN_2c674268(&uStack_f8,0,0x80);
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 0x20))(auStack_78,0x28);
          if (((char)auStack_78[0] != '5') || ((auStack_78[0] >> 8 & 0xff) != 0x35)) {
            uStack_110 = _LAB_2c488ae4;
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x142,_LAB_2c488aec,_LAB_2c488ae8);
          }
          uStack_f8 = 0;
          puVar12 = auStack_78;
          puVar15 = auStack_f7;
          do {
            puVar16 = puVar15;
            puVar13 = puVar12;
            uVar11 = puVar13[1];
            uVar14 = puVar13[2];
            uVar7 = puVar13[3];
            *puVar16 = *puVar13;
            puVar16[1] = uVar11;
            puVar16[2] = uVar14;
            puVar16[3] = uVar7;
            puVar12 = puVar13 + 4;
            puVar15 = puVar16 + 4;
          } while (puVar13 + 4 != &uStack_58);
          uVar11 = puVar13[4];
          puVar16[5] = puVar13[5];
          puVar16[4] = uVar11;
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 0x30))(auStack_50,0x3c);
          if (((char)auStack_50[0] == '5') && ((auStack_50[0] >> 8 & 0xff) == 0x35)) {
            uStack_bb = 0;
            puVar12 = auStack_ba;
            puVar15 = auStack_50;
            do {
              puVar16 = puVar15;
              puVar13 = puVar12;
              uVar11 = puVar16[1];
              uVar14 = puVar16[2];
              uVar7 = puVar16[3];
              *puVar13 = *puVar16;
              puVar13[1] = uVar11;
              puVar13[2] = uVar14;
              puVar13[3] = uVar7;
              puVar12 = puVar13 + 4;
              puVar15 = puVar16 + 4;
            } while (puVar16 + 4 != &uStack_20);
            uVar11 = puVar16[5];
            uVar14 = puVar16[6];
            puVar13[4] = puVar16[4];
            puVar13[5] = uVar11;
            puVar13[6] = uVar14;
            puStack_100 = &uStack_f8;
            uStack_104 = 0x17;
            uStack_fc = 0x80;
            uStack_80._0_3_ = CONCAT12(3,(undefined2)uStack_80);
            pcVar4 = (char *)FUN_2c49737c(0x17,puStack_100,0x80);
            if (*_LAB_2c488ae0 != iVar6) {
                    /* WARNING: Subroutine does not return */
              stack_chk_fail();
            }
            return pcVar4;
          }
          uStack_110 = _LAB_2c488af0;
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x14d,_LAB_2c488aec,_LAB_2c488ae8);
        }
        goto LAB_2c488e4a;
      }
      if (uVar11 == 0x2b) {
        pcVar5 = (char *)*_LAB_2c488e08;
        *_LAB_2c488e0c = (byte)*param_2;
        if (pcVar5 != (char *)0x0) goto LAB_2c488bea;
        pcVar4 = (char *)0x0;
      }
      else if (uVar11 == 0x29) {
        if (*_LAB_2c488dc0 == uStack_1c) {
          uVar11 = *param_2;
          iVar6 = *DAT_2c488944;
          FUN_2c674268(auStack_170,0,0x15c,0);
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 100))(1,auStack_170,0xa8);
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 100))(2,auStack_c8,0x30);
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 100))(3,auStack_98,0x24);
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 100))(4,auStack_78 + 1,0x24);
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 0x6c))(auStack_50,0x10);
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 0x74))(auStack_40,0x24);
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 0x7c))((int)&uStack_1c + 1);
          iVar3 = FUN_2c4eab7c();
          (**(code **)(iVar3 + 0x84))(auStack_18);
          uStack_1c = CONCAT31(uStack_1c._1_3_,(byte)uVar11 != 0);
          pcVar4 = (char *)FUN_2c49737c(0x29,auStack_170,0x15c);
          if (*DAT_2c488944 != iVar6) {
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          return pcVar4;
        }
        goto LAB_2c488e4a;
      }
    }
  }
  if (*_LAB_2c488dc0 == uStack_1c) {
    return pcVar4;
  }
LAB_2c488e4a:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

