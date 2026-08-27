/* FUN_14066cf0 @ 0x14066cf0 */

int FUN_14066cf0(undefined4 param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                int param_6,byte param_7,undefined4 param_8)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint local_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  
  local_2c = *DAT_14066fb8;
  uStack_30 = param_3[3];
  uStack_38 = param_3[1];
  local_3c = *param_3;
  uStack_34 = param_3[2];
  uVar9 = (param_2 & 0x7f) >> 5;
  if (uVar9 == 1) {
    sVar7 = 4;
LAB_14066d94:
    iVar11 = 0;
  }
  else if (uVar9 == 2) {
    iVar11 = FUN_14065cc0(param_3);
    if (iVar11 == 0) {
      iVar11 = FUN_14065d14(param_3);
      if (iVar11 == 0) {
        sVar7 = 0x10;
        iVar11 = 0;
      }
      else {
        local_3c = param_3[3];
        param_2 = param_2 & 0x9f | 0x20;
        sVar7 = 4;
        iVar11 = 0;
      }
    }
    else {
      param_2 = param_2 & 0x9f;
      local_3c = CONCAT22(local_3c._2_2_,*(undefined2 *)(param_3 + 3));
      iVar11 = 0;
      sVar7 = 0;
    }
  }
  else {
    sVar7 = 0;
    if (uVar9 == 0) goto LAB_14066d94;
    iVar11 = 0x40;
    sVar7 = 0;
  }
  iVar3 = FUN_14065c10(param_6,*(ushort *)(param_6 + 0x10) >> 0xe,0x2800);
  if (iVar3 == 0) {
    iVar3 = FUN_14065c10(param_6,*(ushort *)(param_6 + 0x10) >> 0xe,0x2801);
    if (iVar3 == 0) {
      iVar11 = 0x40;
      goto LAB_14066d7a;
    }
    local_44 = param_2 | 0x80;
  }
  else {
    local_44 = param_2 & 0x7f;
  }
  uVar9 = 1;
  if (1 < param_4) {
    uVar10 = 1;
    do {
      if ((param_5 == 0) ||
         ((int)((uint)(*(byte *)(param_5 + (uVar10 >> 3)) >> (uVar10 & 7)) << 0x1f) < 0)) {
        uVar9 = uVar9 + 1 & 0xff;
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 != param_4);
  }
  if (iVar11 == 0) {
    iVar3 = FUN_14073fdc(uVar9 * 0x14,3);
    if (iVar3 == 0) {
      iVar11 = 0x4b;
    }
    else {
      if (param_4 == 0) {
        uVar9 = 0;
      }
      else {
        uVar10 = 0;
        uVar9 = 0;
LAB_14066dd8:
        do {
          if ((param_5 == 0) ||
             ((int)((uint)(*(byte *)(param_5 + (uVar10 >> 3)) >> (uVar10 & 7)) << 0x1f) < 0)) {
            iVar11 = param_6 + uVar10 * 0x14;
            uVar1 = *(ushort *)(iVar11 + 0x12);
            iVar12 = iVar3 + uVar9 * 0x14;
            *(ushort *)(iVar12 + 0x12) = uVar1;
            uVar8 = *(ushort *)(iVar11 + 0x10);
            *(ushort *)(iVar12 + 0x10) = uVar8;
            uVar6 = *(undefined4 *)(iVar11 + 0xc);
            uVar13 = *(undefined4 *)(iVar11 + 4);
            uVar4 = *(undefined4 *)(iVar11 + 8);
            *(undefined4 *)(iVar3 + uVar9 * 0x14) = *(undefined4 *)(param_6 + uVar10 * 0x14);
            *(undefined4 *)(iVar12 + 0xc) = uVar6;
            uVar2 = uVar8 >> 0xe;
            *(undefined4 *)(iVar12 + 4) = uVar13;
            *(undefined4 *)(iVar12 + 8) = uVar4;
            if (uVar2 == 1) {
LAB_14066fa6:
              sVar7 = sVar7 + 4;
              iVar11 = 0;
LAB_14066eac:
              if (0x800 < (uVar1 & 0x7fff)) {
                *(ushort *)(iVar12 + 0x12) = uVar1 & 0x8000 | 0x800;
              }
            }
            else {
              if (uVar2 == 2) {
                iVar5 = FUN_14065cc0(iVar11);
                if (iVar5 != 0) {
                  uVar8 = (ushort)(((uint)*(ushort *)(iVar12 + 0x10) << 0x12) >> 0x12);
                  *(ushort *)(iVar12 + 0x10) = uVar8;
                  uVar1 = *(ushort *)(iVar11 + 0xc);
                  *(ushort *)(iVar3 + uVar9 * 0x14) = uVar1;
                  goto LAB_14066efe;
                }
                iVar5 = FUN_14065d14(iVar11);
                if (iVar5 == 0) {
                  sVar7 = sVar7 + 0x10;
                  uVar8 = *(ushort *)(iVar12 + 0x10);
                  iVar11 = 0;
                  if (uVar8 >> 0xe != 0) goto LAB_14066eaa;
                  goto LAB_14066ef8;
                }
                *(ushort *)(iVar12 + 0x10) =
                     (ushort)(((uint)*(ushort *)(iVar12 + 0x10) << 0x12) >> 0x12) | 0x4000;
                *(undefined4 *)(iVar3 + uVar9 * 0x14) = *(undefined4 *)(iVar11 + 0xc);
                uVar1 = *(ushort *)(iVar12 + 0x12);
                goto LAB_14066fa6;
              }
              if (uVar2 != 0) {
                iVar11 = 0x40;
LAB_14066eaa:
                uVar1 = *(ushort *)(iVar12 + 0x12);
                goto LAB_14066eac;
              }
LAB_14066ef8:
              uVar1 = *(ushort *)(iVar3 + uVar9 * 0x14);
LAB_14066efe:
              if (uVar1 != 0x2900) {
                if ((short)uVar1 < 0x2901) {
                  if ((short)uVar1 < 0x2802) {
                    if ((short)uVar1 < 0x2800) {
LAB_14066f62:
                      if ((*(ushort *)(iVar12 + 0x12) & 0x7fff) < 0x801) goto LAB_14066faa;
                      iVar11 = 0;
                      *(ushort *)(iVar12 + 0x12) = *(ushort *)(iVar12 + 0x12) & 0x8000 | 0x800;
                      goto LAB_14066ec4;
                    }
                    *(undefined2 *)(iVar12 + 0x12) = 0;
                    if (uVar10 != 0) {
                      iVar11 = 0x40;
                      goto LAB_14066e1a;
                    }
                  }
                  else if (1 < uVar1 - 0x2802) goto LAB_14066f62;
                }
                else {
                  if (1 < uVar1 - 0x2902) goto LAB_14066f62;
                  *(ushort *)(iVar12 + 0x10) = uVar8 | 10;
                  *(ushort *)(iVar12 + 0x12) = *(ushort *)(iVar12 + 0x12) & 0x8000 | 2;
                }
                uVar10 = uVar10 + 1 & 0xff;
                uVar9 = uVar9 + 1 & 0xff;
                if (param_4 <= uVar10) break;
                goto LAB_14066dd8;
              }
LAB_14066faa:
              iVar11 = 0;
            }
LAB_14066ec4:
            uVar10 = uVar10 + 1 & 0xff;
            uVar9 = uVar9 + 1 & 0xff;
            if (param_4 <= uVar10) {
              if (iVar11 != 0) goto LAB_14066e1a;
              break;
            }
            if (iVar11 != 0) goto LAB_14066e1a;
            goto LAB_14066dd8;
          }
          uVar10 = uVar10 + 1 & 0xff;
        } while (uVar10 < param_4);
      }
      uVar10 = (uint)param_7;
      if (param_7 < uVar9) {
        uVar10 = uVar9;
      }
      iVar11 = FUN_1406690c(param_1,local_44,&local_3c,uVar10,uVar9,iVar3,sVar7,param_8);
LAB_14066e1a:
      FUN_14074168(iVar3);
    }
  }
LAB_14066d7a:
  if (*DAT_14066fb8 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return iVar11;
}

