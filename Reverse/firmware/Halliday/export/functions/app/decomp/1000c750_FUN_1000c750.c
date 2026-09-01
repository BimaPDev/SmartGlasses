/* FUN_1000c750 @ 0x1000c750 */

uint FUN_1000c750(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  undefined1 local_24;
  int iStack_18;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = *DAT_1000c8c0;
  uVar10 = (DAT_1000c8c4 - DAT_1000c8c8) * 0x20 & 0xff00;
  iStack_18 = param_1;
  uStack_10 = param_3;
  uVar6 = FUN_100a5b78(uVar10 | 0x330031,DAT_1000c8d0,DAT_1000c8cc,*(undefined1 *)(param_1 + 3));
  iVar5 = local_14;
  iVar7 = DAT_10015ec4;
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 < 0xd5) {
    if (bVar1 < 0xca) {
      if (bVar1 == 0x17) {
        FUN_100a1b34(0xe);
        if (*DAT_1000c8c0 == local_14) {
          FUN_1012d1ae(0);
          return 0;
        }
      }
      else {
        if (bVar1 == 0x19) goto switchD_1000c7ca_caseD_d2;
        if (bVar1 != 2) goto switchD_1000c7ca_caseD_ce;
        if (*DAT_1000c8c0 == local_14) {
          uVar6 = FUN_100a1690(*(undefined4 *)(param_1 + 8),1,0);
          return uVar6;
        }
      }
    }
    else {
      switch(bVar1) {
      case 0xca:
        if (*DAT_1000c8c0 == local_14) {
          FUN_101368a0(0);
          uVar6 = FUN_100a1b34(0xd);
          return uVar6;
        }
        break;
      case 0xcb:
        if (*DAT_1000c8c0 == local_14) {
          iVar7 = FUN_100bc588();
          if (iVar7 == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            if ((*DAT_100bc7f8 & 0xe) != 4) {
              uVar6 = FUN_100d4440(0xcc,0x4a,0,iVar5);
              return uVar6;
            }
            uVar6 = 0;
          }
          return uVar6;
        }
        break;
      case 0xcc:
        if (*DAT_1000c8c0 == local_14) {
          iVar7 = FUN_100bc588();
          pbVar4 = DAT_100bc83c;
          if (iVar7 == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = *DAT_100bc83c & 0xe;
            if ((*DAT_100bc83c & 0xe) != 0) {
              uVar6 = FUN_10136ac8();
              FUN_100a1b34(0x29);
              if ((*pbVar4 & 0x10) == 0) {
                FUN_100bc4bc(2,*pbVar4 & 0x10);
                *pbVar4 = *pbVar4 & 0xf1;
              }
            }
          }
          return uVar6;
        }
        break;
      case 0xcd:
        if (*DAT_1000c8c0 == local_14) {
          iVar7 = FUN_100bc588();
          if ((iVar7 != 0) && (iVar7 = FUN_10136b1a(), iVar7 != 0)) {
            FUN_100bc4bc(2,1);
            uVar6 = FUN_100d4440(0xcc,0x40,0,iVar5);
            return uVar6;
          }
          return 0xffffffff;
        }
        break;
      default:
        goto switchD_1000c7ca_caseD_ce;
      case 0xcf:
        if (*DAT_1000c8c0 == local_14) goto LAB_1000c80a;
        break;
      case 0xd2:
        goto switchD_1000c7ca_caseD_d2;
      case 0xd4:
        if (*DAT_1000c8c0 == local_14) {
          cVar2 = *(char *)(param_1 + 4);
          local_14 = *DAT_10015ec0;
          FUN_1011ea48(auStack_28,0,0x14,0);
          piVar3 = DAT_10015ecc;
          FUN_100a5b78((iVar7 - DAT_10015ec8) * 0x20 & 0xff00U | 0xb70032,DAT_10015ed4,DAT_10015ed0,
                       cVar2,*DAT_10015ecc);
          uVar8 = FUN_1009e224();
          uVar9 = FUN_1011ea10(DAT_10015ed8);
          uVar6 = FUN_1011ea30(uVar8,DAT_10015ed8,uVar9);
          if (uVar6 != 0) {
            if (*piVar3 == 0) goto LAB_10015e82;
            uVar6 = FUN_10015b7c(1);
          }
          while (*DAT_10015ec0 != local_14) {
            uVar6 = FUN_1013cdc0();
LAB_10015e82:
            if (cVar2 == '\0') {
              uVar8 = FUN_1009e224();
              uVar9 = FUN_1011ea10(DAT_10015edc);
              iVar7 = FUN_1011ea30(uVar8,DAT_10015edc,uVar9);
              uVar6 = 0;
              if (iVar7 != 0) {
                FUN_100158d8();
                local_26 = 0xd608;
                local_24 = 3;
                uVar6 = FUN_1009ece8(DAT_10015ee0,auStack_28);
              }
            }
          }
          return uVar6;
        }
      }
    }
  }
  else {
switchD_1000c7ca_caseD_ce:
    iVar7 = FUN_10016be8(param_1);
    uVar6 = 0;
    if (iVar7 == 0) {
switchD_1000c7ca_caseD_d2:
      if (*DAT_1000c8c0 == local_14) {
        return uVar6;
      }
    }
    else if (*DAT_1000c8c0 == local_14) {
      uVar6 = FUN_100a5b78(uVar10 | 0x7a0011,DAT_1000c8d0,DAT_1000c8d4,*(undefined1 *)(param_1 + 3))
      ;
      return uVar6;
    }
  }
  FUN_1013cdc0();
LAB_1000c80a:
  uVar6 = FUN_100a1b34(2);
  return uVar6;
}

