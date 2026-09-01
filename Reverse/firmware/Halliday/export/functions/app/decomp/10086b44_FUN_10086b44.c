/* FUN_10086b44 @ 0x10086b44 */

int FUN_10086b44(uint param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_2 == (byte *)0x0) {
    iVar1 = 0;
  }
  else {
    if ((param_1 < 0x110000) && ((param_1 & 0xfffff800) != 0xd800)) {
      iVar1 = 0;
      piVar3 = DAT_10086ba8;
      do {
        if (param_3 == iVar1) break;
        iVar1 = iVar1 + 1;
        if (param_1 <= (uint)piVar3[3]) {
          uVar2 = piVar3[2];
          *param_2 = (byte)piVar3[1] | (byte)(param_1 >> (uVar2 & 0xff));
          while (0 < (int)uVar2) {
            uVar2 = uVar2 - 6;
            param_2 = param_2 + 1;
            *param_2 = (byte)(param_1 >> (uVar2 & 0xff)) & 0x3f | 0x80;
          }
          return iVar1;
        }
        piVar3 = piVar3 + 5;
      } while (*piVar3 != 0);
    }
    iVar1 = -1;
  }
  return iVar1;
}

