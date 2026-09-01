/* FUN_1005c958 @ 0x1005c958 */

uint FUN_1005c958(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 local_2a;
  char local_29 [5];
  
  iVar2 = FUN_10061948();
  if (param_1 != 0) {
    iVar3 = FUN_1005c3e0(param_1,&local_2a,local_29);
    uVar11 = DAT_1005cb40;
    iVar9 = param_1;
    if ((iVar3 != 0) &&
       (iVar3 = FUN_1005df28(local_2a,local_29[0] + '\n'), uVar11 = DAT_1005cb44, iVar3 != 0)) {
      piVar4 = (int *)FUN_1005c49c(0x10);
      piVar5 = (int *)FUN_1005c49c(0x10);
      iVar1 = DAT_1005cb7c;
      uVar11 = DAT_1005cb4c;
      iVar9 = DAT_1005cb48;
      if ((piVar4 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        iVar9 = *(int *)(iVar3 + 0xc);
        *piVar4 = iVar9;
        piVar4[1] = 0x400;
        piVar4[2] = iVar9;
        *(char *)((int)piVar4 + 0xd) = local_29[0];
        *(undefined1 *)(piVar4 + 3) = local_2a;
        *(char *)((int)piVar5 + 0xd) = local_29[0];
        *(undefined1 *)(piVar5 + 3) = local_2a;
        FUN_1005c6dc(piVar4,iVar1,0x200);
        iVar9 = FUN_1011ea30(iVar1,DAT_1005cb50,8);
        if (iVar9 != 0) {
          FUN_10119dc2(DAT_1005cb54);
          FUN_1011b72e(piVar4);
          FUN_1011b72e(piVar5);
          return 0xffffffea;
        }
        uVar13 = 1;
        uVar14 = *(uint *)(iVar1 + 0xc);
        iVar10 = *(int *)(iVar1 + 0x18);
        piVar4[1] = (uVar14 + 1) * 0x20;
        uVar11 = *(undefined4 *)(iVar1 + 0x1c);
        FUN_10119dc2(DAT_1005cb58,uVar14,*(undefined4 *)(iVar1 + 0x10),uVar14,uVar11);
        iVar3 = 0;
        iVar9 = iVar1;
        do {
          if (uVar14 < uVar13) {
LAB_1005cb02:
            if (iVar10 == iVar3) {
              uVar13 = 0;
            }
            else {
              FUN_10119dc2(DAT_1005cb74,iVar3,iVar10,iVar10,uVar11);
              uVar13 = 0xfffffffe;
            }
LAB_1005ca5e:
            iVar9 = FUN_10061948();
            uVar11 = DAT_1005cb78;
            if (uVar13 != 0) {
              uVar11 = DAT_1005cb60;
            }
            FUN_10119dc2(uVar11,param_1,(uint)(iVar9 - iVar2) / 32000);
            FUN_1011b72e(piVar4);
            FUN_1011b72e(piVar5);
            return uVar13;
          }
          iVar9 = iVar9 + 0x20;
          if (((uVar13 & 0xf) == 0) &&
             (iVar6 = FUN_1005c6dc(piVar4,iVar1,0x200), iVar9 = DAT_1005cb7c, iVar6 < 1)) {
            FUN_10119dc2(DAT_1005cb5c);
            uVar13 = 0xffffffff;
            goto LAB_1005ca5e;
          }
          iVar6 = FUN_1011b6dc(iVar9,0x20);
          iVar15 = 0;
          uVar11 = *(undefined4 *)(iVar9 + 0x1c);
          iVar7 = *piVar4 + *(int *)(iVar9 + 0xc);
          uVar12 = *(uint *)(iVar9 + 0x10);
          *piVar5 = iVar7;
          piVar5[1] = uVar12;
          piVar5[2] = iVar7;
          iVar3 = iVar3 + iVar6;
          FUN_10119dc2(DAT_1005cb64,uVar13,iVar7,uVar12,uVar11);
          for (; uVar12 != 0; uVar12 = uVar12 - uVar8) {
            uVar8 = uVar12;
            if (0x7ff < uVar12) {
              uVar8 = 0x800;
            }
            iVar6 = FUN_1005c6dc(piVar5,DAT_1005cb68);
            if (iVar6 < 1) {
              FUN_10119dc2(DAT_1005cb6c,uVar8,uVar8,uVar12,uVar11);
              break;
            }
            iVar6 = FUN_1011b6dc(DAT_1005cb68,uVar8);
            iVar15 = iVar15 + iVar6;
          }
          if (iVar15 != *(int *)(iVar9 + 0x1c)) {
            FUN_10119dc2(DAT_1005cb70,iVar15);
            if (uVar13 != 0) goto LAB_1005ca5e;
            goto LAB_1005cb02;
          }
          uVar13 = uVar13 + 1;
        } while( true );
      }
    }
    FUN_10119dc2(uVar11,iVar9);
  }
  return 0xffffffea;
}

