/* FUN_2c4e5c18 @ 0x2c4e5c18 */

undefined4 FUN_2c4e5c18(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_2c;
  
  fVar10 = DAT_2c4e5de8;
  local_2c = *DAT_2c4e5de4;
  *param_1 = *param_2;
  uVar9 = FUN_2c666d78(0x41200000,(float)param_2[1] * fVar10);
  param_1[4] = uVar9;
  if (param_1[5] != 0) {
    FUN_2c4c3340();
  }
  if (0 < (int)param_1[3]) {
    iVar6 = 0;
    puVar4 = param_1;
    do {
      while( true ) {
        puVar4[6] = param_2[2];
        if (puVar4[7] != 0) {
          FUN_2c4c3340();
        }
        iVar6 = iVar6 + 1;
        if (puVar4[8] == 0) break;
        FUN_2c4c3340();
        puVar4 = puVar4 + 3;
        if ((int)param_1[3] <= iVar6) goto LAB_2c4e5c7e;
      }
      puVar4 = puVar4 + 3;
    } while (iVar6 < (int)param_1[3]);
  }
LAB_2c4e5c7e:
  uVar9 = FUN_2c4c32b8(param_1[2] << 2);
  param_1[5] = uVar9;
  if (0 < (int)param_1[3]) {
    iVar6 = 0;
    puVar4 = param_1;
    do {
      iVar6 = iVar6 + 1;
      uVar9 = FUN_2c4c32b8(puVar4[6] << 4);
      puVar4[7] = uVar9;
      uVar9 = FUN_2c4c32b8(puVar4[6] * 0x14);
      puVar4[8] = uVar9;
      uVar9 = DAT_2c4e5dec;
      iVar2 = param_1[3];
      puVar4 = puVar4 + 3;
    } while (iVar6 < iVar2);
    if (0 < iVar2) {
      iVar6 = 0;
      puVar4 = param_1;
      do {
        if (puVar4[6] != 0) {
          puVar5 = param_2;
          uVar8 = 0;
          do {
            if (*(char *)(puVar5 + 3) == '\x01') {
              FUN_2c4e4ff0(puVar5[6],puVar5[7],puVar5[8],puVar5[4],puVar5[5],&local_4c);
            }
            else {
              iVar2 = param_1[1];
              fVar11 = (float)puVar5[4];
              fVar10 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
              uVar7 = in_fpscr & 0xfffffff | (uint)(fVar11 + fVar11 < fVar10) << 0x1f;
              in_fpscr = uVar7 | (uint)(NAN(fVar11 + fVar11) || NAN(fVar10)) << 0x1c;
              if ((byte)(uVar7 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
                if (iVar2 < 0) {
                  iVar2 = iVar2 + 1;
                }
                FUN_2c6741e8(0x42,uVar9,(int)fVar11,iVar2 >> 1);
                FUN_2c4e51a4(puVar5[5],puVar5[6],&local_4c,param_1[1],(int)(float)puVar5[4],0);
              }
              else {
                FUN_2c4e51a4(puVar5[5],puVar5[6],&local_4c,iVar2,(int)fVar11);
              }
            }
            puVar5 = puVar5 + 6;
            puVar1 = (undefined4 *)(puVar4[7] + uVar8 * 0x10);
            uVar7 = uVar8 + 1;
            puVar3 = (undefined4 *)(puVar4[8] + uVar8 * 0x14);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            *puVar3 = local_44;
            puVar3[1] = local_40;
            puVar3[2] = local_3c;
            puVar3[3] = -local_4c;
            puVar3[4] = -local_48;
            uVar8 = uVar7;
          } while (uVar7 < (uint)puVar4[6]);
          iVar2 = param_1[3];
        }
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 3;
      } while (iVar6 < iVar2);
    }
  }
  if (*DAT_2c4e5de4 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

