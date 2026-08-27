/* FUN_2c4740bc @ 0x2c4740bc */

undefined4 FUN_2c4740bc(int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = *param_2;
  iVar10 = *(int *)(iVar13 + 0x1c);
  if (*(int *)(iVar13 + 0x18) != 0) {
    uVar12 = 0;
    do {
      while (*(byte *)(iVar10 + 8) != 2) {
        if ((*(byte *)(iVar10 + 8) & 0xfd) != 1) goto LAB_2c4741ca;
        iVar11 = *(int *)(iVar10 + 0xc);
        iVar3 = iVar10;
        if (*(int *)(iVar10 + 0x1c) << 0x1d < 0) {
          if (*(int *)((int)param_2 + iVar11) != 0) goto LAB_2c4741ca;
          iVar14 = *(int *)(param_1 + iVar11);
          iVar4 = *(int *)(iVar13 + 0x28);
          uVar2 = *(uint *)(iVar13 + 0x24);
          iVar3 = 0;
          if (*(uint *)(iVar13 + 0x24) == 0) {
            return 0;
          }
          while (uVar8 = uVar2, 1 < uVar8) {
            iVar5 = iVar3 + (uVar8 >> 1);
            iVar9 = *(int *)(iVar4 + iVar5 * 8);
            uVar2 = uVar8 >> 1;
            if (iVar9 <= iVar14) {
              iVar7 = iVar5 + 1;
              iVar5 = *(int *)(iVar4 + iVar5 * 8 + 4);
              if (iVar14 < (*(int *)(iVar4 + iVar7 * 8 + 4) - iVar5) + iVar9) {
                iVar5 = iVar5 + (iVar14 - iVar9);
                goto LAB_2c47414c;
              }
              uVar2 = (uVar8 + iVar3) - iVar7;
              iVar3 = iVar7;
            }
          }
          if (uVar8 == 0) {
            return 0;
          }
          iVar9 = iVar4 + iVar3 * 8;
          iVar3 = *(int *)(iVar4 + iVar3 * 8);
          iVar5 = *(int *)(iVar9 + 4);
          if (iVar14 < iVar3) {
            return 0;
          }
          if ((*(int *)(iVar9 + 0xc) - iVar5) + iVar3 <= iVar14) {
            return 0;
          }
          iVar5 = (iVar14 - iVar3) + iVar5;
LAB_2c47414c:
          if (iVar5 < 0) {
            return 0;
          }
          iVar3 = iVar5 * 0x2c + *(int *)(iVar13 + 0x1c);
        }
        cVar1 = *(char *)(iVar3 + 9);
        iVar4 = *(int *)(iVar3 + 0x10);
        iVar9 = *(int *)(iVar3 + 0x18);
        iVar14 = param_1 + iVar4;
        if (cVar1 == '\x0f') {
          if (*(int *)(iVar14 + 4) == 0) goto LAB_2c4741ca;
          iVar5 = *(int *)((int)param_2 + iVar4 + 4);
          if (iVar9 == 0) {
            if (iVar5 == 0) {
switchD_2c47418e_caseD_3:
              uVar6 = 8;
LAB_2c4741ee:
              FUN_2c674668((int)param_2 + iVar4,iVar14);
              FUN_2c674268(iVar14,0,uVar6);
              if (*(int *)(iVar3 + 0xc) != 0) {
                *(undefined4 *)((int)param_2 + iVar11) = *(undefined4 *)(param_1 + iVar11);
                *(undefined4 *)(param_1 + iVar11) = 0;
              }
              goto LAB_2c474210;
            }
            goto LAB_2c4741ca;
          }
          if (*(int *)(iVar9 + 4) == *(int *)(iVar14 + 4)) goto LAB_2c4741ca;
          if ((iVar5 == 0) || (*(int *)(iVar9 + 4) == iVar5)) goto switchD_2c47418e_caseD_3;
          uVar12 = uVar12 + 1;
          iVar10 = iVar10 + 0x2c;
          if (*(uint *)(iVar13 + 0x18) <= uVar12) {
            return 1;
          }
        }
        else {
          if (cVar1 != '\x10') {
            if (cVar1 == '\x0e') {
              if ((*(int *)(param_1 + iVar4) != iVar9) && (*(int *)((int)param_2 + iVar4) == iVar9))
              goto switchD_2c47418e_caseD_0;
            }
            else if ((*(int *)(param_1 + iVar11) != 0) && (*(int *)((int)param_2 + iVar11) == 0)) {
              switch(cVar1) {
              case '\0':
              case '\x01':
              case '\x02':
              case '\x06':
              case '\a':
              case '\n':
              case '\f':
              case '\r':
                goto switchD_2c47418e_caseD_0;
              case '\x03':
              case '\x04':
              case '\x05':
              case '\b':
              case '\t':
              case '\v':
                goto switchD_2c47418e_caseD_3;
              default:
switchD_2c47418e_default:
                    /* WARNING: Subroutine does not return */
                FUN_2c473f8c();
              }
            }
            goto LAB_2c4741ca;
          }
          if (*(int *)(param_1 + iVar4) == 0) goto LAB_2c4741ca;
          if (*(int *)((int)param_2 + iVar4) == 0) goto switchD_2c47418e_caseD_0;
          iVar13 = FUN_2c4740bc(*(int *)(param_1 + iVar4),*(int *)((int)param_2 + iVar4),param_3);
          if (iVar13 == 0) {
            return 0;
          }
LAB_2c474210:
          iVar13 = *param_2;
          uVar12 = uVar12 + 1;
          iVar10 = iVar10 + 0x2c;
          if (*(uint *)(iVar13 + 0x18) <= uVar12) {
            return 1;
          }
        }
      }
      iVar11 = *(int *)(iVar10 + 0xc);
      iVar3 = *(int *)(param_1 + iVar11);
      if (iVar3 != 0) {
        iVar13 = *(int *)(iVar10 + 0x10);
        if (*(int *)((int)param_2 + iVar11) == 0) {
          *(int *)((int)param_2 + iVar11) = iVar3;
          *(undefined4 *)((int)param_2 + iVar13) = *(undefined4 *)(param_1 + iVar13);
        }
        else {
          switch(*(undefined1 *)(iVar10 + 9)) {
          case 0:
          case 1:
          case 2:
          case 6:
          case 7:
          case 10:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0x10:
            iVar4 = 4;
            break;
          case 3:
          case 4:
          case 5:
          case 8:
          case 9:
          case 0xb:
          case 0xf:
            iVar4 = 8;
            break;
          default:
            goto switchD_2c47418e_default;
          }
          iVar3 = (*(code *)*param_3)(param_3[2],iVar4 * (iVar3 + *(int *)((int)param_2 + iVar11)));
          if (iVar3 == 0) {
            return 0;
          }
          FUN_2c674668(iVar3,*(undefined4 *)(param_1 + iVar13),*(int *)(param_1 + iVar11) * iVar4);
          FUN_2c674668(*(int *)(param_1 + iVar11) * iVar4 + iVar3,
                       *(undefined4 *)((int)param_2 + iVar13),
                       *(int *)((int)param_2 + iVar11) * iVar4);
          if (*(int *)((int)param_2 + iVar13) != 0) {
            (*(code *)param_3[1])(param_3[2]);
          }
          if (*(int *)(param_1 + iVar13) != 0) {
            (*(code *)param_3[1])(param_3[2]);
          }
          *(int *)((int)param_2 + iVar13) = iVar3;
          *(int *)((int)param_2 + iVar11) =
               *(int *)((int)param_2 + iVar11) + *(int *)(param_1 + iVar11);
        }
        *(undefined4 *)(param_1 + iVar11) = 0;
        *(undefined4 *)(param_1 + iVar13) = 0;
        iVar13 = *param_2;
      }
LAB_2c4741ca:
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 0x2c;
    } while (uVar12 < *(uint *)(iVar13 + 0x18));
  }
  return 1;
switchD_2c47418e_caseD_0:
  uVar6 = 4;
  goto LAB_2c4741ee;
}

