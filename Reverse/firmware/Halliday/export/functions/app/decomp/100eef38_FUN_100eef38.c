/* FUN_100eef38 @ 0x100eef38 */

uint FUN_100eef38(uint param_1,uint param_2,uint param_3,int param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  
  if ((1 << (param_1 & 0xff) & *(uint *)(DAT_100eef80 + 4)) == 0) {
    return 0xffffffea;
  }
  local_18 = param_3;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uVar3 = FUN_100eebe8();
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100eef8c,0x93,DAT_100eef88,DAT_100eef84);
  }
  if (param_4 != 0) {
    uStack_1c = (undefined2)uVar3;
    uStack_1a = 9;
    uStack_19 = 0x11;
    uStack_10 = 0;
    local_18 = local_18 & 0xffff;
    uVar3 = FUN_1009ece8(DAT_100e7d68,&uStack_1c);
    return (uVar3 ^ 1) & 0xff;
  }
  piVar4 = (int *)*DAT_100f1bb8;
  piVar8 = piVar4;
  while( true ) {
    if (piVar8 == (int *)0x0) {
      return 0xfffffffd;
    }
    if (*(ushort *)(piVar8[1] + 0xc) == uVar3) break;
    piVar8 = (int *)*piVar8;
  }
  uVar9 = uStack_14 & 0xff;
  if ((*(byte *)((int)piVar8 + 0x16) & 0x48) != 0x40) {
    return 0xfffffffd;
  }
  uVar2 = (undefined2)uStack_14;
  if (local_18 == 0) {
    if (uVar9 < 0x21) {
      switch(uVar9) {
      case 0:
        *(undefined2 *)((int)piVar8 + 0x1a) = uVar2;
        goto LAB_100f1aa2;
      case 1:
      case 0x10:
        iVar6 = 0;
        iVar7 = (int)(short)((*(short *)((int)DAT_100f1bb8 + 10) + -1 + *(short *)((int)piVar8 + 10)
                             ) - *(short *)((int)piVar8 + 0xe));
        break;
      case 2:
      case 0x20:
        iVar6 = 0;
        iVar7 = (int)(short)(*(short *)((int)DAT_100f1bb8 + 0xe) + 1);
        break;
      default:
switchD_100f1ace_caseD_3:
        sVar5 = (short)DAT_100f1bb8[3] + 1;
        iVar6 = (int)sVar5;
        if ((short)(sVar5 - (short)DAT_100f1bb8[2]) <
            (short)((*(short *)(piVar8 + 3) + 1) - *(short *)(piVar8 + 2))) {
          iVar6 = 0;
        }
        else if ((short)((*(short *)((int)DAT_100f1bb8 + 0xe) + 1) -
                        *(short *)((int)DAT_100f1bb8 + 10)) <
                 (short)((*(short *)((int)piVar8 + 0xe) + 1) - *(short *)((int)piVar8 + 10))) {
          iVar6 = 0;
        }
        iVar7 = 0;
        *(undefined2 *)((int)piVar8 + 0x1a) = uVar2;
        goto LAB_100f1b22;
      case 4:
        goto switchD_100f1ace_caseD_4;
      case 8:
switchD_100f1ace_caseD_8:
        iVar7 = 0;
        iVar6 = (int)(short)(((short)DAT_100f1bb8[2] + -1 + *(short *)(piVar8 + 2)) -
                            *(short *)(piVar8 + 3));
      }
    }
    else {
      if (uVar9 != 0x40) {
        if (uVar9 != 0x80) goto switchD_100f1ace_caseD_3;
        goto switchD_100f1ace_caseD_8;
      }
switchD_100f1ace_caseD_4:
      iVar7 = 0;
      iVar6 = (int)(short)((short)DAT_100f1bb8[3] + 1);
    }
    *(undefined2 *)((int)piVar8 + 0x1a) = uVar2;
    if (uVar9 == 0) goto LAB_100f1aa2;
    uVar1 = *(ushort *)(piVar4[1] + 0xc);
    while (uVar1 != uVar3) {
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) goto LAB_100f1a9a;
LAB_100f1b22:
      uVar1 = *(ushort *)(piVar4[1] + 0xc);
    }
    FUN_100f1034(piVar4,iVar6,iVar7);
  }
  else {
    *(undefined2 *)((int)piVar8 + 0x1a) = uVar2;
    if (uVar9 == 0) goto LAB_100f1aa2;
  }
LAB_100f1a9a:
  FUN_100f19ac(uVar3,0);
LAB_100f1aa2:
  FUN_100a5b78(DAT_100f1bb0 | (DAT_100f1bac - DAT_100f1ba8) * 0x20 & 0xff00U,DAT_100f1bb4,uVar3,
               uStack_14);
  return 0;
}

