/* FUN_2c4accc4 @ 0x2c4accc4 */

int FUN_2c4accc4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 < 1) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar5 = param_4;
    do {
      while( true ) {
        piVar1 = (int *)FUN_2c4a8cac(uVar3);
        iVar4 = *piVar1;
        if (param_4 != 0) break;
        iVar2 = FUN_2c4ac850(iVar4,param_2,param_3,0);
        if (iVar2 < 0) {
          return iVar2;
        }
        if (param_2 == 0) goto LAB_2c4acd04;
        FUN_2c4ac780(iVar4,(int)*(char *)(iVar4 + 0x304));
        uVar3 = uVar3 + 1 & 0xff;
        if (param_1 <= (int)uVar3) {
          return iVar2;
        }
      }
      if (*(char *)(iVar4 + 0x305) != '\0') {
        (**(code **)(iVar4 + 0x340))
                  (iVar4,*(undefined1 *)(iVar4 + 0xf0),*(undefined2 *)(iVar4 + 0xf4),
                   *(undefined2 *)(iVar4 + 0xfc),iVar5);
      }
      iVar2 = FUN_2c4ac850(iVar4,param_2,param_3,1);
      if (iVar2 < 0) {
        return iVar2;
      }
LAB_2c4acd04:
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < param_1);
  }
  return iVar2;
}

