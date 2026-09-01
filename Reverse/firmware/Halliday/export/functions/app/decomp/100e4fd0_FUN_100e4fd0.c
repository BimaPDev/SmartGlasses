/* FUN_100e4fd0 @ 0x100e4fd0 */

void FUN_100e4fd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar4 = (DAT_100e5064 - DAT_100e5060) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100e5068 | uVar4,DAT_100e506c);
  FUN_100e4fc0(0xffffffff,0xffffffff);
  puVar1 = (undefined4 *)FUN_100e4ed0(param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100a5b78(DAT_100e5070 | uVar4,DAT_100e5074);
  }
  else {
    if (((int)((uint)*(byte *)(puVar1 + 5) << 0x1f) < 0) && (*(byte *)((int)puVar1 + 10) < 7)) {
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xfe;
      FUN_100e0754(*puVar1,*(undefined1 *)(puVar1 + 2),0);
      uVar2 = 7;
    }
    else {
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 2;
      *(undefined2 *)((int)puVar1 + 10) = 0xff03;
      if ((puVar1[6] != 0) && (pcVar3 = *(code **)(puVar1[6] + 4), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1,*(undefined1 *)((int)puVar1 + 9));
      }
      FUN_100e4f38(puVar1,0);
      uVar2 = 4;
    }
    *(undefined1 *)((int)puVar1 + 10) = uVar2;
  }
  FUN_100e4fb4();
  return;
}

