/* FUN_14064384 @ 0x14064384 */

void FUN_14064384(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined1 uVar10;
  ushort uVar11;
  int iVar12;
  undefined2 *puVar13;
  uint uVar14;
  ushort uVar15;
  undefined2 *local_40;
  undefined4 local_3c;
  short local_38;
  int local_34;
  
  local_34 = *DAT_14064648;
  piVar4 = (int *)FUN_14066108(*(undefined1 *)(param_2 + 0x13));
  cVar2 = *(char *)(param_2 + 0x11);
  if (param_3 == 4) {
    if (param_4 == 0) {
      if ((cVar2 == -0x70) &&
         (uVar14 = (uint)*(byte *)(param_2 + 0x3f), *(short *)(param_2 + uVar14 * 8 + 0x46) == 0)) {
        iVar5 = *(int *)(param_2 + 0x20);
        local_3c = 0;
        if (uVar14 < *(byte *)(param_2 + 0x40)) {
          do {
            if (*(char *)(param_2 + 0x42) == '\0') {
              if (iVar5 != 0) goto LAB_1406468a;
              uVar15 = 0;
            }
            else {
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 4) < 3)) {
                FUN_14073a58(param_2 + 0x20);
                sVar3 = FUN_14073698(iVar5);
                *(short *)(DAT_140648dc + 0x94) = *(short *)(DAT_140648dc + 0x94) - sVar3;
                break;
              }
              *(undefined2 *)(param_2 + uVar14 * 8 + 0x48) =
                   *(undefined2 *)((uint)*(ushort *)(iVar5 + 6) + iVar5 + 0x30);
              FUN_140736fc(iVar5,2);
LAB_1406468a:
              uVar15 = *(ushort *)(iVar5 + 4);
            }
            iVar7 = param_2 + uVar14 * 8;
            uVar11 = *(ushort *)(iVar7 + 0x48);
            if (uVar11 <= uVar15) {
              uVar15 = uVar11;
            }
            *(ushort *)(iVar7 + 0x46) = uVar15;
            *(ushort *)(iVar7 + 0x4a) = uVar15;
            if (*(char *)(param_2 + 0x41) == '\0') {
              if (uVar15 < uVar11) goto LAB_140643d8;
              if (uVar14 != *(byte *)(param_2 + 0x40) - 1) goto LAB_140646bc;
LAB_14064748:
              FUN_14073a58(param_2 + 0x20);
              sVar3 = FUN_14073698(iVar5);
              *(short *)(DAT_140648dc + 0x94) = *(short *)(DAT_140648dc + 0x94) - sVar3;
              FUN_140738bc(iVar5);
              local_3c = iVar5;
            }
            else {
              if ((*(byte *)(param_2 + 0x40) - 1 == uVar14) || (uVar15 < uVar11)) goto LAB_14064748;
LAB_140646bc:
              iVar12 = FUN_14073468(&local_3c,0,uVar15);
              if (iVar12 != 0) {
                if (*(char *)(param_2 + 0x41) != '\0') goto LAB_140643f6;
                goto LAB_140643d8;
              }
              FUN_14073830(iVar5,local_3c,uVar15,0);
              FUN_140736fc(iVar5,uVar15);
            }
            if ((*(char *)(param_2 + 0x41) == '\0') && (*(ushort *)(iVar7 + 0x48) != uVar15))
            goto LAB_140643d8;
            (**(code **)(*piVar4 + 0x24))
                      (param_1,*(undefined1 *)(param_2 + 0x13),*(undefined2 *)(param_2 + 0x16),
                       *(undefined2 *)(iVar7 + 0x44),0,local_3c);
            *(char *)(param_2 + 0x3f) = *(char *)(param_2 + 0x3f) + '\x01';
            FUN_140735a8(local_3c);
            uVar14 = uVar14 + 1 & 0xff;
          } while (uVar14 < *(byte *)(param_2 + 0x40));
        }
        if (*(char *)(param_2 + 0x41) == '\0') {
LAB_140643d8:
          FUN_140738bc(*(undefined4 *)(param_2 + 0x24));
          goto LAB_140643de;
        }
        param_4 = 0;
      }
      else {
        if (*(char *)(param_2 + 0x41) == '\0') goto LAB_140643d8;
        iVar5 = param_2 + (uint)*(byte *)(param_2 + 0x3f) * 8;
        uVar15 = *(ushort *)(iVar5 + 0x4a);
        uVar11 = *(ushort *)(iVar5 + 0x48);
        if (uVar11 <= uVar15) {
          uVar15 = uVar11;
        }
        iVar5 = FUN_14073a58(param_2 + 0x20);
        if (iVar5 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(ushort *)(iVar5 + 4);
          if (uVar15 < uVar11) {
            FUN_14073790(iVar5,uVar11 - uVar15);
            uVar15 = 0;
          }
          else {
            uVar15 = uVar15 - uVar11;
          }
          uVar11 = *(ushort *)(iVar5 + 8);
        }
        iVar7 = DAT_1406464c;
        if (uVar11 < uVar15) {
          local_3c = 0;
          iVar7 = FUN_140737d0(iVar5,&local_3c,0,uVar15);
          if (iVar7 != 0) {
            FUN_140735a8(iVar5);
            param_4 = 0x4b;
            goto LAB_140643f8;
          }
          sVar3 = FUN_14073698(iVar5);
          iVar7 = DAT_140648dc;
          *(short *)(DAT_140648dc + 0x94) = *(short *)(DAT_140648dc + 0x94) - sVar3;
          FUN_140735a8(iVar5);
          sVar3 = FUN_14073698(local_3c);
          *(short *)(iVar7 + 0x94) = sVar3 + *(short *)(iVar7 + 0x94);
          iVar5 = local_3c;
        }
        iVar12 = *(int *)(param_2 + 0x20);
        while (iVar12 != 0) {
          iVar12 = FUN_14073a58(param_2 + 0x20);
          if (iVar12 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(ushort *)(iVar12 + 4);
            if (uVar15 <= *(ushort *)(iVar12 + 4)) {
              uVar11 = uVar15;
            }
            uVar15 = uVar15 - uVar11;
          }
          if (iVar5 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (uint)*(ushort *)(iVar5 + 6) + (uint)*(ushort *)(iVar5 + 4) + 0x30 + iVar5;
          }
          FUN_14073968(iVar12,iVar8,uVar11);
          FUN_1407373c(iVar5,uVar11);
          sVar3 = FUN_14073698(iVar12);
          *(short *)(iVar7 + 0x94) = *(short *)(iVar7 + 0x94) - sVar3;
          FUN_140735a8(iVar12);
          iVar12 = *(int *)(param_2 + 0x20);
        }
        iVar12 = param_2 + (uint)*(byte *)(param_2 + 0x3f) * 8;
        (**(code **)(*piVar4 + 0x24))
                  (param_1,*(undefined1 *)(param_2 + 0x13),*(undefined2 *)(param_2 + 0x16),
                   *(undefined2 *)(iVar12 + 0x44),
                   *(short *)(iVar12 + 0x46) - *(short *)(iVar12 + 0x4a),iVar5);
        sVar3 = FUN_14073698(iVar5);
        *(short *)(iVar7 + 0x94) = *(short *)(iVar7 + 0x94) - sVar3;
        FUN_140735a8(iVar5);
        cVar9 = *(char *)(param_2 + 0x3f) + '\x01';
        *(char *)(param_2 + 0x3f) = cVar9;
        if (*(char *)(param_2 + 0x40) != cVar9) goto LAB_140643de;
      }
    }
  }
  else if (param_3 != 8) {
    if (param_3 == 2) {
LAB_140643de:
      local_40 = (undefined2 *)0x0;
      iVar5 = FUN_14073468(&local_40,7);
      if (iVar5 != 0) {
LAB_140643f6:
        param_4 = 0x4b;
        goto LAB_140643f8;
      }
      uVar1 = (undefined2)local_3c;
      uVar6 = DAT_14064658;
      if (cVar2 == -0x70) {
        uVar14 = (uint)*(byte *)(param_2 + 0x3f);
        iVar5 = uVar14 + 8;
        sVar3 = *(short *)(param_2 + iVar5 * 8 + 6);
        if (sVar3 != 0) goto LAB_14064600;
        if (*(char *)(param_2 + 0x42) == '\0') {
          uVar10 = 0xe;
        }
        else {
          uVar10 = 0x20;
        }
        local_3c = CONCAT31(local_3c._1_3_,uVar10);
        uVar6 = DAT_140648e0;
        if (uVar14 < *(byte *)(param_2 + 0x40)) {
          while( true ) {
            puVar13 = local_40;
            if (local_40 != (undefined2 *)0x0) {
              puVar13 = (undefined2 *)
                        ((int)local_40 +
                        (uint)(ushort)local_40[3] + (uint)(ushort)local_40[2] + 0x30);
            }
            uVar1 = *(undefined2 *)(param_2 + iVar5 * 8 + 4);
            *(char *)puVar13 = (char)uVar1;
            *(char *)((int)puVar13 + 1) = (char)((ushort)uVar1 >> 8);
            FUN_1407373c(local_40,2);
            uVar14 = uVar14 + 1 & 0xff;
            uVar6 = DAT_140648e0;
            if (*(byte *)(param_2 + 0x40) <= uVar14) break;
            iVar5 = uVar14 + 8;
          }
        }
      }
      else if (cVar2 == -0x68) {
        iVar5 = *(byte *)(param_2 + 0x3f) + 8;
        sVar3 = *(short *)(param_2 + iVar5 * 8 + 6);
        if (sVar3 != 0) goto LAB_14064600;
        local_3c = CONCAT31(local_3c._1_3_,8);
        local_3c = CONCAT22(*(undefined2 *)(param_2 + 0x28),(undefined2)local_3c);
        local_38 = *(short *)(param_2 + 0x2a);
        if (*(char *)(param_2 + 0x2e) == '\0') {
          FUN_1407373c(local_40,2);
          uVar6 = DAT_140648e4;
          puVar13 = local_40;
          if (local_40 != (undefined2 *)0x0) {
            puVar13 = (undefined2 *)((int)local_40 + (ushort)local_40[3] + 0x30);
          }
          *puVar13 = *(undefined2 *)(param_2 + 0x2f);
        }
        else {
          FUN_1407373c(local_40,0x10);
          puVar13 = local_40;
          if (local_40 != (undefined2 *)0x0) {
            puVar13 = (undefined2 *)((int)local_40 + (ushort)local_40[3] + 0x30);
          }
          FUN_14065d68(param_2 + 0x2f,*(undefined1 *)(param_2 + 0x2e),puVar13);
          uVar6 = DAT_140648e4;
        }
      }
      else {
        if (cVar2 != -0x78) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_14064654,0x233,DAT_14064650);
        }
        iVar5 = param_2 + (uint)*(byte *)(param_2 + 0x3f) * 8;
        sVar3 = *(short *)(iVar5 + 0x46);
        if (sVar3 == 0) {
          local_3c = CONCAT22(*(undefined2 *)(iVar5 + 0x44),uVar1);
          local_3c = CONCAT31(local_3c._1_3_,10);
        }
        else {
          iVar5 = *(byte *)(param_2 + 0x3f) + 8;
LAB_14064600:
          local_3c = CONCAT22(*(undefined2 *)(param_2 + iVar5 * 8 + 4),uVar1);
          local_3c = CONCAT31(local_3c._1_3_,0xc);
          local_38 = sVar3;
        }
      }
      param_4 = FUN_1406d0c0(param_1,param_2,&local_3c,local_40,uVar6);
      FUN_140735a8(local_40);
    }
    if (param_4 == 0) {
      if (*DAT_14064648 == local_34) {
        return;
      }
      goto LAB_140648c6;
    }
  }
LAB_140643f8:
  iVar5 = DAT_1406464c;
  if (*(int *)(param_2 + 0x20) != 0) {
    do {
      uVar6 = FUN_14073a58(param_2 + 0x20);
      sVar3 = FUN_14073698();
      *(short *)(iVar5 + 0x94) = *(short *)(iVar5 + 0x94) - sVar3;
      FUN_140735a8(uVar6);
    } while (*(int *)(param_2 + 0x20) != 0);
  }
  FUN_1406d4d4(param_2);
  (**(code **)(*piVar4 + 4))
            (param_1,*(undefined1 *)(param_2 + 0x13),*(undefined2 *)(param_2 + 0x16),param_4);
  if (*DAT_14064648 == local_34) {
    FUN_1406cf54(param_1,param_2,1,0);
    return;
  }
LAB_140648c6:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

