/* FUN_100e023c @ 0x100e023c */

void FUN_100e023c(undefined4 param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  FUN_100e022c(0xffffffff,0xffffffff);
  puVar1 = (undefined4 *)FUN_100dffcc(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100a5b78(DAT_100e02a0 | (DAT_100e0298 - DAT_100e029c) * 0x20 & 0xff00U,DAT_100e02a4);
  }
  else {
    FUN_1013cb84(puVar1 + 0x1c);
    *(undefined1 *)((int)puVar1 + 0x5d) = 10;
    if ((puVar1[0x1a] != 0) && (pcVar2 = *(code **)(puVar1[0x1a] + 8), pcVar2 != (code *)0x0)) {
      (*pcVar2)(*puVar1,*(undefined1 *)((int)puVar1 + 0x62));
    }
    FUN_10137e30(puVar1);
  }
  FUN_100e0220();
  return;
}

