/* FUN_140984b4 @ 0x140984b4 */

void FUN_140984b4(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 3) != '\x10') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    if (*(char *)(param_1 + 3) == '\x0f') {
      cVar1 = *(char *)(param_2 + 0xd);
      fVar3 = 8.0;
    }
    else {
      fVar3 = (float)VectorUnsignedToFloat
                               (*(undefined4 *)(param_2 + 4),(byte)(in_fpscr >> 0x16) & 3);
      cVar1 = *(char *)(param_2 + 0xd);
      fVar3 = fVar3 / DAT_1409854c;
    }
    if (cVar1 == '\x18') {
      uVar2 = 4;
    }
    else if (cVar1 == ' ') {
      uVar2 = 4;
    }
    else {
      uVar2 = 2;
    }
    fVar4 = (float)VectorSignedToFloat((int)(((ulonglong)(*(uint *)(param_2 + 0x20) >> 1) /
                                             (ulonglong)uVar2) / (ulonglong)*(byte *)(param_2 + 0xc)
                                            ),(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (fVar4 * DAT_1409854c) / fVar3 + 0.5;
    uVar2 = FUN_140e58f8();
    *(uint *)(param_1 + 4) =
         (uint)((ulonglong)DAT_14098554 *
                (ulonglong)
                ((uint)(0.0 < fVar3) * (int)fVar3 *
                (uint)((ulonglong)DAT_14098550 * (ulonglong)(uVar2 >> 5) >> 0x27)) >> 0x23);
    return;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

