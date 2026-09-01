/* FUN_100e5820 @ 0x100e5820 */

uint FUN_100e5820(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 *local_14;
  
  uVar2 = (DAT_100e58cc - DAT_100e58c8) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100e58d0 | uVar2,DAT_100e58d4);
  FUN_100e4fc0(0xffffffff,0xffffffff);
  puVar1 = (undefined4 *)FUN_100e4f04(param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100a5b78(uVar2 | 0x3a40021,DAT_100e58d8);
    uVar3 = 0xfffffffb;
  }
  else {
    uVar3 = *(byte *)(puVar1 + 5) & 4;
    if ((*(byte *)(puVar1 + 5) & 4) == 0) {
      FUN_100a5b78(uVar2 | 0x3ac0021,DAT_100e58e8);
    }
    else {
      FUN_100a5b78(uVar2 | 0x1320031,DAT_100e58d4);
      local_20 = DAT_100e58dc;
      local_1c = DAT_100e58e0;
      local_18 = 8;
      local_28[0] = DAT_100e58e4;
      local_16 = 4;
      local_14 = local_28;
      FUN_100e057c(*puVar1,*(undefined1 *)(puVar1 + 2),0xd,&local_20,2);
      uVar3 = 0;
    }
  }
  FUN_100e4fb4();
  return uVar3;
}

