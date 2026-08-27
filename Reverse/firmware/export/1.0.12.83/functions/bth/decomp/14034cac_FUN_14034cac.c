/* FUN_14034cac @ 0x14034cac */

void FUN_14034cac(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  char unaff_r6;
  undefined2 unaff_r7;
  undefined1 *unaff_r8;
  int extraout_r12;
  undefined8 uVar15;
  
  piVar13 = DAT_14034dcc;
  iVar12 = *DAT_14034dcc;
  if (iVar12 == 0) {
    uVar15 = FUN_1402e55c();
    uVar8 = (undefined1)((ulonglong)uVar15 >> 0x20);
    iVar12 = *piVar13;
    *piVar13 = iVar12 + 1;
    puVar11 = &switchD_14034db4::switchdataD_14034db8;
    switch(param_1) {
    case 1:
      goto switchD_14034db4_caseD_1;
    case 3:
      piVar13 = (int *)((int)uVar15 >> 0x20);
      cVar1 = unaff_r8[6];
      *(short *)((int)piVar13 + iVar12 + 4) = (short)((ulonglong)uVar15 >> 0x20);
      *(char *)((int)piVar13 + iVar12 + 6) = cVar1;
      unaff_r8 = DAT_14044ddc;
      *(char *)((int)piVar13 + extraout_r12 * 0xc + 0xc6e) = (char)param_1;
      *(char *)((int)piVar13 + extraout_r12 * 0xc + 0xc71) = unaff_r6;
      *(undefined2 *)((int)piVar13 + extraout_r12 * 0xc + 0xc6f) = unaff_r7;
      uVar15 = CONCAT44(DAT_14044db8,4);
      puVar11 = DAT_14044dc0;
    case 2:
      FUN_1402a6e8((int)uVar15,0x635,DAT_14044dc8,DAT_14044dc4,puVar11,
                   (int)((ulonglong)uVar15 >> 0x20));
      iVar12 = FUN_140e5148(*(undefined4 *)((int)piVar13 + 0xe42),0xffffffff);
      if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x710,DAT_14044dd4);
      }
      puVar11 = DAT_14044dcc;
      if ((char)*piVar13 == '\0') {
        uVar8 = 4;
        unaff_r6 = '\x01';
        param_1 = 0;
switchD_14034db4_caseD_1:
        uVar7 = *(undefined4 *)((int)piVar13 + 0xe42);
        uVar2 = *puVar11;
        *unaff_r8 = uVar8;
        *(ushort *)puVar11 = (ushort)uVar2 & 0xffef;
        *(char *)piVar13 = unaff_r6;
        FUN_140e52d8(uVar7);
        FUN_14048958(param_1,param_1,DAT_14044dd0);
        return;
      }
    case 0:
      uVar7 = *(undefined4 *)((int)piVar13 + 0xe42);
      *(ushort *)puVar11 = (ushort)*puVar11 | 0x10;
      FUN_140e52d8(uVar7);
      return;
    }
  }
  else {
    *DAT_14034dcc = iVar12 + 1;
    uVar14 = DAT_14034de8;
    uVar5 = DAT_14034de4;
    uVar4 = DAT_14034dd8;
    uVar7 = DAT_14034dd4;
    iVar3 = DAT_14034dd0;
    switch(param_1) {
    case 0:
      *(uint *)(DAT_14034dd0 + 0xc7c) = *(uint *)(DAT_14034dd0 + 0xc7c) | 1;
      FUN_1402a6e8(4,0xccc,DAT_14034de0,DAT_14034ddc,DAT_14034dec,uVar7,
                   *(undefined4 *)(iVar3 + 0xc7c),*(undefined4 *)(iVar3 + 0xc94),
                   *(undefined4 *)(iVar3 + 0xc98));
      iVar12 = *piVar13 + -1;
      *piVar13 = iVar12;
      goto joined_r0x14034d04;
    case 1:
      *(uint *)(DAT_14034dd0 + 0xd0c) = *(uint *)(DAT_14034dd0 + 0xd0c) | 0x80000000;
      uVar6 = *(undefined4 *)(iVar3 + 0xd08);
      uVar10 = *(undefined4 *)(iVar3 + 0xd0c);
      uVar9 = 0xcd3;
      break;
    case 2:
      *(uint *)(DAT_14034dd0 + 0xd14) = *(uint *)(DAT_14034dd0 + 0xd14) | 0x80000000;
      uVar6 = *(undefined4 *)(iVar3 + 0xd10);
      uVar10 = *(undefined4 *)(iVar3 + 0xd14);
      uVar9 = 0xcda;
      uVar14 = uVar5;
      break;
    case 3:
      *(uint *)(DAT_14034dd0 + 0xd1c) = *(uint *)(DAT_14034dd0 + 0xd1c) | 0x80000000;
      uVar6 = *(undefined4 *)(iVar3 + 0xd18);
      uVar10 = *(undefined4 *)(iVar3 + 0xd1c);
      uVar9 = 0xce1;
      uVar14 = uVar4;
      break;
    default:
      *piVar13 = iVar12;
      return;
    }
    FUN_1402a6e8(4,uVar9,DAT_14034de0,DAT_14034ddc,uVar14,uVar7,uVar6,uVar10);
    iVar12 = *piVar13 + -1;
  }
  *piVar13 = iVar12;
joined_r0x14034d04:
  if (iVar12 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}

