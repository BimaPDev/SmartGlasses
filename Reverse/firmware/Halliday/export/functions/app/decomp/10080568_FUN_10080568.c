/* FUN_10080568 @ 0x10080568 */

uint FUN_10080568(int *param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *local_70;
  int local_68;
  int local_64;
  undefined1 uStack_50;
  undefined2 local_4f;
  int local_4b;
  int local_47;
  undefined1 uStack_3c;
  undefined2 local_3b;
  undefined1 local_39;
  int local_37;
  
  puVar3 = DAT_100807b0;
  piVar11 = (int *)param_1[3];
  uVar7 = (uint)*(byte *)((int)piVar11 + 0x10d2);
  local_70 = DAT_100807b0 + uVar7 * 2;
  local_68 = 0;
  do {
    if (*(ushort *)(piVar11 + 0x436) <= uVar7) {
      return 0xffffffff;
    }
    iVar4 = FUN_10121e28(param_1,uVar7);
    if ((((iVar4 == 0) && (uVar6 = (uint)*(ushort *)(local_70 + 0xe), uVar6 != 0xfffe)) &&
        (uVar6 != 0x80dd)) && ((uVar6 != 0x80bb && (uVar6 != 0x80ee)))) {
      local_68 = local_68 + 1;
      if (0x28 < local_68) {
        return 0xffffffff;
      }
      if (-1 < (int)(uVar6 << 0x10)) {
        uVar12 = (uVar6 & 0x3fff) >> 10;
        if (((puVar3[uVar12 + 10] == '\0') || (param_2 != 0)) &&
           (iVar4 = uVar12 * 0x424 + (uVar6 & 0x3ff) + 0x100b,
           uVar7 == (*(ushort *)(DAT_100807b0 + iVar4 * 2) & 0xfff))) {
          local_64 = 5;
          do {
            uVar5 = FUN_10080444(param_1);
            uVar1 = *puVar3;
            piVar8 = (int *)param_1[3];
            FUN_10120a74(param_1,&uStack_50,uVar1,uVar7,0);
            FUN_10120a74(param_1,&uStack_3c,uVar1,uVar5,0);
            local_47 = (int)piVar8 + 0xc6;
            uVar13 = 0;
            uVar6 = (uint)*(byte *)(*piVar8 + 10) * (uint)*(byte *)(*piVar8 + 0xb);
            if (uVar6 == 0x20) {
              local_4b = -1;
            }
            else {
              local_4b = (1 << (uVar6 & 0xff)) + -1;
            }
            local_37 = local_4b;
            for (; uVar13 < *(ushort *)((int)piVar8 + 0x10de); uVar13 = uVar13 + 1) {
              local_4f = (undefined2)uVar13;
              local_3b = local_4f;
              iVar9 = FUN_10120a4a(param_1,&uStack_50,&uStack_3c);
              if (iVar9 != 1) {
                if ((*(char *)(*param_1 + 0x10) != '\0') &&
                   (pcVar10 = *(code **)(*param_1 + 0xc), pcVar10 != (code *)0x0)) {
                  (*pcVar10)(DAT_100807b8,DAT_100807b4,0x126,uVar13,uVar7,uVar5,iVar9);
                }
                FUN_100803d8(param_1,*puVar3,uVar5);
                iVar9 = 0;
                goto LAB_1008069e;
              }
            }
            iVar9 = 1;
LAB_1008069e:
            local_64 = local_64 + -1;
            if (local_64 == 0) {
              return 0;
            }
          } while (iVar9 == 0);
          *(ushort *)(DAT_100807b0 + iVar4 * 2) =
               *(ushort *)(DAT_100807b0 + iVar4 * 2) & 0xf000 | (ushort)uVar5 & 0xfff;
          if (puVar3[uVar12 + 10] != '\0') {
            uVar1 = *puVar3;
            puVar3[uVar12 + 10] = 0;
            iVar4 = FUN_10122008(param_1,uVar1,uVar12);
            uVar2 = *(ushort *)((int)piVar11 + iVar4 * 4 + 0x66);
            FUN_1011ea48((int)piVar11 + 0xc6,0x55,0x200);
            uVar5 = FUN_1011ea48(&uStack_3c,0xff,0x10);
            local_39 = 0x55;
            uVar6 = (uint)*(byte *)(*piVar11 + 0xb) * (uint)*(byte *)(*piVar11 + 10);
            if (uVar6 == 0x20) {
              iVar4 = -1;
            }
            else {
              iVar4 = (iVar9 << (uVar6 & 0xff)) + -1;
            }
            FUN_10121fd8(param_1,uVar1,uVar7,(uVar2 & 0xfff) + 2,iVar4,(int)piVar11 + 0xc6,uVar5);
          }
          iVar4 = FUN_10121fb8(param_1,*puVar3,uVar7);
          if (iVar4 == 0) {
            return uVar7;
          }
          FUN_100803d8(param_1,*puVar3,uVar7);
          *(undefined2 *)(local_70 + 0xe) = 0xfffd;
        }
      }
    }
    uVar7 = uVar7 + 1;
    local_70 = local_70 + 2;
  } while( true );
}

