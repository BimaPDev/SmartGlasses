/* FUN_10122fc8 @ 0x10122fc8 */

int FUN_10122fc8(undefined4 *param_1)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)*param_1;
  uVar4 = param_1[0xc];
  if ((param_1[0x13] == -1) || (iVar1 = FUN_10122840(), iVar1 == 0)) {
    do {
      iVar1 = FUN_10122662(pcVar3,param_1[0xe]);
      if (iVar1 != 0) break;
      pbVar2 = (byte *)param_1[0xf];
      if (*pcVar3 == '\x04') {
        *pbVar2 = *pbVar2 & 0x7f;
      }
      else {
        *pbVar2 = 0xe5;
      }
      pcVar3[3] = '\x01';
      if (uVar4 <= (uint)param_1[0xc]) {
        return 0;
      }
      iVar1 = FUN_10122d32(param_1,0);
    } while (iVar1 == 0);
    if (iVar1 == 4) {
      iVar1 = 2;
    }
  }
  return iVar1;
}

