/* FUN_100cad6c @ 0x100cad6c */

void FUN_100cad6c(int param_1,uint param_2)

{
  uint uVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_38 [40];
  
  uVar5 = (uint)*(byte *)(param_1 + 0xd);
  if (param_2 != uVar5) {
    *(char *)(param_1 + 0xd) = (char)param_2;
    if (uVar5 == 0) {
      FUN_10133764();
      uVar2 = extraout_r1;
    }
    else {
      uVar2 = param_2;
      if ((uVar5 == 6) && (*(char *)(param_1 + 2) == '\x01')) {
        FUN_1013cb84(param_1 + 0x60);
        uVar2 = extraout_r1_00;
      }
    }
    uVar1 = DAT_100caf18;
    uVar4 = DAT_100caf14;
    switch(*(undefined1 *)(param_1 + 0xd)) {
    case 0:
      if (*(char *)(param_1 + 2) == '\x04') {
        if ((uVar5 - 7 < 2) || (uVar5 == 1)) {
          FUN_100c9bb8(param_1);
        }
        goto switchD_100cae3e_caseD_3;
      }
      switch(uVar5) {
      case 0:
      case 7:
      case 8:
        uVar1 = DAT_100caf0c;
        uVar4 = DAT_100caf08;
        break;
      case 1:
        FUN_101334dc(param_1);
        if (*(char *)(param_1 + 2) == '\x01') {
          FUN_101148cc(param_1 + 0x60,auStack_38);
        }
        FUN_101334aa(param_1 + 4,0x40);
        FUN_101334d6(DAT_100caf04);
        return;
      case 2:
      case 5:
      case 6:
        if (*(char *)(param_1 + 0xc) != '\0') {
          FUN_100c9c14(param_1);
        }
      case 3:
      case 4:
switchD_100cae3e_caseD_3:
        FUN_100ca13c(param_1);
        return;
      default:
        return;
      }
    default:
      uVar1 = uVar1 | (DAT_100caeec - DAT_100caee8) * 0x20 & 0xff00U;
      uVar5 = param_2;
LAB_100cad9c:
      FUN_100a5b78(uVar1,DAT_100caf00,uVar4,uVar5);
      return;
    case 1:
      FUN_100c6b18();
      FUN_10133baa(param_1);
      return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 8:
      goto switchD_100cadb2_caseD_2;
    case 6:
      if (*(char *)(param_1 + 2) != '\x01') {
        return;
      }
      iVar3 = (uint)*(ushort *)(DAT_100caf10 + 0x1c) * 10;
      break;
    case 7:
      if (*(char *)(param_1 + 2) == '\x04') {
        FUN_100c9c14(param_1);
        return;
      }
      FUN_1013c954(param_1 + 0x38);
      FUN_101334d6(DAT_100caf04);
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      FUN_100cbacc(param_1);
      FUN_100c9c14(param_1);
      if (*(char *)(param_1 + 3) != '\x01') {
        return;
      }
      iVar3 = 5000;
      uVar2 = extraout_r1_01;
    }
    FUN_1013cbaa(param_1 + 0x60,uVar2,iVar3,0);
switchD_100cadb2_caseD_2:
    return;
  }
  uVar1 = DAT_100caef0 | (DAT_100caeec - DAT_100caee8) * 0x20 & 0xff00U;
  uVar4 = DAT_100caefc;
  uVar5 = DAT_100caef8;
  if (param_2 < 9) {
    uVar5 = *(uint *)(DAT_100caef4 + param_2 * 4);
  }
  goto LAB_100cad9c;
}

