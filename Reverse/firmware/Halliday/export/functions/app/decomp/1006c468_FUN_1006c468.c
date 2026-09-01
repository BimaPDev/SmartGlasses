/* FUN_1006c468 @ 0x1006c468 */

int FUN_1006c468(char *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  int local_14;
  
  pcVar4 = param_1;
  local_14 = param_2;
  if (((param_1 == (char *)0x0) || (uVar1 = FUN_1011ea10(), uVar1 < 2)) || (*param_1 != '/')) {
    uVar1 = (DAT_1006c510 - DAT_1006c50c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1006c514 | uVar1,DAT_1006c51c,DAT_1006c518,uVar1,pcVar4);
    iVar3 = -0x16;
  }
  else {
    iVar3 = FUN_1006b9f4(&local_14,param_1,0);
    if (iVar3 < 0) {
      FUN_100a5b78((DAT_1006c510 - DAT_1006c50c) * 0x20 & 0xff00U | 0x29c0011,DAT_1006c51c,
                   DAT_1006c520,DAT_1006c50c,pcVar4);
    }
    else {
      pcVar2 = *(code **)(*(int *)(local_14 + 0x1c) + 0x40);
      if (pcVar2 == (code *)0x0) {
        iVar3 = -0x86;
      }
      else {
        iVar3 = (*pcVar2)(local_14,param_1,param_2);
        if ((iVar3 != -2) && (iVar3 < 0)) {
          FUN_100a5b78((DAT_1006c510 - DAT_1006c50c) * 0x20 & 0xff00U | 0x2a80011,DAT_1006c51c,
                       DAT_1006c524,iVar3,pcVar4);
        }
      }
    }
  }
  return iVar3;
}

