/* FUN_100bc270 @ 0x100bc270 */

void FUN_100bc270(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int local_64 [16];
  
  switch(param_2) {
  case 0:
    FUN_100a5b78((DAT_100bc47c - DAT_100bc478) * 0x20 & 0xff00U | 0x370031,DAT_100bc484,DAT_100bc480
                );
    iVar1 = FUN_100ba31c();
    if (iVar1 != 1) {
      return;
    }
    uVar6 = 0;
    uVar3 = 0x1e;
    param_3 = (int *)0x0;
    break;
  case 1:
    FUN_100a5b78((DAT_100bc47c - DAT_100bc478) * 0x20 & 0xff00U | 0x400031,DAT_100bc484,DAT_100bc488
                );
    iVar1 = FUN_100ba31c();
    if (iVar1 != 1) {
      return;
    }
    uVar6 = 0;
    uVar3 = 0x1f;
    param_3 = (int *)0x0;
    break;
  case 2:
    uVar2 = (DAT_100bc47c - DAT_100bc478) * 0x20 & 0xff00U | 0x490000;
    uVar3 = DAT_100bc48c;
    goto LAB_100bc306;
  case 3:
    uVar2 = (DAT_100bc47c - DAT_100bc478) * 0x20 & 0xff00U | 0x510000;
    uVar3 = DAT_100bc490;
LAB_100bc306:
    FUN_100a5b78(uVar2 | 0x31,DAT_100bc484,uVar3);
    local_64[0] = 1;
LAB_100bc310:
    uVar6 = 4;
    uVar3 = 0x20;
    param_3 = local_64;
    break;
  case 4:
    FUN_100a5b78((DAT_100bc47c - DAT_100bc478) * 0x20 & 0xff00U | 0x590031,DAT_100bc484,DAT_100bc494
                );
    local_64[0] = 2;
    goto LAB_100bc310;
  case 5:
    uVar2 = (DAT_100bc47c - DAT_100bc478) * 0x20 & 0xff00;
    FUN_100a5b78(uVar2 | 0x690031,DAT_100bc484,DAT_100bc49c);
    uVar6 = DAT_100bc4ac;
    uVar3 = DAT_100bc484;
    piVar8 = local_64;
    piVar5 = piVar8;
    piVar7 = param_3;
    do {
      iVar1 = *piVar7;
      iVar4 = piVar7[1];
      piVar7 = piVar7 + 2;
      *piVar5 = iVar1;
      piVar5[1] = iVar4;
      piVar5 = piVar5 + 2;
    } while (piVar7 != param_3 + 0xe);
    *piVar5 = *piVar7;
    iVar1 = 0;
    piVar5 = piVar8;
    do {
      if ((*(ushort *)((int)piVar5 + 6) != 0) && (param_3[iVar1 * 3 + 2] != 0)) {
        iVar4 = FUN_100b9d90(*(ushort *)((int)piVar5 + 6) + 1);
        piVar5[2] = iVar4;
        FUN_1011ea48(iVar4,0,*(ushort *)((int)piVar5 + 6) + 1);
        FUN_1011ea40(piVar5[2],param_3[iVar1 * 3 + 2],*(undefined2 *)((int)piVar5 + 6));
      }
      iVar1 = iVar1 + 1;
      FUN_100a5b78(uVar2 | 0x730032,uVar3,uVar6,*piVar5,piVar5[2]);
      piVar5 = piVar5 + 3;
    } while (iVar1 != 5);
    iVar1 = FUN_100bb218(0x22,piVar8,0x3c,DAT_100bc4a0);
    if (0 < iVar1) {
      return;
    }
    iVar1 = 0;
    do {
      if (piVar8[2] != 0) {
        FUN_100b9e04();
      }
      iVar1 = iVar1 + 1;
      piVar8 = piVar8 + 3;
    } while (iVar1 != 5);
    return;
  case 6:
    FUN_100a5b78((DAT_100bc47c - DAT_100bc478) * 0x20 & 0xff00U | 0x610031,DAT_100bc484,DAT_100bc498
                );
    uVar6 = 0;
    uVar3 = 0x21;
    param_3 = (int *)0x0;
    break;
  case 7:
    uVar2 = (DAT_100bc47c - DAT_100bc478) * 0x20 & 0xff00;
    if (*param_3 == -1) {
      FUN_100a5b78(uVar2 | 0x850031,DAT_100bc484,DAT_100bc4a4);
    }
    else {
      FUN_100a5b78(uVar2 | 0x870031,DAT_100bc484,DAT_100bc4a8);
    }
    uVar6 = 4;
    uVar3 = 0x23;
    break;
  default:
    goto switchD_100bc27e_default;
  }
  FUN_100bb198(uVar3,param_3,uVar6);
switchD_100bc27e_default:
  return;
}

