/* FUN_2c4f2d00 @ 0x2c4f2d00 */

void FUN_2c4f2d00(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  uint local_54;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  
  local_2c = *DAT_2c4f2fd4;
  uVar10 = *(uint *)(param_2 + 0x30);
  if ((int)(uVar10 << 0xd) < 0) {
    uVar18 = FUN_2c4f2bfc();
    uVar6 = (uint)((ulonglong)uVar18 >> 0x20);
    uVar8 = (uint)uVar18;
    if (uVar8 != 0) goto LAB_2c4f2e18;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  uVar11 = *(uint *)(param_2 + 0x34);
  if (((int)(uVar10 << 0x14) < 0) && (uVar8 = *(uint *)(param_2 + 0x2c), uVar11 < uVar8)) {
    *(uint *)(param_2 + 0x34) = uVar8;
    uVar11 = uVar8;
  }
  uVar6 = *(uint *)(param_1 + 0x70);
  if (uVar6 < param_4 + uVar11) {
    uVar8 = 0xffffffe5;
  }
  else {
    if (((uVar10 & 0x20000) == 0) && (*(uint *)(param_2 + 0x2c) < uVar11)) {
      *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x2c);
      do {
        local_30 = local_30 & 0xffffff00;
        uVar18 = FUN_2c4f2d00(param_1,param_2,&local_30,1);
        uVar6 = (uint)((ulonglong)uVar18 >> 0x20);
        uVar8 = (uint)uVar18;
        if ((int)(uint)uVar18 < 0) goto LAB_2c4f2e18;
      } while (*(uint *)(param_2 + 0x34) < uVar11);
      uVar10 = *(uint *)(param_2 + 0x30);
    }
    if ((int)(uVar10 << 0xb) < 0) {
      uVar8 = *(int *)(param_2 + 0x34) + param_4;
      iVar17 = *(int *)(param_1 + 0x68);
      uVar6 = *(uint *)(iVar17 + 0x48);
      if (uVar8 < *(uint *)(param_2 + 0x2c)) {
        uVar8 = *(uint *)(param_2 + 0x2c);
      }
      uVar11 = *(uint *)(iVar17 + 0x28);
      if (uVar6 == 0) {
        uVar6 = *(uint *)(iVar17 + 0x1c);
      }
      uVar6 = uVar6 >> 3;
      if (0x3fd < uVar11) {
        uVar11 = 0x3fe;
      }
      if (uVar6 <= uVar11) {
        uVar11 = uVar6;
      }
      if (uVar11 < uVar8) {
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x34);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x20);
        uVar18 = FUN_2c4f2ab8(param_1,param_2);
        uVar6 = (uint)((ulonglong)uVar18 >> 0x20);
        uVar10 = *(uint *)(param_2 + 0x30);
        if ((int)uVar18 != 0) {
LAB_2c4f2fac:
          uVar6 = (uint)((ulonglong)uVar18 >> 0x20);
          uVar8 = (uint)uVar18;
          *(uint *)(param_2 + 0x30) = uVar10 | 0x80000;
          goto LAB_2c4f2e18;
        }
        uVar10 = uVar10 & 0xffefffff;
        *(uint *)(param_2 + 0x30) = uVar10;
      }
    }
    if (param_4 != 0) {
      iVar17 = param_2 + 0x40;
      local_54 = param_4;
LAB_2c4f2d8e:
      if (-1 < (int)(uVar10 << 0xe)) {
        if (-1 < (int)(uVar10 << 0xb)) {
          if (*(int *)(param_2 + 0x34) == 0) {
LAB_2c4f2eb8:
            iVar9 = *(int *)(param_1 + 0x68);
            goto LAB_2c4f2eba;
          }
          uVar18 = FUN_2c4f1384(param_1,iVar17,*(undefined4 *)(param_2 + 0x28),
                                *(undefined4 *)(param_2 + 0x2c),*(int *)(param_2 + 0x34) + -1,
                                param_2 + 0x38,param_2 + 0x3c);
          if ((int)uVar18 == 0) {
            FUN_2c674268(*(undefined4 *)(param_2 + 0x4c),0xff,
                         *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
            *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
            goto LAB_2c4f2eb8;
          }
          goto LAB_2c4f2fa8;
        }
LAB_2c4f2e32:
        *(undefined4 *)(param_2 + 0x38) = 0xfffffffe;
        *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x34);
        uVar7 = 0xfffffffe;
        uVar8 = *(uint *)(param_2 + 0x34);
        goto LAB_2c4f2e44;
      }
      iVar9 = *(int *)(param_1 + 0x68);
      uVar8 = *(uint *)(param_2 + 0x3c);
      uVar6 = *(uint *)(iVar9 + 0x1c);
      if (uVar8 != uVar6) {
        uVar7 = *(undefined4 *)(param_2 + 0x38);
        goto LAB_2c4f2da4;
      }
      if ((int)(uVar10 << 0xb) < 0) goto LAB_2c4f2e32;
LAB_2c4f2eba:
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar9 + 0x20);
      uVar8 = *(uint *)(param_2 + 0x34);
      uVar10 = *(uint *)(param_2 + 0x38);
      uVar6 = uVar8 - 1;
      while (uVar18 = FUN_2c4f25f0(param_1,&local_34), (int)uVar18 == 0) {
        uVar18 = (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(int *)(param_1 + 0x68),local_34);
        if ((int)uVar18 == 0) {
          if (uVar8 == 0) {
            *(undefined4 *)(param_2 + 0x3c) = 0;
            *(undefined4 *)(param_2 + 0x38) = local_34;
            uVar10 = *(uint *)(param_2 + 0x30);
            uVar7 = local_34;
            goto LAB_2c4f2e44;
          }
          iVar9 = *(int *)(param_1 + 0x68);
          uVar15 = *(uint *)(iVar9 + 0x1c);
          uVar11 = uVar15 - 8;
          if (uVar6 < uVar11) {
            uVar11 = uVar8;
            if (uVar8 == uVar15) {
              iVar5 = 1;
              iVar9 = 0;
              goto LAB_2c4f3042;
            }
          }
          else {
            iVar5 = FUN_2c672b18(uVar6 / uVar11 - 1);
            uVar13 = (uVar6 + (iVar5 + 2) * -4) / uVar11;
            iVar5 = FUN_2c672b18(uVar13);
            uVar11 = (uVar8 + iVar5 * -4) - uVar13 * uVar11;
            if (uVar11 == uVar15) {
              iVar9 = uVar13 + 1;
              bVar2 = (byte)iVar9;
              bVar3 = (byte)((uint)iVar9 >> 8);
              bVar4 = (byte)((uint)iVar9 >> 0x10);
              bVar1 = (byte)((uint)iVar9 >> 0x18);
              iVar9 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                               bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                             bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                              (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                               bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                             bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                              (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                               bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                             bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                               bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                             bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
              iVar5 = iVar9 + 1;
LAB_2c4f3042:
              iVar14 = 0;
              local_30 = uVar10;
              while( true ) {
                iVar12 = iVar14 * 4;
                uVar18 = FUN_2c4f1298(param_1,iVar17,param_1,1,local_34,iVar12,&local_30,4);
                if ((int)uVar18 != 0) break;
                if (iVar9 != iVar14) {
                  uVar15 = local_30;
                  if ((*(uint *)(*(int *)(param_1 + 0x68) + 0x20) <= local_30) ||
                     (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < iVar12 + 4U)) goto LAB_2c4f30b0;
                  uVar18 = FUN_2c4f0eb4(param_1,0,param_1,4,local_30,iVar12,&local_30,4);
                  if ((int)uVar18 != 0) goto LAB_2c4f2fa8;
                }
                iVar14 = iVar14 + 1;
                if (iVar14 == iVar5) {
                  uVar11 = iVar14 * 4;
                  goto LAB_2c4f3018;
                }
              }
              goto LAB_2c4f2f94;
            }
            if (uVar11 == 0) goto LAB_2c4f3018;
          }
          uVar13 = 0;
          while( true ) {
            uVar15 = *(uint *)(iVar9 + 0x20);
            if ((uVar15 <= uVar10) || (uVar16 = uVar13 + 1, *(uint *)(iVar9 + 0x1c) < uVar16))
            goto LAB_2c4f30b0;
            uVar18 = FUN_2c4f0eb4(param_1,0,param_1,uVar11 - uVar13,uVar10,uVar13,&local_30,1);
            if ((int)uVar18 != 0) goto LAB_2c4f2fa8;
            uVar18 = FUN_2c4f1298(param_1,iVar17,param_1,1,local_34,uVar13,&local_30,1);
            if ((int)uVar18 != 0) break;
            if (uVar11 <= uVar16) goto LAB_2c4f3018;
            iVar9 = *(int *)(param_1 + 0x68);
            uVar13 = uVar16;
          }
        }
LAB_2c4f2f94:
        if ((int)uVar18 != -0x54) break;
        *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
      }
LAB_2c4f2fa8:
      uVar10 = *(uint *)(param_2 + 0x30);
      goto LAB_2c4f2fac;
    }
LAB_2c4f2e0e:
    *(uint *)(param_2 + 0x30) = uVar10 & 0xfff7ffff;
    uVar8 = param_4;
  }
LAB_2c4f2e18:
  if ((*DAT_2c4f2fd4 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar8,uVar6,*DAT_2c4f2fd4 ^ local_2c,0);
  }
  return;
LAB_2c4f30b0:
  uVar18 = CONCAT44(uVar15,0xffffffac);
  goto LAB_2c4f2fa8;
LAB_2c4f3018:
  uVar10 = *(uint *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x3c) = uVar11;
  *(undefined4 *)(param_2 + 0x38) = local_34;
  uVar7 = local_34;
  uVar8 = uVar11;
LAB_2c4f2e44:
  *(uint *)(param_2 + 0x30) = uVar10 | 0x20000;
  uVar6 = *(uint *)(*(int *)(param_1 + 0x68) + 0x1c);
LAB_2c4f2da4:
  uVar10 = uVar6 - uVar8;
  if (local_54 <= uVar6 - uVar8) {
    uVar10 = local_54;
  }
  while( true ) {
    uVar18 = FUN_2c4f1298(param_1,iVar17,param_1,1,uVar7,uVar8,param_3,uVar10);
    uVar6 = (uint)((ulonglong)uVar18 >> 0x20);
    if ((int)uVar18 == 0) break;
    if (((int)uVar18 != -0x54) || (uVar18 = FUN_2c4f2ab8(param_1,param_2), (int)uVar18 != 0))
    goto LAB_2c4f2fa8;
    uVar7 = *(undefined4 *)(param_2 + 0x38);
    uVar8 = *(uint *)(param_2 + 0x3c);
  }
  param_3 = param_3 + uVar10;
  *(uint *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + uVar10;
  *(uint *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + uVar10;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x20);
  local_54 = local_54 - uVar10;
  uVar10 = *(uint *)(param_2 + 0x30);
  if (local_54 == 0) goto LAB_2c4f2e0e;
  goto LAB_2c4f2d8e;
}

