/* FUN_101221a8 @ 0x101221a8 */

undefined4 FUN_101221a8(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((((*(ushort *)(param_1 + 6) < 0x46) || (0xb < param_1[4])) || (bVar1 = param_1[3], bVar1 == 0)
      ) || (((iVar2 = FUN_100831e8(param_1[4],*(ushort *)(param_1 + 6) + 0x76c,param_3,param_4,
                                   param_4), iVar2 < (int)(uint)bVar1 || (0x17 < param_1[2])) ||
            ((0x3b < param_1[1] || (0x3b < *param_1)))))) {
    uVar3 = 0xffffffea;
  }
  else if (*(ushort *)(param_1 + 8) < 1000) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffea;
  }
  return uVar3;
}

