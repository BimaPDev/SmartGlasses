/* FUN_100d0ff4 @ 0x100d0ff4 */

int FUN_100d0ff4(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int local_30 [5];
  
  FUN_1011ea48(local_30,0,0x10);
  switch((char)param_1[0x36]) {
  case '\0':
  case '\x03':
    break;
  case '\x01':
  case '\x02':
    local_30[0] = param_1[0x6a];
    break;
  default:
    FUN_100a5b78(DAT_100d1190 | (DAT_100d1180 - DAT_100d117c) * 0x20 & 0xff00U,DAT_100d1184,
                 DAT_100d1194);
    return 8;
  case '\x05':
    piVar7 = (int *)param_1[0x6d];
    if (piVar7 != (int *)0x0) {
      piVar8 = local_30;
      piVar10 = piVar7 + 4;
      do {
        iVar2 = *piVar7;
        iVar3 = piVar7[1];
        piVar7 = piVar7 + 2;
        *piVar8 = iVar2;
        piVar8[1] = iVar3;
        piVar8 = piVar8 + 2;
      } while (piVar7 != piVar10);
    }
  }
  iVar3 = (int)param_1 + 0xf7;
  iVar9 = (int)param_1 + 0x197;
  iVar11 = (int)param_1 + 0x107;
  iVar2 = FUN_100d0c74((int)param_1 + 0x167,iVar11,iVar3,*param_1 + 0x97,*param_1 + 0x9e,iVar9,
                       (int)param_1 + 0x117);
  if (iVar2 == 0) {
    iVar2 = FUN_1013561a(iVar9,iVar3,iVar11,local_30,(int)param_1 + 0xe1,*param_1 + 0x9e,
                         *param_1 + 0x97,auStack_40);
    if (iVar2 == 0) {
      if ((char)param_1[0x36] == '\x05') {
        piVar7 = (int *)param_1[0x6c];
        if (piVar7 == (int *)0x0) {
          FUN_1011ea48(local_30,0,0x10);
        }
        else {
          piVar8 = local_30;
          piVar10 = piVar7 + 4;
          do {
            iVar2 = *piVar7;
            iVar4 = piVar7[1];
            piVar7 = piVar7 + 2;
            *piVar8 = iVar2;
            piVar8[1] = iVar4;
            piVar8 = piVar8 + 2;
          } while (piVar7 != piVar10);
        }
      }
      iVar2 = FUN_1013561a(iVar9,iVar11,iVar3,local_30,(int)param_1 + 0xda,*param_1 + 0x97,
                           *param_1 + 0x9e,auStack_50);
      if (iVar2 == 0) {
        iVar2 = FUN_1011ea30((int)param_1 + 0x187,auStack_50,0x10);
        if (iVar2 != 0) {
          return 0xb;
        }
        iVar2 = FUN_101358ac(param_1,auStack_40);
        if (iVar2 == 0) {
          FUN_10135440(param_1 + 0x35,1);
          return 0;
        }
        return iVar2;
      }
      uVar6 = (DAT_100d1180 - DAT_100d117c) * 0x20 & 0xff00;
      uVar1 = DAT_100d11a4;
      uVar5 = DAT_100d11a0;
    }
    else {
      uVar6 = (DAT_100d1180 - DAT_100d117c) * 0x20 & 0xff00;
      uVar1 = DAT_100d119c;
      uVar5 = DAT_100d1198;
    }
  }
  else {
    uVar6 = (DAT_100d1180 - DAT_100d117c) * 0x20 & 0xff00;
    uVar1 = DAT_100d118c;
    uVar5 = DAT_100d1188;
  }
  FUN_100a5b78(uVar1 | uVar6,DAT_100d1184,uVar5);
  return 8;
}

