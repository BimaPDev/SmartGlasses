/* FUN_140670b4 @ 0x140670b4 */

undefined4
FUN_140670b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  undefined4 local_5c;
  ushort local_46;
  undefined1 *local_44;
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = *DAT_140672f8;
  local_44 = (undefined1 *)0x0;
  iVar3 = FUN_14066108(param_2);
  if ((param_4 == (undefined4 *)0x0) || ((code *)*param_4 == (code *)0x0)) {
    local_5c = 0x40;
    uVar2 = local_5c;
  }
  else if ((iVar3 == 0) || (*(char *)(iVar3 + 9) != '\x01')) {
    local_5c = 0x43;
    uVar2 = local_5c;
  }
  else if (*(char *)(DAT_140672fc + 0x96) == '\0') {
    puVar10 = (undefined1 *)0x0;
LAB_14067124:
    piVar11 = *(int **)(DAT_140672fc + 0x84);
    sVar14 = 0;
    if (piVar11 != (int *)0x0) {
      sVar14 = 0;
      do {
        if ((-1 < (int)((uint)*(byte *)((int)piVar11 + 10) << 0x1b)) &&
           (*(char *)((int)piVar11 + 6) != '\0')) {
          uVar4 = (uint)*(ushort *)(piVar11 + 1);
          uVar12 = uVar4 + 1;
          uVar13 = uVar12 + (byte)(*(char *)((int)piVar11 + 6) - 1);
          piVar8 = piVar11;
          do {
            if (*(ushort *)(piVar8 + 3) >> 0xe != 0) goto LAB_1406718e;
            uVar7 = (uint)*(ushort *)((int)piVar8 + 0xe);
            if (uVar7 == 0x2900) {
LAB_140671a0:
              if (puVar10 == (undefined1 *)0x0) {
                iVar3 = FUN_14066390(uVar4,piVar11,piVar8 + 3,auStack_40,&local_46);
                if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1402a64c(0x42,DAT_14067304,0x5ac,DAT_14067300);
                }
                puVar10 = (undefined1 *)0x0;
                sVar14 = sVar14 + 4 + local_46;
              }
              else {
                bVar1 = true;
LAB_140671a4:
                puVar10[-2] = (char)(uVar4 >> 8);
                puVar10[-1] = (char)uVar4;
                uVar5 = *(undefined2 *)((int)piVar8 + 0xe);
                puVar9 = puVar10 + -4;
                *puVar9 = (char)((ushort)uVar5 >> 8);
                puVar10[-3] = (char)uVar5;
                puVar10 = puVar9;
                if (bVar1) {
                  if ((*(ushort *)(piVar8 + 3) >> 0xe == 0) &&
                     (iVar3 = FUN_14066390(uVar4,piVar11,piVar8 + 3,auStack_40,&local_46),
                     iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
                    FUN_1402a64c(0x42,DAT_14067304,0x5ac,DAT_14067300);
                  }
                  uVar4 = (uint)local_46;
                  puVar10 = puVar9 + -uVar4;
                  if (uVar4 != 0) {
                    puVar9 = auStack_40 + uVar4;
                    puVar6 = puVar10;
                    do {
                      puVar9 = puVar9 + -1;
                      *puVar6 = *puVar9;
                      puVar6 = puVar6 + 1;
                    } while (puVar9 != auStack_40);
                  }
                }
              }
            }
            else if (uVar7 < 0x2901) {
              if (uVar7 - 0x2800 < 4) goto LAB_140671a0;
            }
            else if ((uVar7 + 0xd6ff & 0xffff) < 5) {
              if (puVar10 != (undefined1 *)0x0) {
                bVar1 = false;
                goto LAB_140671a4;
              }
              sVar14 = sVar14 + 4;
            }
LAB_1406718e:
            uVar4 = uVar12 & 0xffff;
            piVar8 = (int *)((int)piVar8 + 6);
            if (uVar4 == (uVar13 & 0xffff)) break;
            uVar12 = uVar4 + 1;
          } while( true );
        }
        piVar11 = (int *)*piVar11;
      } while (piVar11 != (int *)0x0);
    }
    local_5c = 0;
    if (puVar10 != (undefined1 *)0x0) {
      if (local_44 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        if ((int)((uint)(byte)local_44[0x2d] << 0x1c) < 0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)(local_44 + (((byte)local_44[0x2d] & 0xf) + 3) * 4);
        }
        puVar9 = local_44 + *(ushort *)(local_44 + 6) + 0x30;
        if (puVar9 == puVar10) {
          *piVar11 = (int)param_4;
          *(short *)(piVar11 + 1) = (short)param_3;
          *(char *)((int)piVar11 + 6) = (char)param_2;
          *(char *)((int)piVar11 + 7) = (char)param_1;
          if (local_44 == (undefined1 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined2 *)(local_44 + 4);
          }
          FUN_1407218c(DAT_1406730c,puVar10,uVar5,DAT_14067308,local_44);
          uVar2 = local_5c;
          goto LAB_140670f0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14067310,0x5db,DAT_14067300,puVar10,puVar9);
    }
    iVar3 = FUN_14073468(&local_44,0,sVar14,0);
    if (iVar3 == 0) {
      puVar10 = local_44;
      if (local_44 != (undefined1 *)0x0) {
        puVar10 = local_44 +
                  (uint)*(ushort *)(local_44 + 6) + (uint)*(ushort *)(local_44 + 4) + 0x30;
      }
      goto LAB_14067124;
    }
    local_5c = 0x11;
    uVar2 = local_5c;
    local_5c = 0x11;
    if (local_44 != (undefined1 *)0x0) {
      FUN_140735a8();
      uVar2 = local_5c;
    }
  }
  else {
    (*(code *)*param_4)(param_1,param_2,param_3,0,DAT_140672fc + 0x97);
    local_5c = 0;
    uVar2 = local_5c;
  }
LAB_140670f0:
  local_5c = uVar2;
  if (*DAT_140672f8 == local_2c) {
    return local_5c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

