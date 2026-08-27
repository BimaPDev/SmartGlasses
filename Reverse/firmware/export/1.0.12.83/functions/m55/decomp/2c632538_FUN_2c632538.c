/* FUN_2c632538 @ 0x2c632538 */

void FUN_2c632538(int param_1,char *param_2)

{
  short sVar1;
  char cVar2;
  char *pcVar3;
  
  sVar1 = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  cVar2 = *param_2;
  pcVar3 = param_2;
  if (cVar2 == '\0') {
    sVar1 = 1;
  }
  else {
    do {
      if (cVar2 == '\n') {
        sVar1 = sVar1 + 1;
        *(short *)(param_1 + 0x34) = sVar1;
      }
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    sVar1 = sVar1 + 1;
  }
  *(short *)(param_1 + 0x34) = sVar1;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)((uint)*(byte *)(param_1 + 0x3c) << 0x1b)) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_2c62bea8();
  }
  *(char **)(param_1 + 0x30) = param_2;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 0x10;
  FUN_2c607df0(param_1);
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  FUN_2c607df0();
  return;
}

