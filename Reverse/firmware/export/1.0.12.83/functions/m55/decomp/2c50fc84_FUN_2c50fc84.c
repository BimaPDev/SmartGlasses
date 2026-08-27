/* FUN_2c50fc84 @ 0x2c50fc84 */

void FUN_2c50fc84(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  int iStack_c;
  
  iVar5 = *param_1;
  if (*(short *)(iVar5 + 0x414) == 0) {
    if (*(short *)(iVar5 + 0x416) != 0) goto LAB_2c50fcbc;
  }
  else {
    cVar1 = *(char *)(iVar5 + 0x40c);
    while (cVar1 != '\0') {
      iVar3 = iVar5 + (uint)(byte)(cVar1 - 1U) * 4;
      *(byte *)(iVar5 + 0x40c) = cVar1 - 1U;
      iVar4 = *(int *)(iVar3 + 0x30c);
      *(undefined4 *)(iVar3 + 0x30c) = 0;
      *(undefined2 *)(iVar4 + 0x8e) = 0;
      cVar1 = *(char *)(iVar5 + 0x40c);
    }
    if (*(short *)(iVar5 + 0x416) == 0) goto LAB_2c50fce4;
LAB_2c50fcbc:
    *(undefined2 *)(*(int *)(iVar5 + 0x410) + 0x8c) = 0;
  }
  bVar2 = *(byte *)(iVar5 + 0x40c);
  if (bVar2 != 0) {
    iVar3 = 0;
    do {
      iVar4 = iVar3 * 4;
      iVar3 = (int)(char)((char)iVar3 + '\x01');
      *(undefined4 *)(iVar5 + iVar4 + 0x30c) = 0;
    } while (iVar3 < (int)(uint)bVar2);
  }
LAB_2c50fce4:
  *(undefined1 *)(iVar5 + 0x40c) = 0;
  *(undefined4 *)(iVar5 + 0x410) = 0;
  *(undefined4 *)(iVar5 + 0x414) = 0;
  FUN_2c50f9b8(iVar5);
  iStack_c = *DAT_2c607e4c;
  sStack_14 = FUN_2c600c2c();
  sStack_e = *(short *)(iVar5 + 0x1a) + sStack_14;
  sStack_10 = sStack_14 + *(short *)(iVar5 + 0x18);
  sStack_12 = *(short *)(iVar5 + 0x16) - sStack_14;
  sStack_14 = *(short *)(iVar5 + 0x14) - sStack_14;
  FUN_2c6078f0(iVar5,&sStack_14);
  if (*DAT_2c607e4c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

