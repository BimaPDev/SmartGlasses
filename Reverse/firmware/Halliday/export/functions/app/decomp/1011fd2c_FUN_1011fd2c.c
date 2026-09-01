/* FUN_1011fd2c @ 0x1011fd2c */

void FUN_1011fd2c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_1011a8f2();
  if (uVar1 != 0) {
    uVar2 = thunk_FUN_10115958();
    *(undefined4 *)(param_1 + -8) = uVar2;
  }
  if ((*(byte *)(param_1 + 0x37) & 7) >> 1 != (uVar1 & 3)) {
    cVar3 = *(char *)(param_1 + 0x35) + '\x01';
    *(char *)(param_1 + 0x35) = cVar3;
    if (*(char *)(param_1 + 0x34) == cVar3) {
      *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xf9 | (byte)((uVar1 & 3) << 1);
      FUN_1011fc94(param_1 + -0x10,uVar1);
      *(undefined1 *)(param_1 + 0x35) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x37) & 6) == 2) {
    FUN_1011fc94(param_1 + -0x10,1);
  }
  uVar4 = thunk_FUN_10115958();
  if (*(uint *)(param_1 + -0xc) < (uint)((int)uVar4 - *(int *)(param_1 + -8))) {
    *(undefined4 *)(param_1 + -8) = 0;
    *(undefined1 *)(param_1 + 0x35) = 0;
    *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xf8 | 6;
    return;
  }
  FUN_1013cbaa(param_1,(int)((ulonglong)uVar4 >> 0x20),*(undefined4 *)(param_1 + -0x10),0);
  return;
}

