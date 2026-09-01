/* FUN_1013915c @ 0x1013915c */

undefined4 FUN_1013915c(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x18);
  uVar2 = param_2;
  if ((*(byte *)(param_1 + 0x38) & 0x40) != 0) {
    uVar2 = 1;
  }
  if (param_2 < uVar3) {
    FUN_1013909a();
    FUN_100edfc4();
    FUN_100ee018(param_1);
    while ((int)uVar2 < *(int *)(param_1 + 0x3c)) {
      FUN_1011dbde(param_1 + 0x40,0xffffffff);
    }
    FUN_10114a38();
    if ((1 < uVar3) && (*(char *)(param_1 + 0x19) == '\0')) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    *(char *)(param_1 + 0x18) = (char)param_2;
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    FUN_101150e0();
    for (; (int)param_2 < (int)uVar3; param_2 = param_2 + 1) {
      thunk_FUN_10067470(*(undefined4 *)(param_1 + 0x10 + param_2 * 4));
      *(undefined4 *)(param_1 + 0x10 + param_2 * 4) = 0;
    }
  }
  return 0;
}

