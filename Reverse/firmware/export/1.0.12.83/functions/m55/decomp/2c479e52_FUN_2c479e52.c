/* FUN_2c479e52 @ 0x2c479e52 */

/* WARNING: Removing unreachable block (ram,0x2c479aa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c479e52(byte *param_1,uint param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  ushort uVar12;
  undefined4 *puVar13;
  undefined4 unaff_r4;
  int *piVar14;
  uint unaff_r5;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  uint in_fpscr;
  undefined8 uVar18;
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
  undefined4 uStack_1c;
  uint uStack_18;
  
  if (*param_4 != '\0') {
    uStack_20 = _LAB_2c479eb8;
    uStack_1c = _LAB_2c479eb4;
    uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4a,_LAB_2c479ec0,_LAB_2c479ebc);
  }
  if (0xc34e < (param_2 - 2 & 0xffff)) {
    uVar9 = 0x712;
    uVar5 = _LAB_2c479eb0;
    uVar11 = _LAB_2c479eac;
code_r0x2c6741e8:
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c6741f4)(uVar9,uVar5,uVar11,param_2);
    return;
  }
  uVar15 = (ushort)*param_1;
  iStack_24 = *_LAB_2c479d6c;
  uStack_18 = unaff_r5;
  if (uVar15 != 0) {
    iVar16 = param_2 - 2;
    piVar14 = *(int **)(_LAB_2c479d70 + 4);
    cVar1 = *_LAB_2c479d74;
    uVar12 = (short)piVar14[3] + 1;
    *(ushort *)(piVar14 + 3) = uVar12;
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x101,_LAB_2c479d7c,_LAB_2c479d84,_LAB_2c479d9c,_LAB_2c479d78,uVar15,uVar12,
            *(undefined2 *)((int)piVar14 + 10));
    }
    if (uVar15 != uVar12) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x107,_LAB_2c479d7c,_LAB_2c479d84,_LAB_2c479d80,_LAB_2c479d78,uVar15,uVar12);
    }
    if (50000 < (uint)(iVar16 + piVar14[1])) {
      FUN_2c6741e8(0x711,_LAB_2c479d88,_LAB_2c479d78);
      param_2 = 0;
      if (*_LAB_2c479d6c == iStack_24) {
        uVar9 = 0x711;
        uVar5 = _LAB_2c479d90;
        uVar11 = _LAB_2c479d8c;
        goto code_r0x2c6741e8;
      }
      goto LAB_2c479d1e;
    }
    FUN_2c674668(*piVar14 + piVar14[1],param_1 + 2,iVar16);
    piVar14[1] = piVar14[1] + iVar16;
    if (*(ushort *)((int)piVar14 + 10) != uVar15) goto LAB_2c479b50;
    if (*_LAB_2c479d6c != iStack_24) goto LAB_2c479d1e;
    goto FUN_2c479a90;
  }
  bVar2 = param_1[2];
  bVar3 = param_1[3];
  if (bVar2 == 8) {
    uVar7 = param_2 - 6 & 0xffff;
    puVar13 = *(undefined4 **)(_LAB_2c479d70 + 4);
    bVar2 = param_1[4];
    *(ushort *)(puVar13 + 3) = (ushort)*param_1;
    *(ushort *)((int)puVar13 + 10) = (ushort)bVar2;
    *(byte *)(puVar13 + 2) = bVar3;
    puVar13[1] = uVar7;
    if (*_LAB_2c479d6c == iStack_24) {
                    /* WARNING: Could not recover jumptable at 0x2c674670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_2c674674)(*puVar13,param_1 + 6,uVar7,0);
      return;
    }
    goto LAB_2c479d1e;
  }
  uStack_1c = unaff_r4;
  if (((param_2 & 1) == 0) && (4 < param_2)) {
    uVar8 = 4;
    uVar7 = 0;
    do {
      iVar16 = uVar8 + 1;
      uVar17 = uVar7 & 0xffff;
      uVar7 = uVar7 + 1;
      pbVar4 = param_1 + uVar8;
      uVar8 = uVar8 + 2 & 0xffff;
      *(ushort *)(abStack_230 + uVar17 * 2) = (ushort)*pbVar4 + (ushort)param_1[iVar16] * 0x100;
    } while (uVar8 < param_2);
  }
  switch(bVar2) {
  case 2:
    uVar7 = param_2 - 4 & 0xffff;
    puVar13 = *(undefined4 **)(_LAB_2c479d70 + 4);
    *(byte *)(puVar13 + 2) = bVar3;
    puVar13[1] = 0;
    *(undefined2 *)((int)puVar13 + 10) = 0;
    *(undefined2 *)(puVar13 + 3) = 0;
    FUN_2c674668(*puVar13,param_1 + 4,uVar7);
    puVar13[1] = uVar7;
    uStack_28 = uStack_28 & 0xffff0000;
    uStack_2c = 0;
    uStack_30 = 0x30000;
    iVar16 = FUN_2c46db64();
    (**(code **)(iVar16 + 0x10))(&uStack_30,4,0xa2);
    if (*_LAB_2c479d6c != iStack_24) break;
    goto FUN_2c479a90;
  case 3:
    if (*_LAB_2c479d6c == iStack_24) {
      uVar7 = *DAT_2c47afcc;
      if (*DAT_2c47afc8 == 0) {
        uVar18 = 0;
      }
      else {
        iStack_24 = 5;
        uStack_20 = 0;
        uStack_1c = 1;
        uStack_18 = 0;
        uVar18 = FUN_2c47ab40(&iStack_24);
      }
      if ((*DAT_2c47afcc ^ uVar7) != 0) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),*DAT_2c47afcc ^ uVar7,0);
      }
      return;
    }
    break;
  default:
    param_2 = 0;
    if (*_LAB_2c479d6c == iStack_24) {
      uVar9 = 0x711;
      uVar5 = _LAB_2c479d98;
      uVar11 = _LAB_2c479d94;
      goto code_r0x2c6741e8;
    }
    break;
  case 6:
    iVar16 = *(int *)(_LAB_2c479d70 + 4);
    *(undefined4 *)(iVar16 + 4) = 0;
    *(undefined2 *)(iVar16 + 0xc) = 0;
    *(ushort *)(iVar16 + 10) = (ushort)abStack_230[0];
    *(byte *)(iVar16 + 8) = bVar3;
LAB_2c479b50:
    if (*_LAB_2c479d6c == iStack_24) {
      return;
    }
    break;
  case 9:
    uVar7 = param_2 - 4 & 0xffff;
    puVar13 = *(undefined4 **)(_LAB_2c479d70 + 4);
    puVar13[1] = 0;
    *(undefined2 *)((int)puVar13 + 10) = 0;
    *(undefined2 *)(puVar13 + 3) = 0;
    *(byte *)(puVar13 + 2) = bVar3;
    FUN_2c674668(*puVar13,param_1 + 4,uVar7);
    piVar14 = _LAB_2c479d6c;
    puVar13[1] = uVar7;
    if (*piVar14 != iStack_24) break;
FUN_2c479a90:
    puVar13 = *(undefined4 **)(_LAB_2c479ae0 + 4);
    if (*(char *)(puVar13 + 2) == '\x11') {
      uVar7 = FUN_2c478604(*puVar13,puVar13[1]);
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
      uStack_1c = *_LAB_2c477408;
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
      uVar18 = VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
      FUN_2c48e518((int)uVar18,uVar5,_LAB_2c47741c);
      FUN_2c48e518(0,uVar5,_LAB_2c477420);
      uVar5 = FUN_2c48e3e8(uVar5);
      uStack_44 = FUN_2c66c4ec();
      uStack_48 = _LAB_2c477424;
      uStack_40 = uVar5;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x72,_LAB_2c47742c,_LAB_2c477428);
    }
    uStack_34 = (uint)*(ushort *)(puVar13 + 1);
    pcVar6 = (char *)*puVar13;
    iVar16 = *DAT_2c47d54c;
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
        if (*DAT_2c47d54c == iVar16) {
          FUN_2c6741e8(0x711,DAT_2c47d554,DAT_2c47d550);
          return;
        }
        goto LAB_2c47d544;
      }
      iVar10 = FUN_2c47d220(&uStack_2c,pcVar6 + 1,uStack_34 - 1 & 0xffff);
      if (iVar10 != 0) {
        if ((uStack_2c & 0xff) == 3) {
          iVar10 = FUN_2c47d220(&uStack_2c,iStack_24,uStack_20 & 0xffff);
          puVar13 = DAT_2c47d578;
          if (iVar10 != 0) {
            switch(uStack_2c >> 8 & 0xff) {
            case 3:
              if ((code *)*DAT_2c47d568 != (code *)0x0) {
                (*(code *)*DAT_2c47d568)(iStack_24,uStack_20 & 0xffff,uStack_18 & 0xff);
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
                *puVar13 = 0;
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
    if (*DAT_2c47d54c == iVar16) {
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

