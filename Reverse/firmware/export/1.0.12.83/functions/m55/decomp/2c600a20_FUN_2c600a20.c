/* FUN_2c600a20 @ 0x2c600a20 */

void FUN_2c600a20(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  sVar2 = FUN_2c6033b4(param_1,param_2,0x50);
  *(short *)(param_3 + 1) = sVar2;
  if (sVar2 != 0) {
    bVar1 = FUN_2c6033b4(param_1,param_2,0x53);
    *(byte *)(param_3 + 4) = bVar1;
    if (2 < bVar1) {
      if (param_2 != 0) {
        bVar1 = FUN_2c6033b4(param_1,param_2,0x60);
        uVar3 = (uint)bVar1;
        if (uVar3 < 3) {
          *(undefined1 *)(param_3 + 4) = 0;
          return;
        }
        if (uVar3 < 0xfd) {
          *(char *)(param_3 + 4) = (char)(*(byte *)(param_3 + 4) * uVar3 >> 8);
        }
      }
      uVar4 = FUN_2c6033b4(param_1,param_2,0x52);
      uVar4 = FUN_2c603e80(param_1,param_2,uVar4);
      *param_3 = uVar4;
      uVar4 = FUN_2c6033b4(param_1,param_2,0x54);
      param_3[3] = uVar4;
      iVar5 = FUN_2c6033b4(param_1,param_2,0x51);
      *(byte *)((int)param_3 + 0x11) = *(byte *)((int)param_3 + 0x11) & 0xfb | (iVar5 != 0) << 2;
      if (param_2 != 0) {
        bVar1 = FUN_2c6033b4(param_1,param_2,0x67);
        *(byte *)((int)param_3 + 0x11) = *(byte *)((int)param_3 + 0x11) & 0xfc | bVar1 & 3;
        return;
      }
    }
  }
  return;
}

