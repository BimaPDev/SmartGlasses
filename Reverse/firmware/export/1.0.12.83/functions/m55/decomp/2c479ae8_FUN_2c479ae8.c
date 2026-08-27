/* FUN_2c479ae8 @ 0x2c479ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c479ae8(byte *param_1,uint param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  ushort uVar11;
  undefined4 *puVar12;
  undefined1 unaff_r5;
  int *piVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  uint in_fpscr;
  undefined8 uVar17;
  byte abStack_230 [488];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  
  uVar14 = (ushort)*param_1;
  iStack_24 = *_LAB_2c479d6c;
  if (uVar14 != 0) {
    iVar15 = param_2 - 2;
    piVar13 = *(int **)(_LAB_2c479d70 + param_3 * 4);
    cVar1 = *_LAB_2c479d74;
    uVar11 = (short)piVar13[3] + 1;
    *(ushort *)(piVar13 + 3) = uVar11;
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x101,_LAB_2c479d7c,_LAB_2c479d84,_LAB_2c479d9c,_LAB_2c479d78,uVar14,uVar11,
            *(undefined2 *)((int)piVar13 + 10));
    }
    if (uVar14 != uVar11) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x107,_LAB_2c479d7c,_LAB_2c479d84,_LAB_2c479d80,_LAB_2c479d78,uVar14,uVar11);
    }
    if (50000 < (uint)(iVar15 + piVar13[1])) {
      FUN_2c6741e8(0x711,_LAB_2c479d88,_LAB_2c479d78);
      uVar5 = _LAB_2c479d90;
      uVar10 = _LAB_2c479d8c;
      if (*_LAB_2c479d6c == iStack_24) {
code_r0x2c6741e8:
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_2c6741f4)(0x711,uVar5,uVar10,0);
        return;
      }
      goto LAB_2c479d1e;
    }
    FUN_2c674668(*piVar13 + piVar13[1],param_1 + 2,iVar15);
    piVar13[1] = piVar13[1] + iVar15;
    if (*(ushort *)((int)piVar13 + 10) != uVar14) goto LAB_2c479b50;
    if (*_LAB_2c479d6c != iStack_24) goto LAB_2c479d1e;
    goto FUN_2c479a90;
  }
  bVar2 = param_1[2];
  bVar3 = param_1[3];
  if (bVar2 == 8) {
    uVar7 = param_2 - 6 & 0xffff;
    puVar12 = *(undefined4 **)(_LAB_2c479d70 + param_3 * 4);
    bVar2 = param_1[4];
    *(ushort *)(puVar12 + 3) = (ushort)*param_1;
    *(ushort *)((int)puVar12 + 10) = (ushort)bVar2;
    *(byte *)(puVar12 + 2) = bVar3;
    puVar12[1] = uVar7;
    if (*_LAB_2c479d6c == iStack_24) {
                    /* WARNING: Could not recover jumptable at 0x2c674670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_2c674674)(*puVar12,param_1 + 6,uVar7,0);
      return;
    }
    goto LAB_2c479d1e;
  }
  if (((param_2 & 1) == 0) && (4 < param_2)) {
    uVar8 = 4;
    uVar7 = 0;
    do {
      iVar15 = uVar8 + 1;
      uVar16 = uVar7 & 0xffff;
      uVar7 = uVar7 + 1;
      pbVar4 = param_1 + uVar8;
      uVar8 = uVar8 + 2 & 0xffff;
      *(ushort *)(abStack_230 + uVar16 * 2) = (ushort)*pbVar4 + (ushort)param_1[iVar15] * 0x100;
    } while (uVar8 < param_2);
  }
  switch(bVar2) {
  case 2:
    uVar7 = param_2 - 4 & 0xffff;
    puVar12 = *(undefined4 **)(_LAB_2c479d70 + param_3 * 4);
    *(byte *)(puVar12 + 2) = bVar3;
    puVar12[1] = 0;
    *(undefined2 *)((int)puVar12 + 10) = 0;
    *(undefined2 *)(puVar12 + 3) = 0;
    FUN_2c674668(*puVar12,param_1 + 4,uVar7);
    puVar12[1] = uVar7;
    uStack_28 = uStack_28 & 0xffff0000;
    uStack_2c = 0;
    uStack_30 = 0x30000;
    iVar15 = FUN_2c46db64();
    (**(code **)(iVar15 + 0x10))(&uStack_30,4,param_3 - 0x5fU & 0xff);
    if (*_LAB_2c479d6c != iStack_24) break;
    goto FUN_2c479a90;
  case 3:
    if (*_LAB_2c479d6c == iStack_24) {
      uVar7 = *DAT_2c47afcc;
      if (*DAT_2c47afc8 == 0) {
        uVar17 = 0;
      }
      else {
        iStack_24 = 5;
        uStack_20 = 0;
        uVar17 = FUN_2c47ab40(&iStack_24);
      }
      if ((*DAT_2c47afcc ^ uVar7) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*DAT_2c47afcc ^ uVar7,0);
    }
    break;
  default:
    uVar5 = _LAB_2c479d98;
    uVar10 = _LAB_2c479d94;
    if (*_LAB_2c479d6c == iStack_24) goto code_r0x2c6741e8;
    break;
  case 6:
    iVar15 = *(int *)(_LAB_2c479d70 + param_3 * 4);
    *(undefined4 *)(iVar15 + 4) = 0;
    *(undefined2 *)(iVar15 + 0xc) = 0;
    *(ushort *)(iVar15 + 10) = (ushort)abStack_230[0];
    *(byte *)(iVar15 + 8) = bVar3;
LAB_2c479b50:
    if (*_LAB_2c479d6c == iStack_24) {
      return;
    }
    break;
  case 9:
    uVar7 = param_2 - 4 & 0xffff;
    puVar12 = *(undefined4 **)(_LAB_2c479d70 + param_3 * 4);
    puVar12[1] = 0;
    *(undefined2 *)((int)puVar12 + 10) = 0;
    *(undefined2 *)(puVar12 + 3) = 0;
    *(byte *)(puVar12 + 2) = bVar3;
    FUN_2c674668(*puVar12,param_1 + 4,uVar7);
    piVar13 = _LAB_2c479d6c;
    puVar12[1] = uVar7;
    if (*piVar13 != iStack_24) break;
FUN_2c479a90:
    puVar12 = *(undefined4 **)(_LAB_2c479ae0 + param_3 * 4);
    if (*(char *)(puVar12 + 2) == '\x11') {
      uVar7 = FUN_2c478604(*puVar12,puVar12[1]);
      if (uVar7 == 0) {
        uVar8 = (uint)*_LAB_2c479ae4;
      }
      else {
        if ((int)(uint)*_LAB_2c479ae4 <= (int)uVar7) {
          uVar7 = (uint)*_LAB_2c479ae4;
        }
        uVar8 = uVar7 & 0xffff;
        *_LAB_2c479ae4 = (ushort)uVar7;
      }
      pbVar4 = (byte *)FUN_2c46de74();
      uStack_3c = (uint)*pbVar4;
      uStack_40 = (uint)pbVar4[1];
      uStack_44 = (uint)pbVar4[2];
      uStack_48 = (uint)pbVar4[3];
      FUN_2c66b4b8(&uStack_2c,_LAB_2c47740c,pbVar4[5],pbVar4[4]);
      uVar5 = FUN_2c48e738();
      FUN_2c48e5b4(uVar5,_LAB_2c477410,&uStack_2c);
      FUN_2c48e518(0,uVar5,_LAB_2c477414);
      FUN_2c48e518(0,uVar5,_LAB_2c477418);
      uVar17 = VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
      FUN_2c48e518((int)uVar17,uVar5,_LAB_2c47741c);
      FUN_2c48e518(0,uVar5,_LAB_2c477420);
      uVar5 = FUN_2c48e3e8(uVar5);
      uStack_44 = FUN_2c66c4ec();
      uStack_48 = _LAB_2c477424;
      uStack_40 = uVar5;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x72,_LAB_2c47742c,_LAB_2c477428);
    }
    uStack_34 = (uint)*(ushort *)(puVar12 + 1);
    if (param_3 == 0) {
      uStack_28 = _LAB_2c47d3c0;
      iStack_24 = _LAB_2c47d3c4;
      uStack_20 = uStack_34;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2e,_LAB_2c47d3d0,_LAB_2c47d3cc);
    }
    pcVar6 = (char *)*puVar12;
    iVar15 = *DAT_2c47d54c;
    if (*DAT_2c47d548 != '\0') {
      uStack_38 = DAT_2c47d558;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x3e,DAT_2c47d560,DAT_2c47d55c);
    }
    if (*pcVar6 == '\x02') {
      uStack_2c = FUN_2c473cb4(pcVar6 + 1,uStack_34 - 1 & 0xffff,0);
      if (uStack_2c == 0) {
        FUN_2c6741e8(0x710,DAT_2c47d564);
      }
      else {
        if (*(int *)(uStack_2c + 0xc) == 0) {
          FUN_2c47a698();
        }
        else if (*(int *)(uStack_2c + 0xc) == 0xc) {
          uStack_38 = DAT_2c47d580;
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x92,DAT_2c47d560,DAT_2c47d55c);
        }
        FUN_2c473cc0(&uStack_2c);
      }
    }
    else {
      if (*pcVar6 != '\x01') {
        if (*DAT_2c47d54c == iVar15) {
          FUN_2c6741e8(0x711,DAT_2c47d554,DAT_2c47d550);
          return;
        }
        goto LAB_2c47d544;
      }
      iVar9 = FUN_2c47d220(&uStack_2c,pcVar6 + 1,uStack_34 - 1 & 0xffff);
      if (iVar9 != 0) {
        if ((uStack_2c & 0xff) == 3) {
          iVar9 = FUN_2c47d220(&uStack_2c,iStack_24,uStack_20 & 0xffff);
          puVar12 = DAT_2c47d578;
          if (iVar9 != 0) {
            switch(uStack_2c >> 8 & 0xff) {
            case 3:
              if ((code *)*DAT_2c47d568 != (code *)0x0) {
                (*(code *)*DAT_2c47d568)(iStack_24,uStack_20 & 0xffff,unaff_r5);
              }
              if (uStack_2c._2_1_ != '\0') {
                FUN_2c47af88(4,0,uStack_28);
              }
              break;
            case 4:
            case 5:
            case 7:
              FUN_2c47d1ec(&uStack_2c);
              break;
            case 6:
              if ((code *)*DAT_2c47d578 != (code *)0x0) {
                (*(code *)*DAT_2c47d578)(0);
                *puVar12 = 0;
              }
              break;
            default:
              FUN_2c6741e8(0x711,DAT_2c47d57c,DAT_2c47d550);
              break;
            case 9:
              if ((code *)*DAT_2c47d56c != (code *)0x0) {
                (*(code *)*DAT_2c47d56c)(DAT_2c47d574);
              }
              break;
            case 10:
              if ((code *)*DAT_2c47d56c != (code *)0x0) {
                (*(code *)*DAT_2c47d56c)(DAT_2c47d570);
              }
            }
          }
        }
        else if ((uStack_2c & 0xff) == 5) {
          FUN_2c47d954(iStack_24,uStack_20 & 0xffff);
        }
      }
    }
    if (*DAT_2c47d54c == iVar15) {
      return;
    }
LAB_2c47d544:
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
LAB_2c479d1e:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

