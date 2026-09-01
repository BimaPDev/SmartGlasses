/* FUN_101130d8 @ 0x101130d8 */

void FUN_101130d8(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [8];
  
  iVar1 = param_1 * 0x118 + DAT_10113130;
  FUN_10119ddc(auStack_18,8,DAT_10113134,param_1);
  FUN_101136cc(iVar1,DAT_1011313c + param_1 * 0x1000,0x1000,DAT_10113140,
               param_1 * 0x18 + DAT_10113138,0,0,0xf,1,auStack_18);
  *(byte *)(iVar1 + 0xd) = *(byte *)(iVar1 + 0xd) & 0xfb;
  return;
}

