/* FUN_2c5e1018 @ 0x2c5e1018 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e1018(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int aiStack_1c [2];
  
  uVar3 = _LAB_2c5e1080;
  pcVar4 = (char *)0x0;
  aiStack_1c[0] = param_1;
  do {
    if (aiStack_1c[0] == 0) {
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
        return 0;
      }
      break;
    }
    pcVar4 = (char *)FUN_2c66c5b6(aiStack_1c,uVar3);
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
  } while (*pcVar4 == '\0');
  iVar1 = _LAB_2c5e1084;
  iVar6 = 0;
  iVar5 = _LAB_2c5e1084;
  do {
    iVar2 = FUN_2c66b624(pcVar4,iVar5);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(iVar6 * 0x2c + iVar1 + 0x24))(aiStack_1c[0]);
      return uVar3;
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x2c;
  } while (iVar6 != 0xc);
  func_0x2c66ae1c(_LAB_2c5e1088);
  return 0xffffffff;
}

