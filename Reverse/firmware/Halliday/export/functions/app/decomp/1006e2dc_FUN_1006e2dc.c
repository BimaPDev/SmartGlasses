/* FUN_1006e2dc @ 0x1006e2dc */

undefined4 FUN_1006e2dc(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 4) + 8);
  if (uVar3 < 4) {
    if (*(int *)(DAT_1006e314 + uVar3 * 4) == 0) {
      *(int *)(DAT_1006e314 + uVar3 * 4) = param_1;
    }
    pcVar1 = DAT_1006e318;
    if (*DAT_1006e318 == '\0') {
      FUN_1006815c(0x25,0);
      FUN_10068114(0x25);
      uVar2 = DAT_1006e31c;
      *pcVar1 = '\x01';
      FUN_10119dc2(uVar2);
    }
  }
  return 0;
}

