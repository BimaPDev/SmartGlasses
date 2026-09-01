/* FUN_100e58ec @ 0x100e58ec */

uint FUN_100e58ec(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 local_3c;
  ushort local_3a;
  undefined2 local_38;
  uint local_36;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 *local_1c;
  
  uVar4 = (DAT_100e59bc - DAT_100e59c0) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100e59c4 | uVar4,DAT_100e59c8);
  FUN_100e4fc0(0xffffffff,0xffffffff);
  puVar2 = (undefined4 *)FUN_100e4f04(param_1,param_2);
  uVar1 = DAT_100e59d8;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100a5b78(DAT_100e59cc | uVar4,DAT_100e59d0);
    uVar3 = 0xfffffffb;
  }
  else {
    uVar3 = *(byte *)(puVar2 + 5) & 4;
    if ((*(byte *)(puVar2 + 5) & 4) == 0) {
      FUN_100a5b78(DAT_100e59dc | uVar4,DAT_100e59e0);
    }
    else {
      if (0x3fe < (param_3 - 1 & 0xffff)) {
        param_3 = 0x400;
      }
      uVar3 = 0;
      local_30 = 2;
      uStack_2c = 0;
      local_28 = DAT_100e59d4;
      if (param_4 == 0) {
        param_4 = 10;
      }
      *(short *)(puVar2 + 3) = (short)param_3;
      local_24 = uVar1;
      puVar2[4] = param_4;
      local_20 = 8;
      local_3a = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
      local_3c = 0x201;
      local_38 = 0x410;
      local_36 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
                 param_4 >> 0x18;
      local_1e = 10;
      local_1c = &local_3c;
      FUN_100e057c(*puVar2,*(undefined1 *)(puVar2 + 2),0xf,&local_30,3);
    }
  }
  FUN_100e4fb4();
  return uVar3;
}

