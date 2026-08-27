/* FUN_2c61d788 @ 0x2c61d788 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c61d788(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (param_2 & 0xffff) >> 8;
  uVar3 = (param_2 & 0xffffff) >> 0x10;
  iVar2 = *(int *)(_LAB_2c61d864 + 0x24) << 0x1f;
  if (iVar2 < 0) {
    uVar1 = FUN_2c62eea0();
    iVar2 = 0xff - param_3;
    return ((uVar1 & 0xff) * param_3 + iVar2 * (param_2 & 0xff)) * 0x8081 >> 0x17 & 0xff |
           (((((uVar1 & 0xffff) >> 8) * param_3 + iVar2 * uVar4) * 0x8081 & 0x7fffffff) >> 0x17) <<
           8 | (((((uVar1 & 0xffffff) >> 0x10) * param_3 + iVar2 * uVar3) * 0x8081 & 0x7fffffff) >>
               0x17) << 0x10 | 0xff000000;
  }
  uVar1 = FUN_2c62ee7c(0x12,2,param_3,iVar2,param_4);
  iVar2 = 0xff - param_3;
  return ((uVar1 & 0xff) * param_3 + iVar2 * (param_2 & 0xff)) * 0x8081 >> 0x17 & 0xff |
         (((((uVar1 & 0xffff) >> 8) * param_3 + iVar2 * uVar4) * 0x8081 & 0x7fffffff) >> 0x17) << 8
         | (((((uVar1 & 0xffffff) >> 0x10) * param_3 + iVar2 * uVar3) * 0x8081 & 0x7fffffff) >> 0x17
           ) << 0x10 | 0xff000000;
}

