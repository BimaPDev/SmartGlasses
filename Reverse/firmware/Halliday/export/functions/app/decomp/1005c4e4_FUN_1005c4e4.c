/* FUN_1005c4e4 @ 0x1005c4e4 */

int * FUN_1005c4e4(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  char local_4a;
  char local_49;
  int local_48 [9];
  
  iVar3 = FUN_1005c3e0(param_1,&local_4a,&local_49);
  if (iVar3 == 0) {
    FUN_10119dc2(DAT_1005c6a4,param_1);
    return (int *)0x0;
  }
  FUN_10119dc2(DAT_1005c6a8,local_4a,local_49);
  cVar2 = local_49;
  if (local_4a == '\0') {
    if ((*DAT_1005c6ac != '\0') && (local_49 == -1)) {
      iVar13 = DAT_1005c6b4 + DAT_1005c6b0;
      piVar4 = (int *)FUN_1005c348(iVar3,local_48,iVar13);
      if (piVar4 != (int *)0x0) {
        piVar4[3] = piVar4[3] + iVar13;
        goto LAB_1005c54c;
      }
    }
    piVar5 = DAT_1005c6c0;
    if (*DAT_1005c6c0 == 0) {
      if (cVar2 == -1) goto LAB_1005c5c0;
    }
    else if (cVar2 == -1) {
      piVar4 = (int *)FUN_1005c348(iVar3,local_48);
      if (piVar4 == (int *)0x0) goto LAB_1005c5c0;
      piVar4[3] = piVar4[3] + *piVar5;
      goto LAB_1005c54c;
    }
    uVar15 = FUN_1005df28(0,cVar2 + '\n');
    puVar1 = DAT_1005c6d8;
    iVar13 = (int)uVar15;
    if (iVar13 == 0) goto LAB_1005c5c0;
    piVar4 = local_48;
    iVar6 = FUN_1011b6c4(*DAT_1005c6d8,(int)((ulonglong)uVar15 >> 0x20),
                         *(undefined4 *)(iVar13 + 0xc),0,piVar4,0x20);
    if (iVar6 < 0) {
      FUN_10119dc2(DAT_1005c6c4,*(undefined4 *)(iVar13 + 0xc),0x20);
      goto LAB_1005c5c0;
    }
    iVar7 = FUN_1011ea30(piVar4,DAT_1005c6cc,8);
    iVar6 = local_48[3];
    if (iVar7 == 0) {
      iVar10 = (local_48[3] + 1) * 0x20;
      iVar7 = FUN_1013cfe2(iVar10);
      uVar8 = DAT_1005c6d4;
      if (iVar7 != 0) {
        iVar9 = FUN_1011b6c4(*puVar1,iVar10,*(undefined4 *)(iVar13 + 0xc),0,iVar7,iVar10);
        if (iVar9 < 0) {
          FUN_10119dc2(DAT_1005c6c4,*(int *)(iVar13 + 0xc) + 0x20,iVar10);
          piVar4 = (int *)0x0;
        }
        else {
          for (iVar10 = 0; iVar10 < iVar6; iVar10 = iVar10 + 1) {
            piVar12 = (int *)(iVar7 + 0x20 + iVar10 * 0x20);
            piVar14 = piVar12 + 8;
            piVar5 = piVar4;
            do {
              iVar9 = *piVar12;
              iVar11 = piVar12[1];
              piVar12 = piVar12 + 2;
              *piVar5 = iVar9;
              piVar5[1] = iVar11;
              piVar5 = piVar5 + 2;
            } while (piVar12 != piVar14);
            iVar9 = FUN_10118ac4(iVar3,piVar4,0xc);
            if (iVar9 == 0) {
              local_48[3] = local_48[3] + *(int *)(iVar13 + 0xc);
              goto LAB_1005c634;
            }
          }
          piVar4 = (int *)0x0;
        }
LAB_1005c634:
        FUN_1013cfd4(iVar7);
        goto LAB_1005c63a;
      }
    }
    else {
      iVar10 = *(int *)(iVar13 + 0xc);
      uVar8 = DAT_1005c6d0;
    }
    FUN_10119dc2(uVar8,iVar10);
  }
  else {
    if (local_4a == '\x03') goto LAB_1005c5c0;
    piVar4 = (int *)FUN_1005ce1c(local_4a,local_49,iVar3,local_48);
LAB_1005c63a:
    if (piVar4 != (int *)0x0) {
LAB_1005c54c:
      piVar5 = (int *)FUN_1005c49c(0x10);
      if (piVar5 == (int *)0x0) {
        FUN_10119dc2(DAT_1005c6bc,DAT_1005c6b8,0x10);
      }
      else {
        iVar13 = piVar4[3];
        iVar3 = piVar4[4];
        *piVar5 = iVar13;
        piVar5[1] = iVar3;
        piVar5[2] = iVar13;
        *(char *)((int)piVar5 + 0xd) = local_49;
        *(char *)(piVar5 + 3) = local_4a;
      }
      return piVar5;
    }
  }
LAB_1005c5c0:
  FUN_10119dc2(DAT_1005c6c8,DAT_1005c6b8,param_1);
  return (int *)0x0;
}

