/* FUN_2c5141c0 @ 0x2c5141c0 */

void FUN_2c5141c0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x308) != param_1 + 0x2e0) &&
     (*(int *)(param_1 + 0x308) != param_1 + 0x2e8)) {
    return;
  }
  iVar1 = FUN_2c5115bc(*(undefined4 *)(param_1 + 0xc));
  if (*(char *)(param_1 + 1) == '\0') {
    if (1 < (iVar1 - 3U & 0xff)) goto LAB_2c5141fc;
    FUN_2c510b40(*(undefined4 *)(param_1 + 8));
  }
  else {
    FUN_2c510b40(*(undefined4 *)(param_1 + 8));
    FUN_2c510b40(*(undefined4 *)(param_1 + 4));
    *(undefined1 *)(param_1 + 1) = 0;
    if (1 < (iVar1 - 3U & 0xff)) goto LAB_2c5141fc;
  }
  if (param_4 == 0) {
    FUN_2c510bcc(*(undefined4 *)(param_1 + 4),param_2,param_3,1);
  }
  else {
    FUN_2c510bcc(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  }
LAB_2c5141fc:
  iVar2 = FUN_2c510a30(*(undefined4 *)(param_1 + 0x1c));
  if (iVar2 != 0) {
    FUN_2c516a34(param_1 + 0x18);
  }
  if ((((param_3 != 0) && (*(char *)(*(int *)(param_1 + 0x14) + 4) == '\0')) && (iVar1 == 4)) &&
     (iVar1 = FUN_2c5e317c(0x45,0,1,0,0), iVar1 != 0)) {
    registry_lookup(DAT_2c514284);
    FUN_2c5e4068();
    return;
  }
  return;
}

