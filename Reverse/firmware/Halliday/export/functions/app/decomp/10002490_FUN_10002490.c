/* FUN_10002490 @ 0x10002490 */

void FUN_10002490(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r3;
  int iVar3;
  int iVar4;
  int iVar5;
  
  do {
    puVar2 = *(undefined4 **)(param_1 + 0x24);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2 != *(undefined4 **)(param_1 + 0x28)) {
        FUN_100031f8(DAT_10002558,0x1c1,DAT_10002554,DAT_10002550);
        puVar2 = extraout_r3;
      }
      uVar1 = *puVar2;
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      if (puVar2 == *(undefined4 **)(param_1 + 0x2c)) {
        *(undefined4 *)(param_1 + 0x2c) = uVar1;
      }
      *puVar2 = 0;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
    iVar4 = *(int *)(param_1 + 0x28);
    FUN_10001ca4(0);
    iVar3 = param_2;
    if (iVar4 == 0) {
      FUN_10001c5c(0);
      if ((int)((uint)*(byte *)(param_1 + 0x30) << 0x1e) < 0) {
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfd;
        FUN_100030e8(param_1 + 0x34);
      }
    }
    else {
      if (*(int *)(param_1 + 0x24) == 0) {
        FUN_10001c5c(1);
      }
      if (param_2 == 0) {
        if (*(byte *)(iVar4 + -0x9b) == 6) {
          FUN_10001bb8(param_1,iVar4 + -0x9c);
          *(undefined4 *)(param_1 + 0x20) = 0;
          iVar3 = 1;
        }
        else if (*(byte *)(iVar4 + -0x9b) - 7 < 3) {
          FUN_10001cbc();
        }
        else {
          FUN_10001f08(param_1);
        }
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar5 = *(int *)(param_1 + 0x24) + -0x9c;
      FUN_10001af4(iVar5,*(undefined4 *)(param_1 + 0x20));
      FUN_100019c4(iVar5);
    }
    *(int *)(param_1 + 0x24) = iVar4;
  } while (iVar3 != 0);
  return;
}

