/* FUN_100a5a3c @ 0x100a5a3c */

undefined4 FUN_100a5a3c(undefined4 *param_1,byte *param_2,undefined1 *param_3)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *extraout_r2;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar4;
  
  uVar2 = DAT_100a5b04;
  if (param_3 != (undefined1 *)0x0) {
    iVar6 = 0;
LAB_100a5a4e:
    pbVar3 = param_2;
    param_2 = pbVar3 + 1;
    if (*pbVar3 != 0) {
      if ((*pbVar3 == 0x25) && (*param_2 != 0x25)) {
        bVar1 = false;
        iVar6 = iVar6 + 1;
switchD_100a5ab8_caseD_1:
        while( true ) {
          pbVar4 = pbVar3;
          pbVar3 = pbVar4 + 1;
          uVar5 = (uint)*pbVar4;
          if ((uVar5 == 0) || (bVar1)) break;
          if (0x69 < uVar5) goto LAB_100a5aa4;
          if ((0x57 < uVar5) && ((1 << (uVar5 - 0x58 & 0xff) & uVar2) != 0))
          goto switchD_100a5ab8_caseD_0;
        }
      }
      goto LAB_100a5a4e;
    }
    if (iVar6 == 0) {
      *param_3 = 0;
    }
  }
  return 1;
LAB_100a5aa4:
  if ((uVar5 - 0x70 & 0xff) < 9) {
    switch(uVar5 - 0x70) {
    case 0:
    case 5:
    case 8:
switchD_100a5ab8_caseD_0:
      if ((pbVar4[-1] != 0x25) && (9 < pbVar4[-1] - 0x30)) goto switchD_100a5ab8_caseD_1;
      break;
    default:
      goto switchD_100a5ab8_caseD_1;
    case 3:
      if ((pbVar4[-1] != 0x25) && (9 < pbVar4[-1] - 0x30)) goto switchD_100a5ab8_caseD_1;
      uVar7 = FUN_100a5a1c(*param_1);
      pbVar3 = (byte *)((ulonglong)uVar7 >> 0x20);
      param_3 = extraout_r2;
      if ((int)uVar7 == 0) {
        return 0;
      }
    }
    param_1 = param_1 + 1;
    bVar1 = true;
  }
  goto switchD_100a5ab8_caseD_1;
}

