/* FUN_1007e320 @ 0x1007e320 */

undefined4 FUN_1007e320(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined1 auStack_30 [4];
  int local_2c [2];
  
  piVar14 = (int *)param_1[3];
  iVar4 = FUN_101208f0(param_1,auStack_30,local_2c,*param_2,*(undefined2 *)(param_2 + 3));
  if (iVar4 != 1) {
    return 0x1000;
  }
  if (*(short *)(*piVar14 + 0x10) == 0) {
    return 0;
  }
  uVar10 = *(uint *)(param_2 + 5);
  if (uVar10 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_2 + 9);
  iVar13 = local_2c[0] * (uint)*(ushort *)(*piVar14 + 0xe) + (uint)*(ushort *)(param_2 + 1);
  iVar15 = *(int *)(param_2 + 0xd);
  FUN_10120588(param_1,iVar13);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    iVar6 = 0;
    do {
      bVar3 = FUN_1011ff48(uVar10);
      uVar12 = (uint)bVar3;
      bVar3 = FUN_1011ff34(uVar10,uVar12);
      if (iVar6 != 0) {
        iVar4 = iVar4 + uVar12 * 0x200;
      }
      iVar6 = iVar6 + uVar12 * 0x200;
      iVar9 = (uint)bVar3 * 0x200;
      uVar5 = FUN_10120910(param_1,iVar6,iVar4);
      iVar7 = *piVar14;
      if (*(char *)(iVar7 + 0x18) == '\x01') {
        if ((uint)*(byte *)(iVar7 + 0x1a) < (uVar5 & *(byte *)(iVar7 + 0x19))) {
LAB_1007e3ce:
          if (*(char *)(*param_1 + 0x10) == '\0') {
            return 0x3000;
          }
          pcVar11 = *(code **)(*param_1 + 0xc);
          if (pcVar11 == (code *)0x0) {
            return 0x3000;
          }
          uVar1 = *(undefined1 *)(iVar7 + 0x1a);
          uVar2 = *(undefined1 *)(iVar7 + 0x19);
          uVar8 = 0x116;
          goto LAB_1007e424;
        }
      }
      else if ((*(char *)(iVar7 + 0x18) == '\x02') &&
              ((uint)*(byte *)(iVar7 + 0x1a) == (uVar5 & *(byte *)(iVar7 + 0x19))))
      goto LAB_1007e3ce;
      iVar4 = iVar4 + iVar9;
      uVar10 = uVar10 >> (uVar12 + bVar3 & 0xff);
      iVar6 = iVar6 + iVar9;
    } while (uVar10 != 0);
  }
  if (iVar15 != 0) {
    uVar10 = FUN_10120910(param_1,(uint)*(byte *)(*piVar14 + 0xb) << 9,iVar15,8);
    iVar4 = *piVar14;
    uVar5 = uVar10 | uVar5;
    if (*(char *)(iVar4 + 0x18) == '\x01') {
      if ((uint)*(byte *)(iVar4 + 0x1a) < (*(byte *)(iVar4 + 0x19) & uVar5)) {
LAB_1007e45a:
        if ((*(char *)(*param_1 + 0x10) != '\0') &&
           (pcVar11 = *(code **)(*param_1 + 0xc), pcVar11 != (code *)0x0)) {
          uVar1 = *(undefined1 *)(iVar4 + 0x1a);
          uVar2 = *(undefined1 *)(iVar4 + 0x19);
          uVar8 = 0x129;
LAB_1007e424:
          (*pcVar11)(DAT_1007e494,DAT_1007e490,uVar8,iVar13,uVar5,uVar2,uVar1);
        }
        return 0x3000;
      }
    }
    else if ((*(char *)(iVar4 + 0x18) == '\x02') &&
            ((*(byte *)(iVar4 + 0x19) & uVar5) == (uint)*(byte *)(iVar4 + 0x1a))) goto LAB_1007e45a;
  }
  return 1;
}

