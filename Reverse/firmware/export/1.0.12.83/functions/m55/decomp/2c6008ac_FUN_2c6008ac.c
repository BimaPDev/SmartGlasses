/* FUN_2c6008ac @ 0x2c6008ac */

void FUN_2c6008ac(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  bVar1 = FUN_2c6033b4(param_1,param_2,0x46);
  *(byte *)((int)param_3 + 0x31) = bVar1;
  if (2 < bVar1) {
    if (param_2 != 0) {
      bVar1 = FUN_2c6033b4(param_1,param_2,0x60);
      uVar3 = (uint)bVar1;
      if (uVar3 < 3) {
        *(undefined1 *)((int)param_3 + 0x31) = 0;
        return;
      }
      if (uVar3 < 0xfd) {
        *(char *)((int)param_3 + 0x31) = (char)(*(byte *)((int)param_3 + 0x31) * uVar3 >> 8);
      }
    }
    *param_3 = 0x1000000;
    iVar5 = (int)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14));
    if (iVar5 < 0) {
      iVar5 = iVar5 + 1;
    }
    *(short *)(param_3 + 1) = (short)(iVar5 >> 1);
    iVar5 = (int)(short)((*(short *)(param_1 + 0x1a) + 1) - *(short *)(param_1 + 0x16));
    if (iVar5 < 0) {
      iVar5 = iVar5 + 1;
    }
    *(short *)((int)param_3 + 6) = (short)(iVar5 >> 1);
    cVar2 = FUN_2c6033b4(param_1,param_2,0x48);
    *(char *)(param_3 + 0xc) = cVar2;
    if (cVar2 != '\0') {
      uVar4 = FUN_2c6033b4(param_1,param_2,0x47);
      uVar4 = FUN_2c603e80(param_1,param_2,uVar4);
      param_3[0xb] = uVar4;
    }
    if (param_2 != 0) {
      bVar1 = FUN_2c6033b4(param_1,param_2,0x67);
      *(byte *)((int)param_3 + 0x32) = *(byte *)((int)param_3 + 0x32) & 0xf0 | bVar1 & 0xf;
      return;
    }
  }
  return;
}

