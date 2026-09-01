/* FUN_10119cd2 @ 0x10119cd2 */

int FUN_10119cd2(byte *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_r2;
  byte *extraout_r3;
  int iVar2;
  byte *pbVar3;
  
  if ((uint)(param_2 << 1) <= param_4 + 1U) {
    iVar2 = param_3 + 1;
    pbVar3 = param_1 + param_2;
    do {
      if (param_1 == pbVar3) {
        *(undefined1 *)(param_3 + param_2 * 2) = 0;
        return param_2 << 1;
      }
      iVar1 = FUN_10119cb8(*param_1 >> 4,iVar2 + -1);
      if (iVar1 < 0) {
        return 0;
      }
      iVar1 = FUN_10119cb8(*param_1 & 0xf,iVar2);
      iVar2 = iVar2 + 2;
      param_3 = extraout_r2;
      param_1 = extraout_r3;
    } while (-1 < iVar1);
  }
  return 0;
}

