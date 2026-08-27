/* FUN_2c5dc51c @ 0x2c5dc51c */

int FUN_2c5dc51c(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  int local_34;
  
  uVar5 = registry_lookup(2);
  if (param_1 == (char *)0x0) {
    local_34 = 0;
  }
  else {
    uVar1 = FUN_2c66c4ec();
    uVar7 = (uint)*param_1;
    if (uVar7 == 0) {
      iVar8 = 0;
      iVar10 = 0;
    }
    else {
      iVar8 = 0;
      iVar10 = 0;
      pcVar6 = param_1;
      do {
        if ((uVar7 & 0xf0) == 0xf0) {
          iVar3 = 4;
          pcVar9 = pcVar6 + 4;
          uVar7 = (int)pcVar9 - (int)param_1;
        }
        else {
          if ((uVar7 & 0xe0) == 0xe0) {
            iVar3 = 3;
          }
          else if ((uVar7 & 0xc0) == 0xc0) {
            iVar3 = 2;
          }
          else {
            iVar3 = 1;
          }
          pcVar9 = pcVar6 + iVar3;
          uVar7 = (int)pcVar9 - (int)param_1;
        }
        if (uVar1 < uVar7) break;
        iVar2 = FUN_2c5dc240(pcVar6);
        if (iVar2 != 0) {
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + iVar3;
        }
        uVar7 = (uint)*pcVar9;
        pcVar6 = pcVar9;
      } while (uVar7 != 0);
    }
    iVar3 = FUN_2c66c4ec(uVar5);
    iVar10 = (iVar8 * iVar3 + uVar1 + 1) - iVar10;
    if (param_2 == 0) {
      local_34 = lv_mem_alloc(iVar10);
    }
    else {
      local_34 = FUN_2c47245c(4,iVar10);
    }
    if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5dc518,0x88,DAT_2c5dc514,DAT_2c5dc510,iVar10);
    }
    FUN_2c62c314(local_34,0,iVar10);
    uVar7 = (uint)*param_1;
    if (uVar7 != 0) {
      uVar11 = uVar7 & 0xf0;
      iVar8 = local_34;
      pcVar6 = param_1;
      if (uVar11 == 0xf0) goto LAB_2c5dc468;
LAB_2c5dc3ca:
      if ((uVar7 & 0xe0) == 0xe0) {
        iVar10 = 3;
      }
      else if ((uVar7 & 0xc0) == 0xc0) {
        iVar10 = 2;
      }
      else {
        iVar10 = 1;
      }
      pcVar12 = pcVar6 + iVar10;
      iVar3 = iVar8;
      pcVar9 = pcVar6;
      pcVar6 = pcVar12;
      if ((uint)((int)pcVar12 - (int)param_1) <= uVar1) {
        do {
          iVar8 = FUN_2c5dc240(pcVar9);
          if (iVar8 == 0) {
            if (uVar11 == 0xf0) {
              uVar7 = uVar7 & 7;
              iVar8 = 4;
LAB_2c5dc4b6:
              pcVar12 = pcVar9 + 1;
              do {
                pcVar4 = pcVar12 + 1;
                uVar7 = (int)*pcVar12 & 0x3fU | uVar7 << 6;
                if (((int)*pcVar12 & 0xc0U) != 0x80) goto LAB_2c5dc44a;
                pcVar12 = pcVar4;
              } while (pcVar4 != pcVar9 + iVar8);
            }
            else {
              if ((uVar7 & 0xe0) == 0xe0) {
                uVar7 = uVar7 & 0xf;
                iVar8 = 3;
                goto LAB_2c5dc4b6;
              }
              if ((uVar7 & 0xc0) == 0xc0) {
                uVar7 = uVar7 & 0x1f;
                iVar8 = 2;
                goto LAB_2c5dc4b6;
              }
            }
            iVar8 = iVar3;
            if (((((0x14 < uVar7 - 0xb) && (9 < uVar7)) && (0x1f < uVar7 - 0x80)) &&
                ((0xf < uVar7 - 0x2000 && (5 < uVar7 + DAT_2c5dc508)))) &&
               ((0x10 < uVar7 + DAT_2c5dc50c && ((uVar7 != 0xfffd && (uVar7 != 0xfeff)))))) {
LAB_2c5dc44a:
              iVar8 = iVar3 + iVar10;
              FUN_2c62c0d8(iVar3,pcVar9,iVar10);
            }
          }
          else {
            FUN_2c6435c4(iVar3,uVar5);
            iVar8 = FUN_2c66c4ec(uVar5);
            iVar8 = iVar3 + iVar8;
          }
          uVar7 = (uint)*pcVar6;
          if (uVar7 == 0) {
            return local_34;
          }
          uVar11 = uVar7 & 0xf0;
          if (uVar11 != 0xf0) goto LAB_2c5dc3ca;
LAB_2c5dc468:
          iVar10 = 4;
          pcVar12 = pcVar6 + 4;
          iVar3 = iVar8;
          pcVar9 = pcVar6;
          pcVar6 = pcVar12;
          if (uVar1 < (uint)((int)pcVar12 - (int)param_1)) {
            return local_34;
          }
        } while( true );
      }
    }
  }
  return local_34;
}

