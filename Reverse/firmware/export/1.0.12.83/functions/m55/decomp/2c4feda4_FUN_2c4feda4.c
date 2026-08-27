/* FUN_2c4feda4 @ 0x2c4feda4 */

int FUN_2c4feda4(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = FUN_2c5fefc8(DAT_2c4fee28,param_1,param_3,param_4,param_4);
  *(undefined4 *)(iVar4 + 0x10c) = param_3;
  *(undefined4 *)(iVar4 + 0x124) = param_4;
  *(undefined1 *)(iVar4 + 0x110) = *param_2;
  *(undefined1 *)(iVar4 + 0x111) = param_2[1];
  *(undefined2 *)(iVar4 + 0x112) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)(iVar4 + 0x114) = param_2[4];
  cVar1 = param_2[10];
  *(char *)(iVar4 + 0x11a) = cVar1;
  sVar2 = *(short *)(param_2 + 0xc);
  *(short *)(iVar4 + 0x11c) = sVar2;
  sVar3 = *(short *)(param_2 + 0xe);
  *(short *)(iVar4 + 0x11e) = sVar3;
  *(undefined1 *)(iVar4 + 0x120) = param_2[0x10];
  *(undefined1 *)(iVar4 + 0x115) = param_2[5];
  *(undefined2 *)(iVar4 + 0x118) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)(iVar4 + 0x116) = param_2[6];
  if (cVar1 != '\0') {
    if (sVar2 < 5) {
      *(undefined2 *)(iVar4 + 0x11c) = 4;
    }
    if (sVar3 < 0xd) {
      *(undefined2 *)(iVar4 + 0x11e) = 0xc;
    }
  }
  FUN_2c5ff0b8(iVar4);
  return iVar4;
}

