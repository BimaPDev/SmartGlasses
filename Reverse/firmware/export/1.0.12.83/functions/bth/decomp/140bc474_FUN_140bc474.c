/* FUN_140bc474 @ 0x140bc474 */

undefined4 FUN_140bc474(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_2c;
  
  fVar9 = DAT_140bc638;
  local_2c = *DAT_140bc634;
  *param_1 = *param_2;
  uVar8 = FUN_140d9294(0x41200000,(float)param_2[1] * fVar9);
  param_1[4] = uVar8;
  if (param_1[5] != 0) {
    FUN_140a22dc();
  }
  if (0 < (int)param_1[3]) {
    iVar6 = 0;
    puVar4 = param_1;
    do {
      puVar4[6] = param_2[2];
      if (puVar4[7] != 0) {
        FUN_140a22dc();
      }
      if (puVar4[8] != 0) {
        FUN_140a22dc();
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar6 < (int)param_1[3]);
  }
  uVar8 = FUN_140a2254(param_1[2] << 2);
  param_1[5] = uVar8;
  if (0 < (int)param_1[3]) {
    iVar6 = 0;
    puVar4 = param_1;
    do {
      uVar8 = FUN_140a2254(puVar4[6] << 4);
      iVar6 = iVar6 + 1;
      puVar4[7] = uVar8;
      uVar8 = FUN_140a2254(puVar4[6] * 0x14);
      puVar4[8] = uVar8;
      uVar8 = DAT_140bc63c;
      iVar3 = param_1[3];
      puVar4 = puVar4 + 3;
    } while (iVar6 < iVar3);
    if (0 < iVar3) {
      iVar6 = 0;
      puVar4 = param_1;
      do {
        if (puVar4[6] != 0) {
          uVar7 = 0;
          puVar5 = param_2;
          do {
            if (*(char *)(puVar5 + 3) == '\x01') {
              FUN_140bb9b4(puVar5[6],puVar5[7],puVar5[8],puVar5[4],puVar5[5],&local_4c);
            }
            else {
              iVar3 = param_1[1];
              fVar10 = (float)puVar5[4];
              fVar9 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
              uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 + fVar10 < fVar9) << 0x1f;
              in_fpscr = uVar1 | (uint)(NAN(fVar10 + fVar10) || NAN(fVar9)) << 0x1c;
              if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
                    /* WARNING: Subroutine does not return */
                FUN_1402a64c(0x42,uVar8,(int)fVar10,iVar3 / 2);
              }
              FUN_140bbb94(puVar5[5],puVar5[6],&local_4c,iVar3,(int)fVar10);
            }
            iVar3 = puVar4[8];
            puVar2 = (undefined4 *)(puVar4[7] + uVar7 * 0x10);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar2 = (undefined4 *)(iVar3 + uVar7 * 0x14);
            *puVar2 = local_44;
            puVar2[1] = local_40;
            puVar2[3] = -local_4c;
            puVar2[4] = -local_48;
            puVar2[2] = local_3c;
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 6;
          } while (uVar7 < (uint)puVar4[6]);
          iVar3 = param_1[3];
        }
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 3;
      } while (iVar6 < iVar3);
    }
  }
  if (*DAT_140bc634 == local_2c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

