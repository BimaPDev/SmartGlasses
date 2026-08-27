/* FUN_2c479248 @ 0x2c479248 */

void FUN_2c479248(uint param_1,int param_2,ushort param_3,undefined1 param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  
  if (*DAT_2c4794d4 == '\0') {
    uVar12 = (uint)param_3;
    if ((59999 < (uVar12 - 1 & 0xffff)) || (param_2 == 0)) {
      FUN_2c6741e8(0x712,DAT_2c47a4f0,DAT_2c47a4f4,uVar12);
      return;
    }
    if (param_5 != 0) {
      *DAT_2c47a4ec = param_5;
    }
    puVar14 = DAT_2c47a148;
    piVar13 = (int *)*DAT_2c47a148;
    if (*piVar13 == 0) {
      FUN_2c6741e8(0x711,DAT_2c47a144,DAT_2c47a140);
      return;
    }
    *(undefined1 *)((int)piVar13 + 0x20a) = param_4;
    puVar3 = DAT_2c47a14c;
    piVar13[1] = 0;
    *(undefined2 *)(piVar13 + 0x82) = 0;
    piVar13[0x83] = 0;
    *(undefined2 *)(piVar13 + 0x84) = 0;
    FUN_2c674668();
    uVar9 = (uint)*puVar3;
    piVar13[1] = uVar12;
    pbVar4 = DAT_2c47a150;
    if (uVar9 == 0) {
      iVar5 = 0x1fa;
      uVar11 = 0x1fb;
    }
    else {
      uVar11 = uVar9 - 5;
      iVar5 = uVar9 - 6;
    }
    if (param_1 == 0) {
      param_1 = 8;
    }
    *(undefined2 *)((int)piVar13 + 0x20e) = 0;
    *(ushort *)(piVar13 + 0x83) = (short)((uVar12 - 1) / uVar11) + 1U & 0xff;
    if ((int)uVar12 < iVar5) {
      param_1 = 9;
      *pbVar4 = 3;
      FUN_2c479f14(0,1000);
    }
    else {
      (**(code **)(DAT_2c47a13c + (uint)*pbVar4 * 4))(0,0);
    }
    uVar9 = (uint)*puVar3;
    *(char *)(piVar13 + 0x84) = (char)param_1;
    puVar14 = (undefined4 *)*puVar14;
    if (uVar9 == 0) {
      uVar9 = 0x200;
      iVar5 = 0x1fa;
    }
    else {
      iVar5 = uVar9 - 6;
    }
    if (iVar5 <= (int)uVar12) {
      if (param_1 == 6) {
        *(undefined1 *)((int)puVar14 + 0xb) = param_4;
        *(undefined1 *)((int)puVar14 + 10) = 6;
        *(undefined1 *)(puVar14 + 3) = *(undefined1 *)(puVar14 + 0x83);
        *(undefined2 *)(puVar14 + 0x82) = 6;
        *(undefined2 *)(puVar14 + 2) = 0;
        *(undefined1 *)((int)puVar14 + 0xd) = 0;
      }
      else {
        if (param_1 != 8) {
          return;
        }
        iVar5 = (uVar9 - 5 & 0xffff) - 4;
        *(undefined2 *)((int)puVar14 + 0x20e) = 0;
        *(ushort *)(puVar14 + 0x83) =
             (short)((uint)((puVar14[1] + -1) - iVar5) / (uVar9 - 5)) + 1U & 0xff;
        FUN_2c674668(*puVar14,param_2 + iVar5,uVar12 - iVar5);
        *(undefined2 *)(puVar14 + 3) = *(undefined2 *)(puVar14 + 0x83);
        puVar14[1] = uVar12 - iVar5;
        *(undefined2 *)(puVar14 + 2) = 0;
        *(undefined1 *)((int)puVar14 + 10) = 8;
        *(undefined1 *)((int)puVar14 + 0xb) = param_4;
        FUN_2c674668((int)puVar14 + 0xe,param_2,iVar5);
        *(short *)(puVar14 + 0x82) = (short)uVar9 + -3;
      }
LAB_2c47a036:
      iVar5 = FUN_2c46db64();
                    /* WARNING: Could not recover jumptable at 0x2c47a050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar5 + 0x10))(puVar14 + 2,*(undefined2 *)(puVar14 + 0x82),0xa1);
      return;
    }
    if (param_1 == 2) {
      *(undefined2 *)(puVar14 + 2) = 0;
      *(undefined1 *)((int)puVar14 + 0xb) = param_4;
      *(undefined1 *)((int)puVar14 + 10) = 2;
      FUN_2c674668(puVar14 + 3,param_2,uVar12);
      *(ushort *)(puVar14 + 0x82) = param_3 + 4;
      iVar5 = FUN_2c46db64();
      (**(code **)(iVar5 + 0x10))(puVar14 + 2,*(undefined2 *)(puVar14 + 0x82),0xa1);
      *pbVar4 = 2;
    }
    else if (param_1 == 9) {
      *(undefined1 *)((int)puVar14 + 10) = 9;
      *(undefined1 *)((int)puVar14 + 0xb) = param_4;
      *(undefined2 *)(puVar14 + 2) = 0;
      FUN_2c674668(puVar14 + 3,param_2,uVar12);
      *(ushort *)(puVar14 + 0x82) = param_3 + 4;
      goto LAB_2c47a036;
    }
    return;
  }
  if ((param_2 == 0) || (uVar12 = (uint)param_3, uVar12 == 0)) {
    FUN_2c6741e8(0x711,DAT_2c4794dc,DAT_2c4794d8);
    return;
  }
  *DAT_2c4794e0 = param_5;
  iVar5 = FUN_2c47bba8();
  puVar2 = DAT_2c479514;
  if ((50000 < uVar12) || (iVar5 != 0)) {
    FUN_2c6741e8(0x711,DAT_2c4794f0,DAT_2c4794ec);
    return;
  }
  *DAT_2c479514 = param_4;
  if (param_1 == 8) {
    uVar9 = (uint)*DAT_2c4794e4;
    if (uVar9 == 0) {
      uVar10 = 0x1f7;
      uVar8 = 0x1fd;
      uVar11 = 0x1fb;
      uVar9 = uVar10;
    }
    else {
      uVar11 = uVar9 - 5;
      uVar10 = (uVar11 & 0xffff) - 4;
      uVar8 = uVar9 - 3 & 0xffff;
      uVar9 = uVar9 - 9 & 0xffff;
    }
    iVar5 = uVar12 - uVar10;
    *(undefined2 *)(puVar2 + 0xe) = 0;
    uVar7 = DAT_2c4794fc;
    *(ushort *)(puVar2 + 0x10) = (short)((iVar5 - 1U) / uVar11) + 1U & 0xff;
    FUN_2c674668(uVar7,uVar10 + param_2,iVar5);
    *(int *)(DAT_2c479500 + 0x364) = iVar5;
    FUN_2c47bc8c(0x65);
    uVar1 = puVar2[0x10];
    iVar5 = FUN_2c47bbb4();
    if (iVar5 != 0) {
      FUN_2c6741e8(0x711,DAT_2c47950c,DAT_2c479508);
    }
    iVar5 = DAT_2c479504;
    *(undefined1 *)(DAT_2c479504 + 0xdb1) = 0;
    *(undefined1 *)(iVar5 + 0xdb6) = 0;
    *(undefined1 *)(iVar5 + 0xdb4) = param_4;
    *(undefined1 *)(iVar5 + 0xdb5) = uVar1;
    *(undefined2 *)(iVar5 + 0xdb2) = 0x800;
    FUN_2c674668(iVar5 + 0xdb7,param_2,uVar9);
    iVar6 = iVar5 + 0xdb1;
    *(short *)(iVar5 + 0xfb2) = (short)uVar8;
    goto LAB_2c479416;
  }
  FUN_2c674668(puVar2 + 0x12,param_2,uVar12);
  *(uint *)(puVar2 + 0xc364) = uVar12;
  FUN_2c47bc8c(0x65);
  if (*DAT_2c4794e4 == 0) {
    uVar9 = 0x1fb;
  }
  else {
    uVar9 = *DAT_2c4794e4 - 5;
  }
  uVar11 = (uVar12 - 1) / uVar9 + 1;
  *(undefined2 *)(puVar2 + 0xe) = 0;
  uVar9 = uVar11 & 0xff;
  *(short *)(puVar2 + 0x10) = (short)uVar9;
  uVar7 = DAT_2c4794f4;
  uVar1 = (undefined1)uVar11;
  if (uVar9 == 1) {
    if (param_1 == 0) {
      puVar2[1] = 2;
    }
    else {
LAB_2c47944e:
      uVar11 = param_1 & 0xffff;
      if (uVar11 != 2) {
        if (uVar11 == 9) {
          puVar2[0xcd7f] = 0;
          puVar2[0xcd82] = param_4;
          *(undefined2 *)(puVar2 + 0xcd80) = 0x900;
          FUN_2c674668(uVar7,param_2,uVar12);
          uVar7 = DAT_2c4794f8;
          *(short *)(puVar2 + 0xcf80) = (short)(uVar12 + 4);
          FUN_2c46ddf8(uVar7,uVar12 + 4 & 0xffff,0x1b);
          puVar2[2] = puVar2[2] + '\x01';
          return;
        }
        if (uVar11 != 6) {
          if (uVar11 != 0) {
LAB_2c479460:
            if ((param_1 & 0xffff) != 4) {
              return;
            }
            uVar7 = 0xb;
            goto LAB_2c47934a;
          }
LAB_2c479310:
          if (uVar9 < 2) {
            return;
          }
          uVar7 = 1;
          goto LAB_2c47934a;
        }
LAB_2c479420:
        iVar5 = FUN_2c47bbb4();
        if (iVar5 != 0) {
          FUN_2c6741e8(0x711,DAT_2c47950c,DAT_2c479510);
        }
        iVar5 = DAT_2c479504;
        uVar8 = 6;
        *(undefined1 *)(DAT_2c479504 + 0x9a7) = 0;
        iVar6 = iVar5 + 0x9a7;
        *(undefined2 *)(iVar5 + 0x9a8) = 0x600;
        *(undefined1 *)(iVar5 + 0x9aa) = param_4;
        *(undefined1 *)(iVar5 + 0x9ab) = uVar1;
        *(undefined1 *)(iVar5 + 0x9ac) = 0;
        *(undefined2 *)(iVar5 + 0xba8) = 6;
LAB_2c479416:
        FUN_2c46ddf8(iVar6,uVar8,0x1c);
        return;
      }
    }
    puVar2[0xcd82] = param_4;
    puVar2[0xcd7f] = 0;
    uVar7 = DAT_2c4794f4;
    *(undefined2 *)(puVar2 + 0xcd80) = 0x200;
    FUN_2c674668(uVar7,param_2,uVar12);
    uVar7 = DAT_2c4794f8;
    *(short *)(puVar2 + 0xcf80) = (short)(uVar12 + 4);
    FUN_2c46ddf8(uVar7,uVar12 + 4 & 0xffff,0x1b);
  }
  else {
    uVar11 = param_1 & 0xffff;
    if (uVar9 < 2) goto LAB_2c47944e;
    if (uVar11 == 6) goto LAB_2c479420;
    puVar2[0xc36b] = 0;
    *(undefined2 *)(puVar2 + 0xc36c) = 0;
    puVar2[0xc36f] = uVar1;
    puVar2[0xc370] = 0;
    puVar2[0xc36e] = param_4;
    uVar7 = DAT_2c4794e8;
    *(undefined2 *)(puVar2 + 0xc56c) = 6;
    FUN_2c46ddf8(uVar7,6,0x1b);
    if (uVar11 == 0) {
      uVar9 = (uint)*(ushort *)(puVar2 + 0x10);
      goto LAB_2c479310;
    }
    if (uVar11 != 2) goto LAB_2c479460;
  }
  uVar7 = 7;
LAB_2c47934a:
  FUN_2c47bc8c(uVar7);
  return;
}

