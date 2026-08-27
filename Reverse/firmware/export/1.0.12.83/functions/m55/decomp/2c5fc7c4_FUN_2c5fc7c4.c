/* FUN_2c5fc7c4 @ 0x2c5fc7c4 */

void FUN_2c5fc7c4(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 4);
  *(char *)(param_1 + 4) = cVar1 + -1;
  if ((char)(cVar1 + -1) == '\0') {
    if (param_1[6] != 0) {
      FUN_2c491d8c(param_1[6] & 0xff);
      param_1[6] = 0;
    }
    iVar2 = DAT_2c5fc860;
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_2c5fee30(*(undefined4 *)(iVar2 + 4),param_1[7]);
    uVar3 = *(undefined4 *)(iVar2 + 4);
    *(undefined1 *)((int)param_1 + 0x11) = 0xff;
    param_1[7] = 0;
    param_1[8] = 0;
    *(char *)(iVar2 + 0x4c) = *(char *)(iVar2 + 0x4c) + -1;
    FUN_2c5fee30(uVar3,param_1);
    if ((*(char *)(iVar2 + 0x4c) == '\0') && (*DAT_2c5fc868 == 0)) {
      FUN_2c5fee28(*(undefined4 *)(iVar2 + 4));
    }
  }
  if (*DAT_2c5fc864 == '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x5d4,DAT_2c5fc874,DAT_2c5fc878,DAT_2c5fc870,DAT_2c5fc86c,param_1,
        (int)*(char *)(param_1 + 4),(int)*(char *)(DAT_2c5fc860 + 0x4c));
}

