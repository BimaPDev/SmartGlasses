/* FUN_2c6007ec @ 0x2c6007ec */

void FUN_2c6007ec(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  bVar1 = FUN_2c6033b4(param_1,param_2,0x56);
  *(byte *)(param_3 + 8) = bVar1;
  if (2 < bVar1) {
    if (param_2 != 0) {
      bVar1 = FUN_2c6033b4(param_1,param_2,0x60);
      uVar4 = (uint)bVar1;
      if (uVar4 < 3) {
        *(undefined1 *)(param_3 + 8) = 0;
        return;
      }
      if (uVar4 < 0xfd) {
        *(char *)(param_3 + 8) = (char)(*(byte *)(param_3 + 8) * uVar4 >> 8);
      }
    }
    uVar5 = FUN_2c6033b4(param_1,param_2,0x55);
    uVar5 = FUN_2c603e80(param_1,param_2,uVar5);
    param_3[3] = uVar5;
    uVar3 = FUN_2c6033b4(param_1,param_2,0x58);
    *(undefined2 *)((int)param_3 + 0x1a) = uVar3;
    uVar3 = FUN_2c6033b4(param_1,param_2,0x59);
    *(undefined2 *)(param_3 + 6) = uVar3;
    bVar1 = FUN_2c6033b4(param_1,param_2,0x5a);
    *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) & 0xf8 | bVar1 & 7;
    if (param_2 != 0) {
      bVar1 = FUN_2c6033b4(param_1,param_2,0x67);
      *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) & 199 | (bVar1 & 7) << 3;
    }
    uVar5 = FUN_2c6033b4(param_1,param_2,0x57);
    *param_3 = uVar5;
    uVar2 = FUN_2c6033b4(param_1,param_2,0x5b);
    *(undefined1 *)((int)param_3 + 0x22) = uVar2;
  }
  return;
}

