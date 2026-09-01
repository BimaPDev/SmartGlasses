/* FUN_100a1690 @ 0x100a1690 */

undefined4 FUN_100a1690(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  
  pcVar2 = DAT_100a188c;
  FUN_10084080(0x3c,DAT_100a1888,param_3,param_4,param_1,param_2,param_3);
  FUN_1011dbf4(DAT_100a1890,0xffffffff);
  if (pcVar2[1] == '\0') {
    FUN_10015da4();
    if ((param_1 != 0) && (iVar4 = FUN_1009e224(), iVar4 != 0)) {
      uVar6 = FUN_1009e224();
      iVar4 = FUN_1011ea18(param_1,uVar6);
      if (iVar4 == 0) {
        FUN_100a5b78((DAT_100a1898 - DAT_100a1894) * 0x20 & 0xff00U | 0x6b0031,DAT_100a189c,
                     DAT_100a18a4,param_1);
        uVar6 = 0;
        goto LAB_100a16d0;
      }
    }
    if ((*pcVar2 != '\0') && (param_3 == 0)) {
      uVar3 = (DAT_100a1898 - DAT_100a1894) * 0x20 & 0xff00U | 0x700000;
      uVar6 = DAT_100a18a8;
      goto LAB_100a16c6;
    }
    if ((((1 < (byte)pcVar2[5]) || ((byte)pcVar2[2] == 0xff)) ||
        (pcVar2[(uint)(byte)pcVar2[2] * 8 + 0xc] == '\0')) || (param_3 != 0)) {
      uVar3 = 0xffffffff;
      while( true ) {
        if (param_1 == 0) {
          if (param_2 == 1) {
            uVar3 = (byte)pcVar2[2] + 1;
            uVar3 = uVar3 - (uint)(byte)pcVar2[4] * (uVar3 / (byte)pcVar2[4]);
          }
          else if (param_2 == 2) {
            uVar3 = (uint)(byte)pcVar2[4];
            iVar4 = (byte)pcVar2[2] + uVar3 + -1;
            uVar3 = iVar4 - uVar3 * (iVar4 / (int)uVar3);
          }
          else {
            uVar3 = (uint)(byte)pcVar2[3];
          }
        }
        else {
          pcVar8 = DAT_100a188c;
          for (uVar7 = 0; (int)uVar7 < (int)(uint)(byte)pcVar2[4]; uVar7 = uVar7 + 1) {
            uVar9 = *(undefined4 *)(pcVar8 + 8);
            uVar6 = FUN_1011ea10(param_1);
            iVar4 = FUN_1011ea30(uVar9,param_1,uVar6);
            uVar5 = uVar3;
            if (((iVar4 == 0) && (uVar5 = uVar7, pcVar8[0xc] == '\0')) &&
               (uVar5 = uVar3, param_3 != 0)) {
              uVar5 = uVar7;
            }
            pcVar8 = pcVar8 + 8;
            uVar3 = uVar5;
          }
        }
        uVar5 = (uint)(byte)pcVar2[2];
        uVar7 = uVar3;
        if ((uVar5 == uVar3) || (uVar7 = uVar5, (int)uVar3 < 0)) {
          if (uVar5 < (byte)pcVar2[4]) {
            FUN_100a5b78((DAT_100a1898 - DAT_100a1894) * 0x20 & 0xff00U | 0x980031,DAT_100a189c,
                         DAT_100a18b4,*(undefined4 *)(pcVar2 + (uVar7 + 1) * 8));
          }
          uVar6 = 0xff;
          goto LAB_100a16d0;
        }
        iVar4 = (uVar3 & 0xff) + 1;
        pcVar2[3] = pcVar2[2];
        cVar1 = pcVar2[iVar4 * 8 + 4];
        pcVar2[2] = (char)uVar3;
        if ((cVar1 != '\0') || (param_3 != 0)) break;
        if (param_2 == 4) {
          param_2 = 2;
        }
      }
      FUN_100a5b78((DAT_100a1898 - DAT_100a1894) * 0x20 & 0xff00U | 0xab0031,DAT_100a189c,
                   DAT_100a18b8,*(undefined4 *)(pcVar2 + iVar4 * 8));
      uVar6 = FUN_1009e480(*(undefined4 *)(pcVar2 + iVar4 * 8));
      goto LAB_100a16d0;
    }
    uVar3 = (DAT_100a1898 - DAT_100a1894) * 0x20 & 0xff00;
    FUN_100a5b78(uVar3 | 0x780031,DAT_100a189c,DAT_100a18ac);
    FUN_100a5b78(uVar3 | 0x7a0032,DAT_100a189c,DAT_100a18b0,(uint)(byte)pcVar2[2],
                 pcVar2[(uint)(byte)pcVar2[2] * 8 + 0xc]);
  }
  else {
    uVar3 = (DAT_100a1898 - DAT_100a1894) * 0x20 & 0xff00U | 0x5d0000;
    uVar6 = DAT_100a18a0;
LAB_100a16c6:
    FUN_100a5b78(uVar3 | 0x31,DAT_100a189c,uVar6);
  }
  uVar6 = 0;
LAB_100a16d0:
  FUN_100a1684();
  FUN_100840a8(0x3c,DAT_100a1888);
  return uVar6;
}

