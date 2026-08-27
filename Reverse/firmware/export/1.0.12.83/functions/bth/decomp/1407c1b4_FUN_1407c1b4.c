/* FUN_1407c1b4 @ 0x1407c1b4 */

void FUN_1407c1b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x84) = param_3;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x14) = 48000;
  uVar1 = DAT_1407c20c;
  if (*(char *)(param_1 + 6) != '\0') {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    *(undefined2 *)(param_1 + 0x8c) = 0;
  }
  uVar2 = DAT_1407c214;
  uVar1 = DAT_1407c210;
  *(char *)(param_1 + 0x36) = *(char *)(param_1 + 6);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar3 = DAT_1407c21c;
  uVar1 = DAT_1407c218;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(int *)(param_1 + 0x24) = param_1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  return;
}

