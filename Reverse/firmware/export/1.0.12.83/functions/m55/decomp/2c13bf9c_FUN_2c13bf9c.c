/* FUN_2c13bf9c @ 0x2c13bf9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13bf9c(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar6 = 0;
  pcVar7 = (char *)(param_1 + 0xc);
  piVar4 = (int *)(param_1 + 0xc4);
  do {
    iVar5 = (uVar6 & 0x3fff) * 4;
    iVar1 = FUN_2c13bc94(iVar5 + 0x500U & 0xffff,piVar4 + -0x10);
    if (iVar1 != 0) {
      uVar3 = 0x355;
      uVar2 = _DAT_2c13c0e0;
LAB_2c13c0ac:
      FUN_2c135988(4,uVar3,_DAT_2c13c0e8,_DAT_2c13c0e4,uVar2);
      return;
    }
    iVar1 = FUN_2c13bc94(iVar5 + 0x540U & 0xffff,piVar4 + -8);
    if (iVar1 != 0) {
      uVar3 = 0x35f;
      uVar2 = _DAT_2c13c0ec;
      goto LAB_2c13c0ac;
    }
    piVar4[-0x2a] = piVar4[-8];
    iVar1 = FUN_2c13bc94(iVar5 + 0x560U & 0xffff,piVar4);
    if (iVar1 != 0) {
      uVar3 = 0x376;
      uVar2 = _DAT_2c13c0f0;
      goto LAB_2c13c0ac;
    }
    if ((param_2 & (1 << (uVar6 & 0xff)) << 8) == 0) {
      if (*pcVar7 == '\x05') {
LAB_2c13c056:
        pcVar7[8] = '\0';
      }
      else {
        pcVar7[8] = '\x01';
        *pcVar7 = '\x05';
      }
    }
    else {
      if (*pcVar7 == '\0') goto LAB_2c13c056;
      *pcVar7 = '\0';
      pcVar7[8] = '\x01';
    }
    iVar5 = *piVar4;
    iVar1 = piVar4[-0x22] - iVar5;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if ((0x1e < iVar1) && (0 < piVar4[-0x22])) {
      func_0x2c13ad14(3,_DAT_2c13c0d0,uVar6,0x1e);
      iVar5 = *piVar4;
    }
    uVar6 = uVar6 + 1;
    piVar4[-0x22] = iVar5;
    pcVar7 = pcVar7 + 1;
    piVar4 = piVar4 + 1;
    if (uVar6 == 8) {
      func_0x2c13ad14(4,_DAT_2c13c0d4,*(undefined4 *)(param_1 + 0x84),
                      *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                      *(undefined4 *)(param_1 + 0x90));
      func_0x2c13ad14(4,_DAT_2c13c0d8,*(undefined4 *)(param_1 + 0xa4),
                      *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),
                      *(undefined4 *)(param_1 + 0xb0));
      func_0x2c13ad14(4,_DAT_2c13c0dc,*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200)
                      ,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),param_2);
      return;
    }
  } while( true );
}

