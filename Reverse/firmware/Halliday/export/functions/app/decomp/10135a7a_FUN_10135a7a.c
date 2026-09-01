/* FUN_10135a7a @ 0x10135a7a */

byte FUN_10135a7a(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 8);
  uVar1 = FUN_1013364a(*param_1);
  if (uVar1 == 0) {
    bVar2 = 8;
  }
  else if (*(byte *)(iVar3 + 3) == uVar1) {
    uVar1 = (uint)(*(byte *)((int)param_1 + 0x69) & *(byte *)(iVar3 + 5));
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & *(byte *)(iVar3 + 4) & 8;
    *(char *)((int)param_1 + 0x69) = (char)(uVar1 & 10);
    if ((int)(uVar1 << 0x1e) < 0) {
      FUN_10135440(param_1 + 0x18,8,uVar1,uVar1 & 10,param_4);
    }
    if (((int)((uint)*(byte *)(param_1 + 0x1a) << 0x1f) < 0) &&
       ((int)((uint)*(byte *)((int)param_1 + 0x69) << 0x1f) < 0)) {
      FUN_100d1dfc(param_1);
    }
    bVar2 = *(byte *)((int)param_1 + 0x69) & 0xfe;
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfefe;
    if (((*(byte *)((int)param_1 + 0x69) & 0xfe) == 0) &&
       (FUN_100d0c1c(*param_1), *(short *)(param_1 + 0x1a) == 0)) {
      FUN_100d1ed4(param_1,bVar2);
      return bVar2;
    }
    bVar2 = 0;
  }
  else {
    bVar2 = 6;
  }
  return bVar2;
}

