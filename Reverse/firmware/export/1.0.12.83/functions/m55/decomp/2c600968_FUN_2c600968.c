/* FUN_2c600968 @ 0x2c600968 */

void FUN_2c600968(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  bVar1 = FUN_2c6033b4(param_1,param_2,0x4e);
  *(byte *)((int)param_3 + 10) = bVar1;
  if (2 < bVar1) {
    if (param_2 != 0) {
      bVar1 = FUN_2c6033b4(param_1,param_2,0x60);
      uVar4 = (uint)bVar1;
      if (uVar4 < 3) {
        *(undefined1 *)((int)param_3 + 10) = 0;
        return;
      }
      if (uVar4 < 0xfd) {
        *(char *)((int)param_3 + 10) = (char)(*(byte *)((int)param_3 + 10) * uVar4 >> 8);
      }
    }
    sVar2 = FUN_2c6033b4(param_1,param_2,0x49);
    *(short *)(param_3 + 1) = sVar2;
    if (sVar2 != 0) {
      uVar5 = FUN_2c6033b4(param_1,param_2,0x4d);
      uVar5 = FUN_2c603e80(param_1,param_2,uVar5);
      *param_3 = uVar5;
      sVar2 = FUN_2c6033b4(param_1,param_2,0x4a);
      *(short *)((int)param_3 + 6) = sVar2;
      if (sVar2 != 0) {
        uVar3 = FUN_2c6033b4(param_1,param_2,0x4b);
        *(undefined2 *)(param_3 + 2) = uVar3;
      }
      iVar6 = FUN_2c6033b4(param_1,param_2,0x4c);
      *(byte *)((int)param_3 + 0xb) =
           *(byte *)((int)param_3 + 0xb) & 0xf3 | (iVar6 != 0) << 2 | (iVar6 != 0) << 3;
      if (param_2 != 0) {
        bVar1 = FUN_2c6033b4(param_1,param_2,0x67);
        *(byte *)((int)param_3 + 0xb) = *(byte *)((int)param_3 + 0xb) & 0xfc | bVar1 & 3;
        return;
      }
    }
  }
  return;
}

