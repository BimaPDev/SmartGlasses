/* FUN_2c5ff718 @ 0x2c5ff718 */

/* WARNING: Removing unreachable block (ram,0x2c5ff778) */
/* WARNING: Removing unreachable block (ram,0x2c5ffab4) */
/* WARNING: Removing unreachable block (ram,0x2c5ffb32) */
/* WARNING: Removing unreachable block (ram,0x2c5ff8b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ff718(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  char cVar13;
  short sVar14;
  int iVar15;
  int *piVar16;
  short sVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  
  puVar5 = _LAB_2c5ff994;
  uVar7 = *(uint *)(param_1 + 0x20);
  bVar1 = *(byte *)(param_1 + 1);
  *_LAB_2c5ff994 = uVar7;
  piVar6 = _LAB_2c5ff998;
  if ((int)((uint)bVar1 << 0x1c) < 0) {
    return;
  }
  uVar18 = *(undefined4 *)(*(int *)*_LAB_2c5ff998 + 0x10);
  if (uVar7 == 0) {
LAB_2c5ff8c0:
    FUN_2c5fee80(uVar18);
    uVar7 = FUN_2c5ff678();
    *puVar5 = uVar7;
    if (uVar7 == 0) {
      uVar11 = FUN_2c5fee6c(uVar18);
      uVar7 = FUN_2c5ff678(uVar11,param_1 + 4);
      *puVar5 = uVar7;
      if (uVar7 == 0) {
        uVar18 = FUN_2c5fee44(uVar18);
        uVar7 = FUN_2c5ff678(uVar18,param_1 + 4);
        *puVar5 = uVar7;
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_2c6095f4(param_1);
      if ((*(byte *)(param_1 + 1) & 2) != 0) {
        *puVar5 = 0;
        return;
      }
    }
    uVar7 = *puVar5;
  }
  else if (*(int *)(param_1 + 0x28) == 0) {
    iVar15 = FUN_2c606b94(uVar7,0x2000);
    if (iVar15 == 0) goto LAB_2c5ff8c0;
    uVar7 = *puVar5;
  }
  FUN_2c607654(uVar7,param_1 + 4,1);
  uVar8 = *(uint *)(param_1 + 0x20);
  uVar7 = *puVar5;
  if (uVar8 != uVar7) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    if (uVar8 != 0) {
      FUN_2c602340(uVar8,3,*piVar6);
      if ((*(byte *)(param_1 + 1) & 2) != 0) {
        *puVar5 = 0;
        return;
      }
      uVar7 = *puVar5;
    }
    *(uint *)(param_1 + 0x20) = uVar7;
    *(uint *)(param_1 + 0x24) = uVar7;
    bVar22 = uVar7 != 0;
    uVar7 = 0;
    if (bVar22) {
      uVar18 = FUN_2c629df4();
      *(undefined4 *)(param_1 + 0x40) = uVar18;
      uVar7 = *puVar5;
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
      *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfe00;
      iVar15 = *piVar6;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      FUN_2c602340(uVar7,1,iVar15);
      if ((*(byte *)(param_1 + 1) & 2) != 0) {
        *puVar5 = 0;
        return;
      }
      iVar15 = *piVar6;
      uVar7 = *(byte *)(iVar15 + 5) & 8;
      if ((*(byte *)(iVar15 + 5) & 8) != 0) {
        return;
      }
      iVar12 = FUN_2c606b94(*puVar5,4);
      if ((iVar12 != 0) && (*(uint *)(iVar15 + 0x30) != *puVar5)) {
        iVar12 = FUN_2c606bc0();
        if (*(int *)(iVar15 + 0x30) == 0) {
          if (iVar12 == 0) {
LAB_2c5ffae8:
            FUN_2c602340(*puVar5,0xe,*piVar6);
            bVar1 = *(byte *)(iVar15 + 5);
            if (((int)((uint)bVar1 << 0x1e) < 0) && (*puVar5 = 0, (int)((uint)bVar1 << 0x1e) < 0))
            goto LAB_2c5ff894;
          }
          else {
LAB_2c5ffa98:
            FUN_2c603110(*puVar5);
            if ((*(byte *)(iVar15 + 5) & 2) != 0) {
              *puVar5 = 0;
              goto LAB_2c5ff894;
            }
          }
LAB_2c5ff98c:
          *(uint *)(iVar15 + 0x30) = *puVar5;
        }
        else {
          iVar9 = FUN_2c606bc0();
          if (iVar12 == iVar9) {
            if (iVar12 == 0) {
              if ((*(int *)(iVar15 + 0x30) == 0) ||
                 (FUN_2c602340(*(int *)(iVar15 + 0x30),0xf,*piVar6),
                 (*(byte *)(iVar15 + 5) & 2) == 0)) goto LAB_2c5ffae8;
              *puVar5 = 0;
            }
            else {
              FUN_2c603110(*puVar5);
              if ((*(byte *)(iVar15 + 5) & 2) == 0) goto LAB_2c5ff98c;
              *puVar5 = uVar7;
            }
          }
          else {
            iVar10 = *(int *)(iVar15 + 0x30);
            if (iVar9 == 0) {
              if ((iVar10 == 0) ||
                 (FUN_2c602340(iVar10,0xf,*piVar6), (*(byte *)(iVar15 + 5) & 2) == 0))
              goto LAB_2c5ff96a;
              *puVar5 = 0;
            }
            else if ((iVar10 == 0) ||
                    (FUN_2c602340(iVar10,0x10,*piVar6), (*(byte *)(iVar15 + 5) & 2) == 0)) {
LAB_2c5ff96a:
              if (iVar12 != 0) goto LAB_2c5ffa98;
              FUN_2c602340(*puVar5,0xe,*piVar6);
              if ((*(byte *)(iVar15 + 5) & 2) == 0) goto LAB_2c5ff98c;
              *puVar5 = 0;
            }
            else {
              *puVar5 = uVar7;
            }
          }
        }
      }
LAB_2c5ff894:
      if ((*(byte *)(param_1 + 1) & 2) != 0) {
        *puVar5 = 0;
        return;
      }
      uVar7 = *puVar5;
    }
  }
  sVar3 = *(short *)(param_1 + 4) - *(short *)(param_1 + 8);
  sVar4 = *(short *)(param_1 + 6) - *(short *)(param_1 + 10);
  *(short *)(param_1 + 0x10) = sVar3;
  iVar15 = (int)*(short *)(param_1 + 0x18) + (int)sVar3;
  *(short *)(param_1 + 0x12) = sVar4;
  if (iVar15 < 0) {
    iVar15 = iVar15 + 1;
  }
  *(short *)(param_1 + 0x18) = (short)(iVar15 >> 1);
  iVar15 = (int)*(short *)(param_1 + 0x1a) + (int)sVar4;
  if (iVar15 < 0) {
    iVar15 = iVar15 + 1;
  }
  *(short *)(param_1 + 0x1a) = (short)(iVar15 >> 1);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  if (uVar7 == 0) {
    return;
  }
  FUN_2c602340(uVar7,2,*piVar6);
  if ((*(byte *)(param_1 + 1) & 2) != 0) {
    *puVar5 = 0;
    return;
  }
  bVar1 = *(byte *)(*piVar6 + 5);
  if ((bVar1 & 8) != 0) {
    return;
  }
  FUN_2c609070(param_1);
  bVar2 = *(byte *)(param_1 + 1);
  uVar7 = (uint)bVar2;
  if ((bVar2 & 2) != 0) {
    *puVar5 = bVar1 & 8;
  }
  if ((int)(uVar7 << 0x1e) < 0) {
    return;
  }
  iVar15 = *(int *)(param_1 + 0x28);
  if (iVar15 == 0) {
    if (((int)((uint)*(byte *)(param_1 + 0x3d) << 0x1f) < 0) ||
       (iVar15 = *(int *)(param_1 + 0x20), iVar15 == 0)) {
      if ((bVar2 & 2) != 0) {
        *puVar5 = 0;
      }
      goto LAB_2c5ff90e;
    }
    do {
      iVar12 = FUN_2c606b94(iVar15,0x8000);
      if (iVar12 == 0) {
        sVar3 = *(short *)(param_1 + 0x10);
        piVar16 = (int *)*piVar6;
        uVar7 = (int)sVar3 >> 0x1f;
        uVar8 = (uint)*(byte *)(*piVar16 + 0x1a);
        sVar4 = *(short *)(param_1 + 0x12);
        if (((((int)sVar3 ^ uVar7) - uVar7 & 0xffff) < uVar8) &&
           (uVar7 = (int)sVar4 >> 0x1f, (((int)sVar4 ^ uVar7) - uVar7 & 0xffff) < uVar8)) {
          sVar14 = 0;
          sVar17 = 0;
        }
        else {
          sVar14 = *(short *)(param_1 + 0x38);
          sVar17 = *(short *)(param_1 + 0x3a);
        }
        uVar7 = (uint)(short)(sVar14 + sVar3);
        uVar8 = (uint)(short)(sVar17 + sVar4);
        *(short *)(param_1 + 0x38) = sVar14 + sVar3;
        *(short *)(param_1 + 0x3a) = sVar17 + sVar4;
        uVar19 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) & 0xffff;
        uVar20 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f) & 0xffff;
        uVar21 = (uint)*(byte *)(*piVar16 + 0x1b);
        if ((uVar21 < uVar19) || (uVar21 < uVar20)) {
          *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) | 1;
          if (uVar20 < uVar19) {
            if ((int)uVar7 < 1) {
              cVar13 = '\x01';
            }
            else {
              cVar13 = '\x02';
            }
            *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf | cVar13 << 4;
          }
          else {
            if ((int)uVar8 < 1) {
              cVar13 = '\x04';
            }
            else {
              cVar13 = '\b';
            }
            *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf | cVar13 << 4;
          }
          FUN_2c602340(iVar15,0xc);
          bVar1 = *(byte *)(param_1 + 1);
          goto joined_r0x2c5ffa82;
        }
        break;
      }
      iVar15 = FUN_2c6041d4(iVar15);
    } while (iVar15 != 0);
    bVar1 = *(byte *)(param_1 + 1);
joined_r0x2c5ffa82:
    uVar7 = (uint)bVar1;
    if ((int)(uVar7 << 0x1e) < 0) {
      *puVar5 = 0;
    }
    if ((uVar7 & 3) >> 1 != 0) {
      return;
    }
    iVar15 = *(int *)(param_1 + 0x28);
  }
  else {
    if ((bVar2 & 2) == 0) {
      return;
    }
    *puVar5 = (uVar7 & 3) >> 1;
  }
  if (iVar15 != 0) {
    return;
  }
LAB_2c5ff90e:
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_2c629e10(*(undefined4 *)(param_1 + 0x40));
    if (*(ushort *)(*(int *)*piVar6 + 0x1c) < uVar7) {
      FUN_2c602340(*puVar5,5);
      if ((*(byte *)(param_1 + 1) & 2) != 0) {
        *puVar5 = 0;
        return;
      }
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
      uVar18 = FUN_2c629df4();
      *(undefined4 *)(param_1 + 0x44) = uVar18;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      return;
    }
    uVar7 = (uint)*(byte *)(param_1 + 1);
  }
  if (((int)(uVar7 << 0x1f) < 0) &&
     (uVar7 = FUN_2c629e10(*(undefined4 *)(param_1 + 0x44)),
     *(ushort *)(*(int *)*piVar6 + 0x1e) < uVar7)) {
    FUN_2c602340(*puVar5,6);
    if ((*(byte *)(param_1 + 1) & 2) == 0) {
      uVar18 = FUN_2c629df4();
      *(undefined4 *)(param_1 + 0x44) = uVar18;
    }
    else {
      *puVar5 = 0;
    }
  }
  return;
}

