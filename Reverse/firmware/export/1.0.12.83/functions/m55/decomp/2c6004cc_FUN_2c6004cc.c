/* FUN_2c6004cc @ 0x2c6004cc */

void FUN_2c6004cc(undefined4 param_1,int param_2,undefined2 *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  ushort uVar8;
  
  if (param_2 == 0) {
    uVar8 = 0xff;
    bVar1 = false;
  }
  else {
    bVar2 = FUN_2c6033b4(param_1,param_2,0x60);
    uVar8 = (ushort)bVar2;
    if (bVar2 < 3) {
      *(undefined1 *)((int)param_3 + 3) = 0;
      *(undefined1 *)(param_3 + 0x18) = 0;
      *(undefined1 *)(param_3 + 0x1d) = 0;
      *(undefined1 *)(param_3 + 0x22) = 0;
      *(undefined1 *)(param_3 + 0x2a) = 0;
      return;
    }
    uVar3 = FUN_2c6033b4(param_1,param_2,0x67);
    *(undefined1 *)(param_3 + 1) = uVar3;
    bVar1 = bVar2 < 0xfd;
  }
  uVar4 = FUN_2c6033b4(param_1,param_2,0xb);
  *param_3 = uVar4;
  if (*(char *)((int)param_3 + 3) != '\0') {
    bVar2 = FUN_2c6033b4(param_1,param_2,0x21);
    *(byte *)((int)param_3 + 3) = bVar2;
    if (2 < bVar2) {
      uVar6 = FUN_2c6033b4(param_1,param_2,0x20);
      uVar6 = FUN_2c603e80(param_1,param_2,uVar6);
      *(undefined4 *)(param_3 + 2) = uVar6;
      iVar7 = FUN_2c6033b4(param_1,param_2,0x26);
      if ((iVar7 == 0) || ((*(byte *)(iVar7 + 0x19) & 7) == 0)) {
        bVar2 = FUN_2c6033b4(param_1,param_2,0x23);
        *(byte *)((int)param_3 + 0x21) = *(byte *)((int)param_3 + 0x21) & 0xf8 | bVar2 & 7;
        if ((bVar2 & 7) != 0) {
          uVar6 = FUN_2c6033b4(param_1,param_2,0x20);
          uVar6 = FUN_2c603e80(param_1,param_2,uVar6);
          *(undefined4 *)(param_3 + 4) = uVar6;
          uVar6 = FUN_2c6033b4(param_1,param_2,0x22);
          uVar6 = FUN_2c603e80(param_1,param_2,uVar6);
          *(undefined4 *)(param_3 + 8) = uVar6;
          uVar3 = FUN_2c6033b4(param_1,param_2,0x24);
          *(undefined1 *)(param_3 + 6) = uVar3;
          uVar3 = FUN_2c6033b4(param_1,param_2,0x25);
          *(undefined1 *)(param_3 + 10) = uVar3;
        }
        bVar2 = FUN_2c6033b4(param_1,param_2,0x27);
        *(byte *)((int)param_3 + 0x21) = *(byte *)((int)param_3 + 0x21) & 199 | (bVar2 & 7) << 3;
      }
      else {
        FUN_2c62c0d8(param_3 + 4,iVar7,0x1c);
      }
    }
  }
  sVar5 = FUN_2c6033b4(param_1,param_2,0x32);
  param_3[0x1c] = sVar5;
  if ((sVar5 != 0) && (*(char *)(param_3 + 0x1d) != '\0')) {
    bVar2 = FUN_2c6033b4(param_1,param_2,0x31);
    *(byte *)(param_3 + 0x1d) = bVar2;
    if (2 < bVar2) {
      bVar2 = FUN_2c6033b4(param_1,param_2,0x33);
      *(byte *)((int)param_3 + 0x3b) = *(byte *)((int)param_3 + 0x3b) & 0xc1 | (bVar2 & 0x1f) << 1;
      uVar6 = FUN_2c6033b4(param_1,param_2,0x30);
      uVar6 = FUN_2c603e80(param_1,param_2,uVar6);
      *(undefined4 *)(param_3 + 0x1a) = uVar6;
    }
  }
  sVar5 = FUN_2c6033b4(param_1,param_2,0x35);
  param_3[0x20] = sVar5;
  if ((sVar5 != 0) && (*(char *)(param_3 + 0x22) != '\0')) {
    bVar2 = FUN_2c6033b4(param_1,param_2,0x37);
    *(byte *)(param_3 + 0x22) = bVar2;
    if (2 < bVar2) {
      uVar4 = FUN_2c6033b4(param_1,param_2,0x38);
      param_3[0x21] = uVar4;
      uVar6 = FUN_2c6033b4(param_1,param_2,0x36);
      uVar6 = FUN_2c603e80(param_1,param_2,uVar6);
      *(undefined4 *)(param_3 + 0x1e) = uVar6;
    }
  }
  if (*(char *)(param_3 + 0x18) != '\0') {
    iVar7 = FUN_2c6033b4(param_1,param_2,0x28);
    *(int *)(param_3 + 0x12) = iVar7;
    if (iVar7 != 0) {
      bVar2 = FUN_2c6033b4(param_1,param_2,0x29);
      *(byte *)(param_3 + 0x18) = bVar2;
      if (2 < bVar2) {
        iVar7 = FUN_2c614f58(*(undefined4 *)(param_3 + 0x12));
        if (iVar7 == 2) {
          uVar6 = FUN_2c6033b4(param_1,param_2,0x57);
          *(undefined4 *)(param_3 + 0x14) = uVar6;
          uVar6 = FUN_2c6033b4(param_1,param_2,0x55);
          uVar6 = FUN_2c603e80(param_1,param_2,uVar6);
          *(undefined4 *)(param_3 + 0x16) = uVar6;
        }
        else {
          uVar6 = FUN_2c6033b4(param_1,param_2,0x2a);
          uVar6 = FUN_2c603e80(param_1,param_2,uVar6);
          *(undefined4 *)(param_3 + 0x16) = uVar6;
          uVar3 = FUN_2c6033b4(param_1,param_2,0x2b);
          *(undefined1 *)((int)param_3 + 0x31) = uVar3;
          iVar7 = FUN_2c6033b4(param_1,param_2,0x2c);
          *(bool *)(param_3 + 0x19) = iVar7 != 0;
        }
      }
    }
  }
  if (*(char *)(param_3 + 0x2a) != '\0') {
    sVar5 = FUN_2c6033b4(param_1,param_2,0x40);
    param_3[0x26] = sVar5;
    if ((sVar5 != 0) && (2 < *(byte *)(param_3 + 0x2a))) {
      bVar2 = FUN_2c6033b4(param_1,param_2,0x45);
      *(byte *)(param_3 + 0x2a) = bVar2;
      if (2 < bVar2) {
        uVar4 = FUN_2c6033b4(param_1,param_2,0x41);
        param_3[0x27] = uVar4;
        uVar4 = FUN_2c6033b4(param_1,param_2,0x42);
        param_3[0x28] = uVar4;
        uVar4 = FUN_2c6033b4(param_1,param_2,0x43);
        param_3[0x29] = uVar4;
        uVar6 = FUN_2c6033b4(param_1,param_2,0x44);
        uVar6 = FUN_2c603e80(param_1,param_2,uVar6);
        *(undefined4 *)(param_3 + 0x24) = uVar6;
      }
    }
  }
  if (!bVar1) {
    return;
  }
  uVar3 = (undefined1)
          ((uint)((int)(short)(ushort)*(byte *)(param_3 + 0x2a) * (int)(short)uVar8) >> 8);
  *(undefined1 *)((int)param_3 + 3) = uVar3;
  *(undefined1 *)(param_3 + 0x18) = uVar3;
  *(undefined1 *)(param_3 + 0x1d) = uVar3;
  *(undefined1 *)(param_3 + 0x22) = uVar3;
  *(undefined1 *)(param_3 + 0x2a) = uVar3;
  return;
}

