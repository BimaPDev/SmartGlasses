/* FUN_2c60d458 @ 0x2c60d458 */

uint FUN_2c60d458(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_r12;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (param_2 & 0xffff) >> 8;
  uVar3 = ((param_1 & 0xffffff) >> 0x10) + param_4;
  uVar2 = in_r12 + uVar5;
  uVar4 = (param_2 & 0xff) + (param_1 & 0xff);
  if (0xfe < uVar3) {
    uVar3 = 0xff;
  }
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  if (0xfe < uVar4) {
    uVar4 = 0xff;
  }
  if (param_3 != 0xff) {
    iVar1 = 0xff - param_3;
    return (param_3 * uVar4 + iVar1 * (param_2 & 0xff)) * 0x8081 >> 0x17 & 0xff |
           ((param_3 * uVar2 + iVar1 * uVar5) * 0x8081 >> 0x17 & 0xff) << 8 |
           ((param_3 * uVar3 + iVar1 * param_4) * 0x8081 >> 0x17 & 0xff) << 0x10 | 0xff000000;
  }
  return param_1 & 0xff000000 | uVar4 & 0xff | (uVar2 & 0xff) << 8 | (uVar3 & 0xff) << 0x10;
}

