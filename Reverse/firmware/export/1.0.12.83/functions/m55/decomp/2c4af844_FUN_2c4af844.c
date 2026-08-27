/* FUN_2c4af844 @ 0x2c4af844 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_2c4af844(uint *param_1,undefined4 *param_2,int param_3,float *param_4,ushort param_5,
                   undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 extraout_r1;
  uint uVar5;
  byte bVar6;
  uint extraout_r2;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uStack_78;
  int iStack_64;
  uint uStack_60;
  uint uStack_5c;
  int aiStack_58 [3];
  uint *puStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  
  uVar12 = (uint)param_5;
  uStack_2c = *_LAB_2c4afb80;
  uStack_60 = 0;
  uStack_5c = 0;
  if ((((*(char *)(param_2 + 4) == '\x01') || (_LAB_2c4afb84 + uVar12 < 4)) ||
      (*(byte *)((int)param_1 + 0xd) - 0x76 < 6)) || (_LAB_2c4afb88 + uVar12 < 2)) {
    puVar4 = (uint *)0x7;
    puVar3 = param_1;
  }
  else {
    puVar3 = (uint *)FUN_2c4ae5a0(param_1,0);
    uVar1 = _LAB_2c4afb90;
    puVar4 = puVar3;
    if (puVar3 == (uint *)0x0) {
      if (((*(byte *)((int)param_1 + 0xd) < 0x19) &&
          (puVar3 = (uint *)((_LAB_2c4afb8c >> (uint)*(byte *)((int)param_1 + 0xd)) << 0x1f),
          (int)puVar3 < 0)) && (*(char *)(param_2 + 4) != '\x03')) {
        *(undefined1 *)(param_2 + 4) = 3;
        puVar3 = (uint *)func_0x2c66ae1c(uVar1);
      }
      if ((*param_1 == 0) || (param_1[1] == 0)) {
        puVar4 = (uint *)0x3;
      }
      else {
        FUN_2c4adaa4(*param_2,param_2[1],&uStack_60,param_4);
        uVar16 = uStack_5c;
        uVar9 = uStack_60;
        FUN_2c4adaa4(param_2[2],param_2[1],&uStack_60);
        uVar15 = uStack_60;
        if ((int)uVar9 <= (int)uStack_60) {
          uVar15 = uVar9;
        }
        if ((int)uVar9 < (int)uStack_60) {
          uVar9 = uStack_60;
        }
        uVar14 = uStack_5c;
        if ((int)uVar16 <= (int)uStack_5c) {
          uVar14 = uVar16;
        }
        if ((int)uVar16 < (int)uStack_5c) {
          uVar16 = uStack_5c;
        }
        FUN_2c4adaa4(param_2[2],param_2[3],&uStack_60);
        if ((int)uStack_60 <= (int)uVar15) {
          uVar15 = uStack_60;
        }
        uVar10 = uStack_60;
        if ((int)uStack_60 < (int)uVar9) {
          uVar10 = uVar9;
        }
        if ((int)uStack_5c <= (int)uVar14) {
          uVar14 = uStack_5c;
        }
        if ((int)uVar16 < (int)uStack_5c) {
          uVar16 = uStack_5c;
        }
        FUN_2c4adaa4(*param_2,param_2[3],&uStack_60,extraout_r1,uVar10);
        iVar2 = _LAB_2c4afb94;
        if ((int)uStack_60 <= (int)uVar15) {
          uVar15 = uStack_60;
        }
        uStack_78 = uStack_60;
        if ((int)uStack_60 < (int)extraout_r2) {
          uStack_78 = extraout_r2;
        }
        uVar15 = uVar15 & ~((int)uVar15 >> 0x1f);
        if ((int)uStack_5c <= (int)uVar14) {
          uVar14 = uStack_5c;
        }
        if ((int)uVar16 < (int)uStack_5c) {
          uVar16 = uStack_5c;
        }
        uVar14 = uVar14 & ~((int)uVar14 >> 0x1f);
        if ((int)*param_1 <= (int)uStack_78) {
          uStack_78 = *param_1;
        }
        if ((int)param_1[1] <= (int)uVar16) {
          uVar16 = param_1[1];
        }
        if (*(int *)(_LAB_2c4afb94 + 0x6d8) != 0) {
          if ((int)uVar15 < (int)*(uint *)(_LAB_2c4afb94 + 0x6e0)) {
            uVar15 = *(uint *)(_LAB_2c4afb94 + 0x6e0);
          }
          if ((int)uVar14 < (int)*(uint *)(_LAB_2c4afb94 + 0x6e4)) {
            uVar14 = *(uint *)(_LAB_2c4afb94 + 0x6e4);
          }
          if ((int)*(uint *)(_LAB_2c4afb94 + 0x6e8) <= (int)uStack_78) {
            uStack_78 = *(uint *)(_LAB_2c4afb94 + 0x6e8);
          }
          if ((int)*(uint *)(_LAB_2c4afb94 + 0x6ec) <= (int)uVar16) {
            uVar16 = *(uint *)(_LAB_2c4afb94 + 0x6ec);
          }
        }
        fStack_44 = *param_4;
        fStack_40 = param_4[1];
        fStack_38 = param_4[3];
        fStack_34 = param_4[4];
        uVar12 = uVar12 + 0xdfff & 0xffff;
        fStack_3c = param_4[2] + (fStack_44 + fStack_40) * fRam2c4afb98;
        fStack_30 = param_4[5] + (fStack_38 + fStack_34) * fRam2c4afb98;
        if (uVar12 < 0xe) {
          uVar12 = *(uint *)(_DAT_2c4afb9c + uVar12 * 4);
        }
        else {
          uVar12 = 0;
        }
        if (*(byte *)((int)param_2 + 0x11) - 1 < 3) {
          uVar9 = (uint)*(byte *)((int)param_2 + 0x11) << 0x14;
        }
        else {
          uVar9 = 0;
        }
        if (*(byte *)(param_2 + 4) < 3) {
          uVar10 = 3 - *(byte *)(param_2 + 4);
        }
        else {
          uVar10 = 0;
        }
        uVar7 = *(byte *)(_LAB_2c4afb94 + 0x6a4) & 3;
        if (uVar7 == 2) {
          uVar5 = 0x2000000;
        }
        else {
          uVar5 = 0;
        }
        uVar8 = *(uint *)(_LAB_2c4afb94 + 0x6c8);
        if (param_3 == 0x1900) {
          uVar13 = 0x10;
        }
        else {
          uVar13 = 0;
        }
        if ((char)param_1[3] == '\0') {
          uVar17 = 0;
        }
        else {
          uVar17 = 0x40;
        }
        puVar4 = (uint *)FUN_2c4ae148(_LAB_2c4afb94,0xa00,
                                      *(uint *)(_LAB_2c4afb94 + 0x734) |
                                      *(uint *)(_LAB_2c4afb94 + 0x730) |
                                      *(uint *)(_LAB_2c4afb94 + 0x76c) | uVar17 |
                                      *(uint *)(_LAB_2c4afb94 + 0x764) | uVar7 | uVar12 | 0x10000000
                                     );
        puVar3 = puVar4;
        if (((((((puVar4 == (uint *)0x0) &&
                (puVar4 = (uint *)FUN_2c4ae148(_LAB_2c4afb94,0xa02,param_6), puVar3 = puVar4,
                puVar4 == (uint *)0x0)) &&
               (puVar4 = (uint *)FUN_2c4ae148(_LAB_2c4afb94,0xa34,
                                              uVar9 | uVar13 | uVar10 | uVar5 | 0x1000000),
               puVar3 = puVar4, puVar4 == (uint *)0x0)) &&
              ((puVar4 = (uint *)FUN_2c4add48(0xa40,&fStack_44), puVar3 = puVar4,
               puVar4 == (uint *)0x0 &&
               (puVar4 = (uint *)FUN_2c4add48(0xa41,&fStack_40), puVar3 = puVar4,
               puVar4 == (uint *)0x0)))) &&
             ((puVar4 = (uint *)FUN_2c4add48(0xa42,&fStack_3c), puVar3 = puVar4,
              puVar4 == (uint *)0x0 &&
              ((puVar4 = (uint *)FUN_2c4add48(0xa43,&fStack_38), puVar3 = puVar4,
               puVar4 == (uint *)0x0 &&
               (puVar4 = (uint *)FUN_2c4add48(0xa44,&fStack_34), puVar3 = puVar4,
               puVar4 == (uint *)0x0)))))) &&
            (puVar4 = (uint *)FUN_2c4add48(0xa45,&fStack_30), puVar3 = puVar4, puVar4 == (uint *)0x0
            )) && ((puVar4 = (uint *)FUN_2c4add48(0xacd,param_4 + 2), puVar3 = puVar4,
                   puVar4 == (uint *)0x0 &&
                   (puVar4 = (uint *)FUN_2c4add48(0xace,param_4 + 5), puVar3 = puVar4,
                   puVar4 == (uint *)0x0)))) {
          if (((int)(param_2[9] << 0x1f) < 0) && (*(char *)(param_2 + 0xc) != '\0')) {
            if (param_2[5] != 0) {
              iStack_64 = param_2[5];
              puVar4 = (uint *)FUN_2c4b4674(3,&iStack_64);
              puVar3 = puVar4;
              if (puVar4 != (uint *)0x0) goto LAB_2c4afce4;
              param_2[5] = 0;
              param_2[6] = 0;
              param_2[7] = 0;
            }
            uVar12 = param_2[10] + 7 & 0xfffffff8;
            aiStack_58[1] = 1;
            aiStack_58[0] = uVar12 + 0x10;
            puVar4 = (uint *)FUN_2c4b4674(2,aiStack_58);
            puVar3 = puVar4;
            if (puVar4 != (uint *)0x0) goto LAB_2c4afce4;
            uVar12 = uVar12 + 8;
            puVar11 = (undefined4 *)((param_2[10] + 7 & 0xfffffff8) + (int)puStack_4c);
            *puVar11 = 0;
            puVar11[1] = 0;
            *puStack_4c = param_2[10] + 7 >> 3 | 0x40000000;
            puStack_4c[1] = 0;
            FUN_2c674668(puStack_4c + 2,param_2[0xb],param_2[10]);
            *(undefined4 *)((int)puStack_4c + uVar12) = 0x70000000;
            puStack_4c[(uVar12 >> 2) + 1] = 0;
            *(undefined1 *)(param_2 + 0xc) = 0;
            param_2[5] = aiStack_58[2];
            param_2[6] = puStack_4c;
            param_2[7] = uStack_48;
            param_2[8] = aiStack_58[0];
          }
          uVar1 = _LAB_2c4afd28;
          *(uint *)(iVar2 + 0x6d0) = uStack_78 - uVar15 | (uVar16 - uVar14) * 0x10000;
          puVar4 = (uint *)FUN_2c4ae148(uVar1,0xa1b,0x11000);
          puVar3 = puVar4;
          if ((((puVar4 == (uint *)0x0) &&
               (puVar4 = (uint *)FUN_2c4ae148(_LAB_2c4afd28,0xa3d,uVar8 >> 6), puVar3 = puVar4,
               puVar4 == (uint *)0x0)) &&
              (puVar4 = (uint *)FUN_2c4ae148(_LAB_2c4afd28,0xa39,uVar15 | uVar14 << 0x10),
              puVar3 = puVar4, puVar4 == (uint *)0x0)) &&
             (puVar4 = (uint *)FUN_2c4ae148(_LAB_2c4afd28,0xa3a,*(undefined4 *)(iVar2 + 0x6d0)),
             puVar3 = puVar4, puVar4 == (uint *)0x0)) {
            if ((int)(param_2[9] << 0x1f) < 0) {
              puVar4 = (uint *)FUN_2c4ade20(param_2[7],param_2[8]);
              puVar3 = puVar4;
            }
            else {
              bVar6 = *(byte *)((int)param_2 + 0x32);
              if ((bVar6 & 0xef) == 0) {
                puVar3 = (uint *)FUN_2c4adc20(param_2[10],param_2[0xb]);
                bVar6 = *(byte *)((int)param_2 + 0x32);
              }
              if ((((bVar6 & 0xef) == 1) &&
                  (puVar4 = (uint *)FUN_2c4ae148(_LAB_2c4afd28,0xa34,_LAB_2c4afd2c | uVar5 | uVar10)
                  , puVar3 = puVar4, puVar4 == (uint *)0x0)) &&
                 (puVar4 = (uint *)FUN_2c4ae148(_LAB_2c4afd28,0xa02,param_2[0x10]), puVar3 = puVar4,
                 puVar4 == (uint *)0x0)) {
                puVar3 = (uint *)FUN_2c4adc20(param_2[0xf],param_2[0xe]);
              }
            }
          }
        }
      }
    }
  }
LAB_2c4afce4:
  if ((*_LAB_2c4afd30 ^ uStack_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(puVar3,*_LAB_2c4afd30 ^ uStack_2c,0);
  }
  return puVar4;
}

