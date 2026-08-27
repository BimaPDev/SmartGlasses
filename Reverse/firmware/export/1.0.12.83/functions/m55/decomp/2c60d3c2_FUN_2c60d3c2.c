/* FUN_2c60d3c2 @ 0x2c60d3c2 */

uint FUN_2c60d3c2(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_r12;
  char in_ZR;
  
  iVar1 = (int)(short)(ushort)(byte)(param_1 >> 0x10) * (int)(short)(ushort)(byte)(param_2 >> 0x10)
          >> 8;
  uVar2 = (int)(short)((ushort)param_1 & 0xff) * (int)(short)(param_2 & 0xff) >> 8;
  if (in_ZR == '\0') {
    iVar3 = 0xff - param_3;
    return (param_3 * uVar2 + iVar3 * (param_2 & 0xff)) * 0x8081 >> 0x17 & 0xff |
           ((uint)((param_3 * (param_4 >> 8) + iVar3 * in_r12) * 0x8081) >> 0x17 & 0xff) << 8 |
           ((param_3 * iVar1 + iVar3 * ((param_2 & 0xffffff) >> 0x10)) * 0x8081 >> 0x17 & 0xff) <<
           0x10 | 0xff000000;
  }
  return param_1 & 0xff000000 | uVar2 | (param_4 >> 8 & 0xffU) << 8 | iVar1 << 0x10;
}

