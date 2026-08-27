/* FUN_140315d4 @ 0x140315d4 */

void FUN_140315d4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_14031620;
  uVar1 = DAT_1403161c;
  if (*DAT_14031618 != '\0') {
    return;
  }
  *DAT_14031618 = '\x01';
  iVar3 = FUN_14026764(0,0,uVar2,uVar1,0);
  if (iVar3 == 0) {
    FUN_14026a60();
    return;
  }
  FUN_1402a6e8(4,0x91,DAT_1403162c,DAT_14031628,DAT_14031624);
  return;
}

