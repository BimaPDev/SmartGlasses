/* FUN_100b6724 @ 0x100b6724 */

undefined4 FUN_100b6724(uint param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  uVar10 = (DAT_100b6948 - DAT_100b6944) * 0x20 & 0xff00;
  uVar14 = param_1;
  FUN_100a5b78(uVar10 | 0xe70031,DAT_100b6950,DAT_100b694c,*(undefined1 *)(param_1 + 0x297),param_1,
               param_2,param_3);
  uVar3 = DAT_100b6994;
  cVar2 = *(char *)(param_1 + 0x297);
  if (cVar2 == '\x01') {
    uVar10 = uVar10 | 0xeb0000;
    uVar8 = DAT_100b6954;
  }
  else {
    if (-1 < *(int *)(param_1 + 8) << 0x1f) {
LAB_100b6790:
      uVar11 = 0;
      iVar12 = param_1 + 0x294;
      uVar13 = uVar10 | DAT_100b6990;
      do {
        iVar5 = FUN_1005dc4c(uVar11 & 0xff);
        if (iVar5 == 0) {
          return 0xffffffea;
        }
        uVar9 = (uint)*(byte *)(iVar5 + 9);
        if (uVar9 != 0) {
          if (*(int *)(param_1 + 8) << 0x1f < 0) {
            if ((*(char *)(iVar5 + 8) == '\x05') || (uVar9 == 0xfe)) {
              bVar1 = *(byte *)(iVar5 + 10);
              uVar9 = FUN_10131182(*(undefined4 *)(param_1 + 0x18));
              if (bVar1 >> 4 == uVar9) goto LAB_100b6864;
              param_2 = (uint)(*(byte *)(iVar5 + 10) >> 4);
              bVar1 = *(byte *)(iVar5 + 9);
              uVar9 = DAT_100b6978 | uVar10;
              uVar8 = DAT_100b697c;
LAB_100b685e:
              uVar14 = (uint)bVar1;
              FUN_100a5b78(uVar9,DAT_100b6950,uVar8,uVar11,uVar14,param_2);
            }
            else {
              FUN_100a5b78(uVar10 | 0x1100032,DAT_100b6950,DAT_100b6974,uVar11,uVar9,param_2,param_3
                          );
              uVar14 = uVar9;
            }
          }
          else {
            iVar6 = FUN_1005dd4c();
            if (iVar6 == 0) {
              FUN_100a5b78(DAT_100b6960 | uVar10,DAT_100b6950,DAT_100b6964,uVar11,uVar14,param_2,
                           param_3);
            }
            else {
LAB_100b6864:
              if ((*(char *)(param_1 + 0x297) == '\x04') || (*(char *)(param_1 + 0x297) == '\x02'))
              {
                uVar7 = FUN_100b9108(iVar12,*(undefined1 *)(iVar5 + 9));
                uVar14 = uVar7;
                FUN_100a5b78(uVar10 | 0x1220032,DAT_100b6950,DAT_100b6980,
                             *(undefined1 *)(param_1 + 0x297),uVar7);
                if ((uVar7 == 1) || (uVar7 - 5 < 3)) {
                  bVar1 = *(byte *)(iVar5 + 9);
                  uVar9 = uVar10 | 0x1280033;
                  uVar8 = DAT_100b6984;
                  param_2 = uVar7;
                  goto LAB_100b685e;
                }
                if ((uVar7 != 3) ||
                   ((-1 < *(int *)(param_1 + 8) << 0x1f &&
                    (bVar1 = *(byte *)(param_1 + 0x295), uVar9 = FUN_1011bb2e(), bVar1 != uVar9))))
                goto LAB_100b6928;
                uVar9 = (*(int *)(param_1 + 0x2b2) + *(int *)(param_1 + 0x2c6) & 0xfffff000U) -
                        *(int *)(iVar5 + 0xc);
                FUN_100a5b78(uVar13,DAT_100b6950,DAT_100b6988,uVar11,*(undefined1 *)(iVar5 + 9));
                uVar14 = *(uint *)(param_1 + 0x2c6);
                param_2 = uVar9;
                FUN_100a5b78(uVar10 | uVar3,DAT_100b6950,DAT_100b698c,
                             *(undefined4 *)(param_1 + 0x2b2),uVar14,uVar9);
                *(uint *)(param_1 + 0x2c6) =
                     (*(int *)(iVar5 + 0xc) - *(int *)(param_1 + 0x2b2)) + uVar9;
                FUN_100b6664(param_1,iVar5,uVar9);
                uVar8 = 5;
              }
              else {
LAB_100b6928:
                if ((*(uint *)(param_1 + 8) & 0x10) != 0) goto LAB_100b67d4;
                FUN_100b6664(param_1,iVar5);
                uVar8 = 1;
              }
              FUN_100b9094(iVar12,*(undefined1 *)(iVar5 + 9),uVar8);
            }
          }
        }
LAB_100b67d4:
        uVar11 = uVar11 + 1;
        if (uVar11 == 0x1e) {
          cVar2 = *(char *)(param_1 + 0x297);
          if ((cVar2 != '\x04') && (cVar2 != '\x02')) {
            if (cVar2 != '\0') {
              FUN_100a5b78(uVar10 | 0x14e0031,DAT_100b6950,DAT_100b6968,cVar2,uVar14,param_2,param_3
                          );
              FUN_10131274(iVar12);
            }
            uVar4 = DAT_100b6970;
            uVar3 = DAT_100b696c;
            uVar8 = DAT_100b6950;
            *(undefined1 *)(param_1 + 0x297) = 1;
            FUN_100a5b78(uVar3 | uVar10,uVar8,uVar4,1,uVar14,param_2);
          }
          FUN_100b8fe0(iVar12);
          return 0;
        }
      } while( true );
    }
    if (cVar2 == '\x03') {
      uVar10 = uVar10 | 0xf20000;
      uVar8 = DAT_100b6958;
    }
    else {
      if ((cVar2 != '\x04') && (cVar2 != '\x0f')) goto LAB_100b6790;
      uVar10 = uVar10 | 0xf90000;
      uVar8 = DAT_100b695c;
    }
  }
  FUN_100a5b78(uVar10 | 0x31,DAT_100b6950,uVar8,cVar2,uVar14,param_2,param_3);
  return 0;
}

