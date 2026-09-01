/* FUN_10122f08 @ 0x10122f08 */

int FUN_10122f08(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)*param_1;
  iVar1 = FUN_10122840(param_1,0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    iVar4 = 0;
    do {
      iVar1 = FUN_10122662(pcVar3,param_1[0xe]);
      if (iVar1 != 0) break;
      uVar2 = (uint)*(byte *)param_1[0xf];
      if (*pcVar3 == '\x04') {
        uVar2 = (~uVar2 & 0xff) >> 7;
      }
      else if (uVar2 == 0xe5) {
        uVar2 = 1;
      }
      else {
        uVar2 = (uint)(uVar2 == 0);
      }
      if (uVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
        if (iVar4 == param_2) {
          return 0;
        }
      }
      iVar1 = FUN_10122d32(param_1,1);
    } while (iVar1 == 0);
  }
  if (iVar1 == 4) {
    iVar1 = 7;
  }
  return iVar1;
}

